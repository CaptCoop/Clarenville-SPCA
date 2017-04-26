<?php

/**
 * @file
 * Part of the animal_adoption module.  This file deals with animal fostering
 * and all its components.
 */

/**
 *Page callback from the adoptions,module file
 *
 *$arg is the id number of the animal in question
 */
function animal_adoptions_build_foster_form($arg) {

  /*scope*/

  $build;
  /*get the user id*/


  global $user;
  $thisid = $user->uid;

  //CHECK TO SEE IF USER APPLIED TO ADOPT THIS ANIMAL BEFORE
  $exists = check_for_previous_foster_app($thisid, $arg);

  if (isset($exists->id)) {
    drupal_set_message(t('You have already applied to foster this animal.  The SPCA staff will contact you by email once they have reviewed your application.  Thank you for your paitence'), 'warning');
    $just_seen = drupal_get_path_alias('node/' . $arg);
    drupal_goto($just_seen);
  }
  else {
    /*get the name and animal family of the animal*/


    $namefam = get_animal_name_and_family_by_id($arg);

    $build = array(
      'header_text' => array(
        '#type' => 'markup',
        '#markup' => '<div><h2>What to consider before fostering an animal from the SPCA</h2>
            <p>We are looking for homes for animals who have been with us for a long time and could use a break from kennel life.</p>
            <p>When you foster with us, all supplies will be provided.</p>
            <p>You will need reliable transportation to bring your animal for vet checkups at our ADOPTION & RESCUE CENTER on 125 HUNTLEY DRIVE, CLARENVILLE and to transport your animal in the event of an emergency.</p>
            <p>If this sounds like something you are interested in helping with, please take a few moments to fill out the form below.  Your application will be instantly sent to one of our volunteers for review.</p>
            <h4>You are applying to foster <span>' . $namefam['name'] . '</span></h4></div>',
      ),
      'example_form' => drupal_get_form('build_foster_data_collection_form', $arg),
    );
  }
  return $build;
}

/**
 *Gets called by the function above.
 *Call is made seperately to get teh markup to appear on the top of the page
 *
 */
function build_foster_data_collection_form($form, &$form_state, $arg) {
  /*get the user id*/


  global $user;
  $thisid = $user->uid;

  /*check to see if this user has already filled out the form*/


  /*of so, get the data and load the form*/


  $prev_data = get_foster_data_by_user_id($thisid);

  $form['animal-id'] = array(
    '#type' => 'hidden',
    '#value' => $arg,
  );
  $form['start-date'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#title' => t('When are you available to start'),
    // 'datepicker',
    '#type' => 'date_popup',
    '#date_format' => 'Y-m-d',
    '#required' => TRUE,
    '#default_value' => (isset($prev_data->start_date)) ? $prev_data->start_date : NULL,
  );
  $form['are-you'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('Are you:'),
    '#options' => array(
      'working' => t('Working'),
      'student' => t('Student'),
      'retired' => t('Retired'),
      'other' => t('Other'),
    ),
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->are_you)) ? $prev_data->are_you : NULL,
  );
  $form['house-type'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('What type of home do you live in'),
    '#options' => array(
      'house' => t('House'),
      'town-house' => t('Town House'),
      'apartment' => t('Apartment'),
      'mobile-mini' => t('Mobile or Mini home'),
    ),
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->house_type)) ? $prev_data->house_type : NULL,
  );
  $form['home-desc'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('What are your current living arrangements'),
    '#options' => array(
      'home-owner' => t('Home owner'),
      'renting' => t('Renting'),
      'live-with-parents' => t('Living with parents'),
      'other' => t('Other'),
    ),
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->home_desc)) ? $prev_data->home_desc : NULL,
  );
  $form['rent-time'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('If renting, for how long have you been at your current location'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => FALSE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->rent_time)) ? $prev_data->rent_time : NULL,
    '#states' => array(
      'visible' => array(
        // hide if rent is not checked
        ':input[name=home-desc]' => array('value' => 'renting'),
      ),
    ),
  );
  $form['landlord-contact-info'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('Landlords name and number'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => FALSE,
    '#description' => t('Your landlords consent is required'),
    '#default_value' => (isset($prev_data->landlord)) ? $prev_data->landlord : NULL,
    '#states' => array(
      'visible' => array(
        // show if rent checked
        ':input[name=home-desc]' => array('value' => 'renting'),
      ),
    ),
  );
  $form['other-adults'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textarea',
    '#title' => t('Name of other adults living in the home'),
    '#required' => FALSE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->other_adults)) ? $prev_data->other_adults : NULL,
  );
  $form['kids-ages'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('Ages of any children'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => FALSE,
    '#description' => t('(Eg: 3, 6, 12, etc'),
    '#default_value' => (isset($prev_data->kids_ages)) ? $prev_data->kids_ages : NULL,
  );
  $form['other-pets'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textarea',
    '#title' => t('Are there other pets in the home?  If so, tell us a bit about them.'),
    '#required' => FALSE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->other_pets)) ? $prev_data->other_pets : NULL,
  );
  $form['house-w-stairs'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('Does your home have stairs'),
    '#options' => array(
      'yes' => t('Yes'),
      'no' => t('No'),
    ),
    '#required' => TRUE,
    '#description' => t('This can be an issue with animals that have mobility issues'),
    '#default_value' => (isset($prev_data->house_w_stairs)) ? $prev_data->house_w_stairs : NULL,
  );
  $form['planned-pregnancy'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('Are there any pregnancies, or planned pregnancies in the Home'),
    '#options' => array(
      'yes' => t('Yes'),
      'no' => t('No'),
    ),
    '#required' => TRUE,
    '#description' => t('This can be health issues with fostering some sick cats'),
    '#default_value' => (isset($prev_data->planned_pregnancy)) ? $prev_data->planned_pregnancy : NULL,
  );
  $form['seperate-room'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('Do you have access to a seperate room away from high traffic areas'),
    '#options' => array(
      'yes' => t('Yes'),
      'no' => t('No'),
    ),
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->seperate_room)) ? $prev_data->seperate_room : NULL,
  );
  $form['transport'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'radios',
    '#title' => t('Do you have reliable access to a vehicle'),
    '#options' => array(
      'yes' => t('Yes'),
      'no' => t('No'),
    ),
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->transport)) ? $prev_data->transport : NULL,
  );
  $form['alone-time'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('How many hours a day will this animal be alone'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->alone_time)) ? $prev_data->alone_time : NULL,
  );
  $form['kept-home'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('Where will the animal be kept when you are at home'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->kept_home)) ? $prev_data->kept_home : NULL,
  );
  $form['not-kept-home'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('Where will the animal be kept when you are NOT at home'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->not_kept_home)) ? $prev_data->not_kept_home : NULL,
  );
  $form['sleep'] = array(
    '#prefix' => '<div>',
    '#suffix' => '</div>',
    '#type' => 'textfield',
    '#title' => t('Where will the animal sleep at night'),
    '#size' => 60,
    '#maxlength' => 256,
    '#required' => TRUE,
    '#description' => t(''),
    '#default_value' => (isset($prev_data->sleep)) ? $prev_data->sleep : NULL,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
  return $form;
}

/**
 *
 *submit handler of the same name
 *
 */
function build_foster_data_collection_form_submit($form, &$form_state) {

  /*get the user id*/


  global $user;
  $thisid = $user->uid;

  /*get the id of the animal in question*/


  $fostering = $form_state['values']['animal-id'];

  //INSERT FOR A FIRST TIME
  /*Start a new foster application entry*/


  $query = db_insert('spca_foster_applications')->fields(array('user_id', 'animal_id', 'approved', 'date_init', 'date_closed', 'notes'))->values(array('user_id' => $thisid,
      'animal_id' => $fostering,
      'approved' => 'Waiting',
      'date_init' => date('Y-m-d h:i:s'),
      'date_closed' => NULL,
      'notes' => NULL,
    ));
  $query->execute();

  /*save the collected data*/


  $query2 = db_insert('spca_foster_application_data')->fields(array('user_id', 'start_date', 'are_you', 'house_type', 'home_desc', 'rent_time', 'landlord', 'other_adults', 'kids_ages', 'other_pets', 'house_w_stairs', 'planned_pregnancy', 'seperate_room', 'transport', 'alone_time', 'kept_home', 'not_kept_home', 'sleep'));

  $query2->values(array('user_id' => $thisid,
      'start_date' => (!empty($form_state['values']['start-date']) ? $form_state['values']['start-date'] : NULL),
      'are_you' => (!empty($form_state['values']['are-you']) ? $form_state['values']['are-you'] : NULL),
      'house_type' => (!empty($form_state['values']['house-type']) ? $form_state['values']['house-type'] : NULL),
      'home_desc' => (!empty($form_state['values']['home-desc']) ? $form_state['values']['home-desc'] : NULL),
      'rent_time' => (!empty($form_state['values']['rent-time']) ? $form_state['values']['rent-time'] : NULL),
      'landlord' => (!empty($form_state['values']['landlord-contact-info']) ? $form_state['values']['landlord-contact-info'] : NULL),
      'other_adults' => (!empty($form_state['values']['other-adults']) ? $form_state['values']['other-adults'] : NULL),
      'kids_ages' => (!empty($form_state['values']['kids-ages']) ? $form_state['values']['kids-ages'] : NULL),
      'other_pets' => (!empty($form_state['values']['other-pets']) ? $form_state['values']['other-pets'] : NULL),
      'house_w_stairs' => (!empty($form_state['values']['house-w-stairs']) ? $form_state['values']['house-w-stairs'] : NULL),
      'planned_pregnancy' => (!empty($form_state['values']['planned-pregnancy']) ? $form_state['values']['planned-pregnancy'] : NULL),
      'seperate_room' => (!empty($form_state['values']['seperate-room']) ? $form_state['values']['seperate-room'] : NULL),
      'transport' => (!empty($form_state['values']['transport']) ? $form_state['values']['transport'] : NULL),
      'alone_time' => (!empty($form_state['values']['alone-time']) ? $form_state['values']['alone-time'] : NULL),
      'kept_home' => (!empty($form_state['values']['kept-home']) ? $form_state['values']['kept-home'] : NULL),
      'not_kept_home' => (!empty($form_state['values']['not-kept-home']) ? $form_state['values']['not-kept-home'] : NULL),
      'sleep' => (!empty($form_state['values']['sleep']) ? $form_state['values']['sleep'] : NULL),
    ));
  /*insert the request into the database*/


  $query2->execute();

  /*Send email to user*/


  $body = 'Thank you for your interest in our fostering program.  We have recevied your application and will be in contact with you shortly.';
  $email = $user->mail;
  $from = 'noreply@clarenvilleareaspca.com';
  $params = array(
    'subject' => t('SPCA Foster Application Submission'),
    'body' => check_markup($body, 'full_html'),
  );
  drupal_mail('animal_adoptions', 'foster_application', $email, 'en', $params, $from);

  /*send email to admin*/


  $body = 'A foster application has just been received.  Please log into the site to review this submission.';
  $email = variable_get('site_mail', '');
  $from = $user->mail;
  $params = array(
    'subject' => t('SPCA Foster Application Submission'),
    'body' => check_markup($body, 'full_html'),
  );
  drupal_mail('animal_adoptions', 'adoption_application', $email, 'en', $params, $from);

  /*redirect*/


  drupal_set_message(t('Thank you for your submission.  We will email you a status update once we review your applicaition.'), 'status');
  $url = 'node/' . $fostering;
  // send them
  $form_state['redirect'] = $url;
}

/**
 * Displays the admin view for reviewing submitted foster applications.
 *
 */
function build_foster_review_form($form, &$form_state) {
  /*get all the adoption applications*/


  $applications = get_foster_applications();
  $row_holder = array();
  /*build the output*/


  // add in the rest
  if ($applications) {
    while ($row = $applications->fetchAssoc()) {
      if (!isset($row['approved'])) {
        $approval_state = 'Waiting';
      }
      else {
        $approval_state = $row['approved'];
      }
      /*get the user name*/


      $urse_name = get_username_by_id($row['user_id']);
      /*get the animal name*/


      $ansn_name = get_animal_name_by_id($row['animal_id']);
      $nextinline = array($row['id'], check_plain($ansn_name->title), check_plain($urse_name->name), check_plain($approval_state), check_plain($row['date_init']), $row['date_closed']);
      // collect the row data to display in jquery table
      array_push($row_holder, $nextinline);
    }
  }

  // Table settings.
  $attributes['datatable_options'] = array(
    'bFilter' => TRUE,
    'bInfo' => TRUE,
  );
  // Define table columns
  $header = array(
    array(
      'data' => t('ID'),
      'datatable_options' => array(
        'bSortable' => TRUE,
        'bSearchable' => TRUE,
      ),
    ),
    array(
      'data' => t('Animal Name'),
      'datatable_options' => array(
        'bSortable' => TRUE,
        'bSearchable' => TRUE,
      ),
    ),
    array(
      'data' => t('Username'),
      'datatable_options' => array(
        'bSortable' => TRUE,
        'bSearchable' => TRUE,
      ),
    ),
    array(
      'data' => t('Status'),
      'datatable_options' => array(
        'bSortable' => TRUE,
        'bSearchable' => TRUE,
      ),
    ),
    array(
      'data' => t('Date Opened'),
      'datatable_options' => array(
        'bSortable' => TRUE,
        'bSearchable' => TRUE,
      ),
    ),
    array(
      'data' => t('Date Closed'),
      'datatable_options' => array(
        'bSortable' => TRUE,
        'bSearchable' => TRUE,
      ),
    ),
  );
  // Table data.

  // Render using Drupal's render API.
  $form['datatable'] = array(
    '#theme' => 'datatable',
    '#prefix' => '<div id=active-foster>',
    '#suffix' => '</div>',
    '#header' => $header,
    '#rows' => $row_holder,
    '#attributes' => $attributes,
  );
  //-------------------
  /*load the select list with whats in the foster table*/


  $available = get_all_foster_ids();

  //AJAX
  $form['selected_foster_app'] = array(
    '#type' => 'select',
    '#title' => t('Select Application To View'),
    '#options' => drupal_map_assoc($available),
    '#prefix' => '<div id="available-foster-apps">',
    '#suffix' => '</div>',
    '#ajax' => array(
      'wrapper' => 'questions-fieldset-wrapper',
      'callback' => 'get_new_list_callback',
      'effect' => 'fade',
    ),
  );

  // This fieldset just serves as a container for the part of the form
  // that gets rebuilt.
  $form['questions_fieldset'] = array(
    '#type' => 'fieldset',
    // These provide the wrapper referred to in #ajax['wrapper'] above.
    '#prefix' => '<div id="questions-fieldset-wrapper">',
    '#suffix' => '</div>',
  );

  //---------
  if (!empty($form_state['values']['selected_foster_app'])) {

    $form['questions_fieldset']['question'] = array(
      '#markup' => t('No Data'),
    );
    /*$questions_type will hold the ID of the application in question*/

    $question_type = $form_state['values']['selected_foster_app'];

    /*build the tabs that all the content will get loaded in*/


    $output2 = '<div class="tabs-classic"><h3>Application <span>Details</span></h3>' . '<ul class="nav nav-tabs">
	<li class="active"><a data-toggle="tab" href="#home2">ANIMAL</a></li>
        <li><a data-toggle="tab" href="#tabone">USER</a></li>
	<li><a data-toggle="tab" href="#tabtwo">APPLICATION</a></li>
    </ul>';

    /*get the details for the first record*/


    $first = get_animal_details_from_foster_app($question_type);
    if (!$first) {
      $first['name'] = 'no data';
      $first['status'] == 'no data';
      $first['animal_status'] == 'no data';
      $first['spayed'] == 'no data';
      $first['url'] = 'no data';
    }

    $output2 .= '<div class="tab-content"><div class="tab-pane active" id="home2"><img class="pull-left" src=' . file_create_url($first['image']) . ' width="100px"/>
<p><strong>Name: </strong>' . l(t($first['name']), $first['url'], array('attributes' => array('target' => '_blank'), 'options' => array('relative' => TRUE))) . '</p>
<p><strong>Status: </strong>' . $first['status'] . '</p>';
    $pad = ($first['spayed'] ? 'YES' : 'NO');
    $output2 .= '<p><strong>Spayed/Neutered:</strong> ' . $pad . '</p></div>';

    /*get the user detals of the application*/


    /*$applicant holds username, email*/


    $applicant = get_user_from_foster_app($question_type);
    if (!$applicant) {
      $applicant['name'] = 'no data';
      $applicant['email'] = 'no data';
      $applicant['fullname'] = 'no data';
      $applicant['full_mailing_address'] = 'no data';
      $applicant['ppic'] = 'no data';
      $applicant['contact_number'] = 'no data';
      $applicant['cell_number'] = 'no data';
    }
    $output2 .= '<div class="tab-pane" id="tabone"><img class="pull-left" src=' . file_create_url($applicant['ppic']) . ' width=100px/>
  <p><strong>Username:</strong> ' . l(t($applicant['name']), '/users/' . seoUrl($applicant['name']), array('attributes' => array('target' => '_blank'), 'options' => array('relative' => TRUE))) . '</p>
  <p><strong>Full Name:</strong> ' . $applicant['fullname'] . '</p>
  <p><strong>Email:</strong> ' . $applicant['email'] . '</p>
  <p><strong>Mailing Address:</strong> ' . $applicant['full_mailing_address'] . '</p>
  <p><strong>Home Number: </strong>' . $applicant['contact_number'] . '</p>
  <p><strong>Cell Number: </strong>' . $applicant['cell_number'] . '</p></div>';

    /*get the application that was filled*/


    /*$app is an object item*/


    $app = get_foster_application_details($question_type);

    $output2 .= '<div class="tab-pane" id="tabtwo">
  <p><strong>Available Starting: </strong>' . $app->start_date . '</p>
  <p><strong>Are You: </strong>' . $app->are_you . '</p>
  <p><strong>House Type: </strong>' . $app->house_type . '</p>
    <p><strong>Home Description: </strong>' . $app->home_desc . '</p>
    <p><strong>How long renting: </strong>' . $app->rent_time . '</p>
    <p><strong>Landlord: </strong>' . $app->landlord . '</p>
    <p><strong>Other adults living in home: </strong>' . $app->other_adults . '</p>
    <p><strong>Ages of children: </strong>' . $app->kids_ages . '</p>
    <p><strong>Other pets in the home: </strong>' . $app->other_pets . '</p>
    <p><strong>Does your house have stairs: </strong>' . $app->house_w_stairs . '</p>
    <p><strong>Any pregnant women in the home: </strong>' . $app->planned_pregnancy . '</p>
    <p><strong>Seperate room available: </strong>' . $app->seperate_room . '</p>
    <p><strong>Access to reliable transport: </strong>' . $app->transport . '</p>
    <p><strong>How long will animal be alone for: </strong>' . $app->alone_time . '</p>
    <p><strong>Where will animal be kept when your home: </strong>' . $app->kept_home . '</p>
    <p><strong>Where will animal be kept when your NOT home: </strong>' . $app->not_kept_home . '</p>
    <p><strong>Where will the animal sleep: </strong>' . $app->sleep . '</p>';


    $output2 .= '</div></div></div>';

    /*get the application status for the selected animal*/


    $status_cur = get_foster_status_by_id($form_state['input']['selected_foster_app']);
    $form['questions_fieldset']['question'] = array(
      '#type' => 'markup',
      '#markup' => $output2,
    );

    /*get animal adoption status taxonomy terms for the select list*/


    $vocab = get_taxanomy_vocab_child_by_id(15);

    //if a selection was made, display dropdown list of foster application status
    $form['questions_fieldset']['application_status'] = array(
      '#type' => 'select',
      '#title' => t('Application Status'),
      '#options' => drupal_map_assoc($vocab),
      '#value' => $status_cur['state'],
      '#prefix' => '<div id="selector">',
      '#suffix' => '</div>',
    );
    $form['questions_fieldset']['foster_app_note'] = array(
      '#prefix' => '<div>',
      '#suffix' => '</div>',
      '#type' => 'textarea',
      '#title' => t('Notes'),
      '#required' => FALSE,
      '#description' => t(''),
      '#default_value' => t(''),
      '#id' => 'foster-notes',
    );

    //print out the saved notes
    $notes = get_foster_notes_by_id($question_type);
    $storage = explode('[', $notes['notes']);
    // scope
    $final = '';
    foreach ($storage as $row) {
      $final .= '<div id=foster-notes-hist><p>[' . $row . '</p></div>';
    }

    //$outputnot = '<div id=adopt-notes-hist><p>'.check_plain($app->notes).'</p></div>';
    $form['questions_fieldset']['foster_app_note_hist'] = array(
      '#type' => 'markup',
      //$outputnot,
      '#markup' => $final,
    );
    //submit button for edible details
    $form['questions_fieldset']['saver'] = array(
      '#type' => 'submit',
      '#class' => 'buton b_asset buton-1 buton-mini',
      '#value' => t('Save'),
      '#ajax' => array(
        'wrapper' => 'active-foster',
        'callback' => 'refresh_foster_review_table',
        'effect' => 'fade',
      ),
    );
  }
  return $form;
}

/**
 *takes a user_id and animal_id
 *returns the spca_adoption_applications id
 *
 *
 */
function check_for_previous_foster_app($thisid, $fostering) {

  $hold = db_select('spca_foster_applications', 'a')->condition('a.user_id', $thisid, '=')->condition('a.animal_id', $fostering, '=')->fields('a', array('id'));
  $cur_state = $hold->execute();

  // in scope
  $use = array();
  foreach ($cur_state as $rec) {
    $use = $rec;
  }
  /*return the user object*/


  return $use;
}

/**
 *takes the user_id as an argument
 *returns everything it finds as an array
 *
 */
function get_foster_data_by_user_id($thisid) {

  $hold = db_select('spca_foster_application_data', 'a')->condition('a.user_id', $thisid, '=')->fields('a');
  $cur_state = $hold->execute();

  // in scope
  $use = array();
  foreach ($cur_state as $rec) {
    $use = $rec;
  }
  /*return the user array*/


  return $use;
}

/**
 *takes user_id and animal_id as argumants
 *returns the id of the found file
 *
 *
 */
function get_user_from_foster_app($app_id) {
  /*look up the user ID from the adopt table*/


  $userid = db_select('spca_foster_applications', 'a')->condition('a.id', $app_id, '=')->fields('a', array('user_id', 'date_init'));
  $sql = $userid->execute();

  // in scope
  $uidid;
  $date_init;
  foreach ($sql as $record) {
    $uidid = $record->user_id;
    $date_init = $record->date_init;
  }
  /*look up the user from the user table*/


  $applicantq = db_select('users', 'u')->condition('u.uid', $uidid, '=')->fields('u', array('name', 'mail'));
  $result = $applicantq->execute();

  /*get profile 2 name*/


  $query = db_select('field_data_field_full_name', 'ffn');
  $query->join('profile', 'p', 'ffn.entity_id = p.pid AND p.uid = :uid', array(':uid' => $uidid));
  $query->fields('ffn', array('field_full_name_value'))->condition('ffn.entity_type', 'profile2');
  $full = $query->execute();
  $fullname;
  foreach ($full as $row) {
    $fullname = $row->field_full_name_value;
  }

  /*get profile2 picture*/


  $query = db_select('users', 'u')->condition('u.uid', $uidid)->fields('u', array('picture'));
  $hanging = $query->execute();
  $picid;
  foreach ($hanging as $ss) {
    $picid = $ss->picture;
  }
  $query2 = db_select('file_managed', 'ffm')->condition('ffm.fid', $picid, '=')->fields('ffm', array('uri'));
  $store = $query2->execute();
  $real = '';
  foreach ($store as $xx) {
    $real = $xx->uri;
  }

  /*get profile2 home number*/


  $query = db_select('profile', 'pf')->condition('pf.uid', $uidid)->fields('pf', array('pid'));
  $hold = $query->execute();
  $pid;
  foreach ($hold as $sss) {
    $pid = $sss->pid;
  }
  $query2 = db_select('field_data_field_home_phone_number', 'hn')->condition('hn.entity_id', $pid, '=')->fields('hn', array('field_home_phone_number_value'));
  $stores = $query2->execute();
  $contact;
  foreach ($stores as $xxl) {
    $contact = $xxl->field_home_phone_number_value;
  }

  /*get the cell number*/


  $query2 = db_select('field_data_field_cell_number', 'cn')->condition('cn.entity_id', $pid, '=')->fields('cn', array('field_cell_number_value'));
  $stores = $query2->execute();
  $cell = '';
  foreach ($stores as $xxl) {
    $cell = $xxl->field_cell_number_value;
  }


  /*get profile2 full mailing address*/


  $query2 = db_select('field_data_field_full_mailing_address', 'fma')->condition('fma.entity_id', $pid, '=')->fields('fma', array('field_full_mailing_address_value'));
  $stores = $query2->execute();
  $mailing_address;
  foreach ($stores as $xxl) {
    $mailing_address = $xxl->field_full_mailing_address_value;
  }

  // in scope
  $use = array();
  $use['ppic'] = $real;
  foreach ($result as $rec) {
    $use['name'] = $rec->name;
    $use['email'] = $rec->mail;
  }
  $use['fullname'] = $fullname;
  $use['full_mailing_address'] = $mailing_address;
  $use['contact_number'] = $contact;
  $use['cell_number'] = $cell;
  $use['uid'] = $uidid;
  $use['date_init'] = $date_init;
  /*return the user array*/


  return $use;
}

/**
 *
 *Getting foster application detials based application id
 *
 */
function get_foster_application_details($appid) {

  /*look up the user ID from the foster table*/


  $ptid = db_select('spca_foster_applications', 'saa')->condition('saa.id', $appid, '=')->fields('saa', array('user_id'));
  $statusf = $ptid->execute();
  // scope
  $appdetail;
  foreach ($statusf as $row) {
    $appdetail = $row;
  }

  /*look up details for this user*/


  $ptid = db_select('spca_foster_application_data', 'daa')->condition('daa.user_id', $appdetail->user_id, '=')->fields('daa');
  $statusf = $ptid->execute();
  // scope
  $usedetail;
  foreach ($statusf as $row) {
    $usedetail = $row;
  }

  /*return the object*/


  return $usedetail;
}


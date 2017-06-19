<?php

/**
 * @file
 * Part of the animal_adoption module.  This file deals with all aspects of animal requests.
 */

/**
 *Gets called when the admin views the animal request page
 *
 *
 */
function build_animal_request_match_form($form, &$form_state) {

  //get all annimal requests
  $all_requests = get_all_animal_requests();

  //init
  $found = array(0 => 'Choose Request to View',
  );
  // scope
  $row_holder = array();
  // scope
  $found_match_id = '';
  $found_match_name = '';
  $output2 = '';

  //foreach request, find comparisons and score
  foreach ($all_requests as $requested) {
    // need 7 for a win
    $score = 0;
    $type = get_animal_id_based_on_category($requested->category);

    //score the results
    if (!empty($type)) {
      foreach ($type as $record) {
        $score = 5;
        $animal_details = get_animal_details_by_id($record->entity_id);
        //COMPARE AND SCORE ALL PARAMETERS BELOW
        if ($animal_details['breed'] == $requested->cat_breed || $animal_details['breed'] == $requested->dog_breed) {
          $score += 5;
        }
        if ($animal_details['animal_age'] == $requested->age) {
          $score++;
        }
        if ($animal_details['animal_size'] == $requested->size) {
          $score++;
        }
        if ($animal_details['animal_hair'] == $requested->hair_type) {
          $score++;
        }
        if ($animal_details['animal_sex'] == $requested->sex) {
          $score++;
        }
        if ($animal_details['spayed'] == $requested->spayed_neutered) {
          $score++;
        }
        // winner
        if ($score >= 11 && (strcmp($animal_details['status'], 'Available for adoption') == 0)) {
          // to save to db
          $found_match_id .= $record->entity_id . ', ';
          //to display
          $found_match_name .= l(t($animal_details['name']), $animal_details['url'], array('attributes' => array('target' => '_blank'), 'options' => array('relative' => TRUE))) . '  ';

          // load dropdown menu
          //array_push($found, $requested->id);
        }
      }
      $nextinline = array(check_plain($requested->id), $found_match_name, check_plain($requested->applicant_name), check_plain($requested->request_status), $requested->date_submitted, $requested->date_matched);
      // collect the row data to display in jquery table
      array_push($row_holder, $nextinline);
      // first arg needs to be collection of fields
      update_request_with_animal_id($found_match_id, $requested->id);
    }
    array_push($found, $requested->id);
    // reset for next
    $found_match_id = '';
    $found_match_name = '';
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
    '#prefix' => '<div id=active-adoptions>',
    '#suffix' => '</div>',
    '#header' => $header,
    '#rows' => $row_holder,
    '#attributes' => $attributes,
  );




  /*load the select list with whats in the requested table*/


  //$available = get_all_adoption_ids();
  //AJAX
  $form['selected_request_app'] = array(
    '#type' => 'select',
    '#title' => t('Select Request To View'),
    '#options' => drupal_map_assoc($found),
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
  // scope
  //$first;
  if (!empty($form_state['values']['selected_request_app'])) {
    /*$question_type will hold the ID of the application in question*/

    $question_type = $form_state['values']['selected_request_app'];



    /*get the details for the selected record*/


    $first = get_animal_request_details_by_id($question_type);

    /*get the animimal details
    returns: animal_age, animal_size, animal_hair, animal_sex, image, name, status, spayed, url*/


    $result = get_animal_details_by_id($first->animal_match_id);

    if (!$result) {
      $result['name'] = 'no data';
      $result['status'] == 'no data';
      $result['app_status'] == 'no data';
      $result['spayed'] == 'no data';
      $result['url'] = 'no data';
    }

    $pad = ($result['spayed'] ? 'YES' : 'NO');

    /*Translate indexes to readable text*/


    $animal_fam = get_taxanomy_vocab_by_id($first->category);
    $animal_breed = $hair_t = $size = '';
    // scope
    $sn;
    (!empty($first->cat_breed)) ? $animal_breed = get_taxanomy_vocab_by_id($first->cat_breed) : ((!empty($first->dog_breed)) ? $animal_breed = get_taxanomy_vocab_by_id($first->dog_breed) : $animal_breed = 'not selected');
    (!empty($first->hair_type)) ? $hair_t = get_taxanomy_vocab_by_id($first->hair_type) : $hair_t = $first->hair_type;
    (!empty($first->size)) ? $size = get_taxanomy_vocab_by_id($first->size) : $size = $first->size;
    (!empty($first->sex)) ? ($first->sex) ? $sex = 'Male' : $sex = 'Female' : $sex = 'not selected';
    (strcmp($first->spayed_neutered, '1') == 0) ? $sn = 'Yes' : $sn = 'No';
    $output2 .= '<div class="tab-pane" id="application-detail">';
    if (!empty($first->date_matched)) {
      $output2 .= '<p><strong>Date Closed:</strong> ' . $first->date_matched . '</p>';
    }
    $output2 .= '<p><strong>Date Submitted:</strong> ' . $first->date_submitted . '</p>
    <p><strong>Animal Type:</strong> ' . $animal_fam->name . '</p>
    <p><strong>Age:</strong> ' . $first->age . '</p>
    <p><strong>Breed:</strong> ' . $animal_breed->name . '</p>
    <p><strong>Hair Type:</strong> ' . $hair_t->name . '</p>
    <p><strong>Size:</strong> ' . $size->name . '</p>
    <p><strong>Sex:</strong> ' . $sex . '</p>
    <p><strong>Spayed/Neutered:</strong> ' . $sn . '</p>
    <p><strong>Applicant Name:</strong> ' . $first->applicant_name . '</p>
    <p><strong>Applicant Phone Number:</strong> ' . $first->applicant_number . '</p>
    <p><strong>Applicant Email:</strong> ' . l(check_plain($first->applicant_email), 'mailto:' . $first->applicant_email, array('absolute' => TRUE)) . '</p><p></p></div>';

    $form['questions_fieldset']['question'] = array(
      '#type' => 'markup',
      '#markup' => $output2,
    );

    $cur_state = $first->request_status;
    (empty($cur_state)) ? $cur_state = 'Waiting' : $cur_state;
    //if a selection was made, display dropdown list of foster application status
    $form['questions_fieldset']['application_status'] = array(
      '#type' => 'select',
      '#title' => t('Application Status'),
      '#options' => array(
        'Waiting' => t('Waiting'),
        'In Review' => t('In Review'),
        'Contacted' => t('Contacted'),
        'Closed' => t('Closed'),
      ),
      '#value' => $cur_state,
      '#prefix' => '<div id="selector">',
      '#suffix' => '</div>',
    );

    $form['questions_fieldset']['request_app_note'] = array(
      '#prefix' => '<div>',
      '#suffix' => '</div>',
      '#type' => 'textarea',
      '#title' => t('Notes'),
      '#required' => FALSE,
      '#description' => t(''),
      '#default_value' => t(''),
      '#id' => 'request-notes',
    );
    //print out the saved notes
    $storage = explode('[', $first->notes);
    // scope
    $final = '';
    foreach ($storage as $row) {
      $final .= '<div id=request-notes-hist><p>[' . $row . '</p></div>';
    }

    $form['questions_fieldset']['request_app_note_hist'] = array(
      '#type' => 'markup',
      //$outputnot,
      '#markup' => $final,
    );
    //submit button for edible details
    $form['questions_fieldset']['saver'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
      '#ajax' => array(
        'wrapper' => 'active-requests',
        'callback' => 'refresh_request_review_table',
        'effect' => 'fade',
      ),
    );
  }
  return $form;
}

/**
 *updates any changes made to an animal request
 *
 */
function refresh_request_review_table($form, &$form_state) {
  /*get the details to save*/


  $notes;
  if (isset($form_state['values']['request_app_note'])) {
    $notes = $form_state['values']['request_app_note'];
  }
  // application id
  $app = $form_state['values']['selected_request_app'];
  $match = $form_state['input']['application_status'];

  $success = update_animal_request($app, $notes, $match);

  $blank = '<textarea class="form-control form-textarea" id="request-notes" name="adopt_app_note" cols="60" rows="5"></textarea>';
  $commands = array();
  $commands[] = ajax_command_prepend('#request-notes-hist', $notes);
  $commands[] = ajax_command_replace('#request-notes', $blank);

  return array('#type' => 'ajax', '#commands' => $commands);
}
//__________DB functions----------------------

/**
 *updates the spca_animal_request table with the provided data
 *
 */
function update_animal_request($app, $notes, $match) {
  // scope
  $pmatch = 0;
  /*add date/time stamp to new notes*/


  if ($notes != NULL) {
    // long format
    $processed = '[' . date('l jS \of F Y h:i:s A') . ']';
    // add time to notes
    $processed .= $notes;
    /*get the notes that were previously saved*/


    $oldnotes = get_request_notes_by_id($app);
    /*add the new notes to them and pass for saving*/


    $processed .= $oldnotes['notes'];

    $pdate = NULL;
    if (strcmp($match, 'Closed') == 0) {
      $pmatch = 1;
      $pdate = date('Y-m-d h:i:s');
    }

    /*update the request table*/


    $gtg = db_update('spca_animal_request')->fields(array(
        'notes' => check_plain($processed),
        'matched' => $pmatch,
        'date_matched' => $pdate,
        'request_status' => $match,
      ))->condition('id', check_plain($app), '=');
    $gtg->execute();
  }
  else {
    if (strcmp($match, 'Closed') == 0) {
      $pmatch = 1;
      $pdate = date('Y-m-d h:i:s');
    }

    /*update the request table*/


    $gtg = db_update('spca_animal_request')->fields(array(
        'matched' => $pmatch,
        'date_matched' => $pdate,
        'request_status' => $match,
      ))->condition('id', check_plain($app), '=');
    $gtg->execute();
  }
  return $gtg;
}

/**
 *gets all the stored notes for that ID
 *and returns in array
 *
 */
function get_request_notes_by_id($app) {

  $hold = db_select('spca_animal_request', 'a')->condition('a.id', $app, '=')->fields('a', array('notes'));
  $cur_state = $hold->execute();

  // in scope
  $use = array();
  foreach ($cur_state as $rec) {
    $use['notes'] = $rec->notes;
  }
  /*return the user array*/


  return $use;
}

/**
 *
 *Returns the entity ID of the found breed
 *
 */
function get_animal_id_based_on_breed($cat_breed, $dog_breed) {
  $foundb = NULL;

  //if its a cat
  if (!empty($cat_breed)) {
    $base = db_select('field_data_field_cat_breed', 'cb')->condition('cb.field_cat_breed_tid', $cat_breed, '=')->fields('cb', array('entity_id'));
    $foundb = $base->execute();
  }
  if (!empty($dog_breed)) {
    $base = db_select('field_data_field_dog_breed', 'db')->condition('db.field_dog_breed_tid', $dog_breed, '=')->fields('db', array('entity_id'));
    $foundb = $base->execute();
  }

  // in scope
  $aid = array();
  if ($foundb) {
    foreach ($foundb as $record) {
      array_push($aid, $record->id);
    }
  }
  return $aid;
}

/**
 *
 *Returns an array of entity ID of the found category
 *
 */
function get_animal_id_based_on_category($category) {

  $found;

  $base = db_select('field_data_field_animal_family', 'af')->condition('af.field_animal_family_tid', $category, '=')->fields('af', array('entity_id'));
  $found = $base->execute();

  // in scope
  $aid = array();
  foreach ($found as $record) {
    array_push($aid, $record);
  }
  return $aid;
}

/**
 *returns the id number representing the sex of the supplied animal
 *
 *
 */
function get_animal_sex_by_id($animal_id) {

  $base = db_select('field_data_field_sex_p', 's')->condition('s.entity_id', $animal_id, '=')->fields('s', array('field_sex_p_value'));
  $found = $base->execute();

  $results = NULL;
  foreach ($found as $rec) {
    $results = $rec;
  }
  return $results;
}

/**
 *
 *Returns an object of details from the spca_animla_request table
 *based on the ID provided
 *
 */
function get_animal_request_details_by_id($requested_id) {

  /*look up the animal ID from the adopt table*/


  $ptid = db_select('spca_animal_request', 'ar')->condition('ar.id', $requested_id, '=')->fields('ar');
  $statusf = $ptid->execute();
  // scope
  $appdetail;
  foreach ($statusf as $row) {
    $appdetail = $row;
  }

  /*return the object*/


  return $appdetail;
}

/**
 *Updates the spca_animal_update table with the provided
 *animal ID
 *
 */
function update_request_with_animal_id($matched_id, $file_no) {

  /*update the table*/


  $gtg = db_update('spca_animal_request')->fields(array(
      'animal_match_id' => check_plain($matched_id),
    ))->condition('id', check_plain($file_no), '=');
  $gtg->execute();

  return $gtg;
}


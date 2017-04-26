<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 *
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php //print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <?php print $css; ?>
  </head>
  <body>
    <?php if (!empty($message)): ?>
      <div class="print-message"><?php print $message; ?></div><p />
    <?php endif; ?>
    <?php if ($print_logo): ?>
      <div class="print-logo"><?php print $print_logo; ?></div>
    <?php endif; ?>
    <div class="print-site_name"><?php print theme('print_published'); ?></div>
    <p />
    <div class="print-breadcrumb"><?php print theme('print_breadcrumb', array('node' => $node)); ?></div>
    <hr class="print-hr" />
    <?php if (!isset($node->type)): ?>
      <h2 class="print-title"><?php print $print_title; ?></h2>
    <?php endif; ?>
    <div class="print-content"><?php //print $content; ?></div>
    <?php
    $print_output='';//scope
      if(strcmp($node->field_animal_of_the_week['und'][0]['value'], '1')==0){
        $print_output .= '<div class="print-content"><h1>'.$node->title.' - Pet of the Week</h1>';
      }
      else{
        $print_output .= '<div class="print-content"><h1>'.$node->title.'</h1>';
      }
      if(strcmp($node->field_foster_program_p['und'][0]['value'], '1')==0){
        $print_output .= '<h1>Foster Program</h1>';
      }
      $print_output .= '<img src='.file_create_url($node->field_image['und'][0]['uri']).' width="300px"/><div class="print-content">';
      
      if(!empty($node->field_microchip_number_p)){
        $print_output .= '<div class=top-space><p><strong>Microchip: </strong>'.$node->field_microchip_number_p['und'][0]['value'].'</p></div>';
      }
      $fdate = date('l, M d, Y', strtotime($node->field_intake_date['und'][0]['value']));
      $print_output .= '<div class=top-space><p><strong>Intake Date: </strong>'.$fdate.'</p></div>';
      
      if(strcmp($node->field_spayed_nutered_p['und'][0]['value'], '1')==0){
        $sdate = date('l, M d, Y', strtotime($node->field_spayed_nutered_date_p['und'][0]['value']));
        $print_output .= '<div class=top-space><p><strong>Spayed / Neutered:</strong> Yes - ' .$sdate. '</div>';
      }
      else{
        $print_output .= '<div class=top-space><p><strong>Spayed / Neutered:</strong> No</p></div>';
      }
      
      $print_output .= '<div class=top-space><p><strong>Age:</strong> '.$node->field_age_p['und'][0]['value'].'</p></div>';
      
      if(strcmp($node->field_sex_p['und'][0]['value'], '1')==0){
        $print_output .= '<div class=top-space><p><strong>Sex:</strong> Male</p></div>';
      }
      else{
        $print_output .= '<div class=top-space><p><strong>Sex: </strong>Female</p></div>';
      }
      
      $print_output .= '<div class=top-space><p><strong>Status: </strong>'.$node->field_status_p['und'][0]['taxonomy_term']->name.'</p></div>
      <div class=top-space><p><strong>Animal Size: </strong>'.$node->field_animal_size_p['und'][0]['taxonomy_term']->name.'</p></div>
      <div class=top-space><p><strong>Hair Type: </strong>'.$node->field_hair_type_p['und'][0]['taxonomy_term']->name.'</p></div>';
      
      if(!empty($node->field_dog_breed)){
        $print_output .= '<div class=top-space><p><strong>Breed: </strong>'.$node->field_dog_breed['und'][0]['taxonomy_term']->name.'</p></div>';
      }
      if(!empty($node->field_cat_breed)){
        $print_output .= '<div class=top-space><p><strong>Breed: </strong>'.$node->field_cat_breed['und'][0]['taxonomy_term']->name.'</p></div>';
      }
      if(!empty($node->field_project_client)){
        $print_output .= '<div class=top-space><p><strong>Veterinarian Office: </strong>'.$node->field_project_client['und'][0]['node']->title.'</p></div>';
      }
      if(!empty($node->field_project_date)){
        $print_output .= '<div class=top-space><p><strong>Vet Visit Date: </strong><br/>';
        foreach($node->field_project_date['und'] as $dates){
          $vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $vdate.'<br />';
        }
        $print_output .= '</p></div>';
      }
      if(!empty($node->field_notes)){
        $print_output .= '<div class=top-space><p><strong>Vet Results & Notes: </strong><br/>';
        foreach($node->field_notes['und'] as $note){
          //$vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $note['value'].'<br />';
        }
        $print_output .= '</p></div>';

      }
      if(!empty($node->field_deworm_date_p)){
        $print_output .= '<div class=top-space><p><strong>Dewormed Date: </strong><br/>';
        foreach($node->field_deworm_date_p['und'] as $dates){
          $vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $vdate.'<br/>';
        }
        $print_output .= '</p> </div>';
      }
      if(!empty($node->field_bordetella_last_received)){
        $print_output .= '<div class=top-space><p><strong>Bordetella (Kennel Cough) Received: </strong><br/>';
        foreach($node->field_bordetella_last_received['und'] as $dates){
          $vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $vdate.'<br/>';
        }
        $print_output .= '</p></div>';
      }
      if(!empty($node->field_canine_distemper_received_)){
        $print_output .= '<div class=top-space><p><strong>Canine Distemper plus Coronavirus Received: </strong><br/>';
        foreach($node->field_canine_distemper_received_['und'] as $dates){
          $vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $vdate.'<br/>';
        }
        $print_output .= '</p></div>';
      }
      if(!empty($node->field_rabies_received_date)){
        $print_output .= '<div class=top-space><p><strong>Rabies Shot Received: </strong><br/>';
        foreach($node->field_rabies_received_date['und'] as $dates){
          $vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $vdate.'<br/>';
        }
        $print_output .= '</p></div>';
      } 
      if(!empty($node->field_fvrcp_received_date)){
        $print_output .= '<div class=top-space><p><strong>Feline Rhinotracheitis-Calici-Panleukopenia (FVRCP) Received: </strong><br/>';
        foreach($node->field_fvrcp_received_date['und'] as $dates){
          $vdate = date('l, M d, Y', strtotime($dates['value']));
          $print_output .= $vdate.'<br/>';
        }
        $print_output .= '</p></div>';
      }
      if(!empty($node->field_combo_received)){
        $vdate = date('l, M d, Y', strtotime($node->field_combo_received['und'][0]['value']));
        $print_output .= '<div class=top-space><p><strong>COMBO Received: </strong>'.$vdate.' - ';
        if(strcmp($node->field_combo_result['und'][0]['value'], '1')==0){
          $print_output .= 'POSITIVE</p>';
        }
        else{
          $print_output .= 'NEGITIVE</p>';
        }
        $print_output .= '</div>';
      }
      
      $print_output .= '<div class=top-space><p><strong>Description</strong><br/>'.$node->body['und'][0]['value'].'</p></div>';
      $print_output .= '</div>';
    ?>
    <div class="print-content"><?php print $print_output; ?></div>
    <div class="print-footer"><?php print theme('print_footer'); ?></div>
    <hr class="print-hr" />
    <?php //if ($sourceurl_enabled): ?>
      <!--<div class="print-source_url">-->
        <?php //print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
     <!--</div>-->
    <?php //endif; ?>
    <div class="print-links"><?php //print theme('print_url_list'); ?></div>
    <?php //print $footer_scripts; ?>
  </body>
</html>

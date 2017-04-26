<?php
/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for mukam themes when admin theme is not.
 *
 * 
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function mukam_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  // Alter theme settings form.
  $form['mukam'] = array
    (
      '#type' => 'vertical_tabs',
      '#prefix' => '<h2><small>MUKAM SETTINGS</small></h2>',
      '#weight' => -8
    );
  $form['mukam_settings'] = array
    (
      '#type' => 'fieldset',
      '#title' => 'STYLE SWITCHER',
      '#group' => 'mukam'
    );
  $form['mukam_settings']['color_config']= array(
    '#type' => 'fieldset',
    '#title' => 'STYLE SWITCHER',
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,  
    '#prefix' => '<div class="color-switcher" id="choose_color"> ',
    '#suffix' => '</div>'
  );
  $form['mukam_settings']['color_config']['styleColor'] = array(
    '#type' => 'hidden',
    '#title' => 'Color',
    '#default_value' => theme_get_setting('styleColor')?theme_get_setting('styleColor'):'asset',
    '#prefix' => '<div class="theme-colours">
      <p>Choose Colour style</p>
      <ul>
        <li><a href="#" class="asset-change" onClick="return styleColor(this,\'asset\');"></a></li>
        <li><a href="#" class="green-change" onClick="return styleColor(this,\'green\');"></a></li>
        <li><a href="#" class="light-brown-change" onClick="return styleColor(this,\'light-brown\');"></a></li>
        <li><a href="#" class="light-yellow-change" onClick="return styleColor(this,\'light-yellow\');"></a></li>
        <li><a href="#" class="orange-change" onClick="return styleColor(this,\'orange\');"></a></li>
        <li><a href="#" class="purple-change" onClick="return styleColor(this,\'purple\');"></a></li>
        <li><a href="#" class="red-change" onClick="return styleColor(this,\'red\');"></a></li>
        <li><a href="#" class="yellow-change" onClick="return styleColor(this,\'yellow\');"></a></li>
      </ul> ',
    '#suffix' => '</div>'
  );
  $form['mukam_settings']['color_config']['styleHeader'] = array(
    '#type' =>'select', 
    '#title' => t('Header'),
    '#options' => array(
        'header-1' => t('header-1'),
        'header-2' => t('header-2'),
        'header-3' => t('header-3'),
        'header-4' => t('header-4'),
        'header-5' => t('header-5'),
        'shopheader' => t('header-6'),
        'header-7' => t('header-7'),
       ),
    '#default_value' => theme_get_setting('styleHeader')?theme_get_setting('styleHeader'):'header-1',
  );
  $form['mukam_settings']['color_config']['footerClass'] = array(
    '#type' => 'hidden',
    '#title' => 'Footer',
    '#default_value' => theme_get_setting('footerClass')?theme_get_setting('footerClass'):'facts',
    '#prefix' => '<div class="choose-footer">
        <p>Choose Footer</p>
        <a href="#" class="facts" onClick="return footerClass(this,\'facts\');">Footer 1</a>
        <a href="#" class="facts-2" onClick="return footerClass(this,\'facts-2\');">Footer 2</a> ',
    '#suffix' => '</div>'
  );
  $form['mukam_settings']['color_config']['allowClient'] = array(
    '#type' =>'checkbox', 
    '#title' => t('<strong>Allow client switch style on PCs.</strong>'),
    '#default_value' => theme_get_setting('allowClient')?theme_get_setting('allowClient'):0,
  );
  if($color = theme_get_setting('styleColor')){
    drupal_add_js("jQuery(function() { 
      jQuery('.theme-colours .".$color."-change').addClass('active-color'); 
    });"
    ,'inline');
  } else {
    drupal_add_js("jQuery(function() { 
      jQuery('.theme-colours .asset-change').addClass('active-color'); 
    });"
    ,'inline');
  }
  if($footer = theme_get_setting('footerClass')){
    drupal_add_js("jQuery(function() { 
      jQuery('.choose-footer .".$footer."').addClass('active-footer'); 
    });"
    ,'inline');
  } else {
    drupal_add_js("jQuery(function() { 
      jQuery('.choose-footer .facts').addClass('active-footer'); 
    });"
    ,'inline');
  }
  drupal_add_js("
    function styleColor(oBj, color){
      jQuery('input[name=\"styleColor\"]').val(color);
      jQuery(oBj).parent().parent().find('a').removeClass('active-color');
      jQuery(oBj).addClass('active-color');
      return false;
    }
    function footerClass(oBj, color){
      jQuery('input[name=\"footerClass\"]').val(color);
      jQuery(oBj).parent().parent().find('a').removeClass('active-footer');
      jQuery(oBj).addClass('active-footer');
      return false;
    }"
  ,'inline');
  drupal_add_css('
    .theme-colours ul {
      float: left;
      width: 100%;
    }
    .color-switcher ul li {
      float: left;
      margin-right: 5px;
      margin-bottom: 5px;
      list-style: none;
    }
    .color-switcher ul li a {
      display: block;
      width: 24px;
      height: 24px;
      outline: none;
    }
    .color-switcher ul li a.asset-change {
      background: #0cadbe;
    }
    .color-switcher ul li a.green-change {
      background: #76b737;
    }
    .color-switcher ul li a.light-brown-change {
      background: #cda659;
    }
    .color-switcher ul li a.light-yellow-change {
      background: #e7d408;
    }
    .color-switcher ul li a.orange-change {
      background: #ff9c00;
    }
    .color-switcher ul li a.purple-change {
      background: #c74a73;
    }
    .color-switcher ul li a.red-change {
      background: #e54242;
    }
    .color-switcher ul li a.yellow-change {
      background: #fac32d;
    }
    .active-color, .color-switcher ul li a:hover{
      border: 3px solid #000;
      width: 18px !important;
      height: 18px !important;
    }
    .active-footer, .choose-footer a:hover {
      border: 3px solid #000 !important;
      text-decoration: none;
      outline: 0;
    }
    .choose-footer a {
      display: inline-block;
      text-align: center;
      width: 50px;
      margin: 0 5px 0 0;
      color: #5d5d5d;
      font-size: 15px;
      border: 3px solid #e7e7e7;
      padding: 5px 7px 2px;
    }
    .color-switcher p {
      font-weight: bold;
    }
    .form-item-allowClient{
      padding-top: 30px !important;
    }
  ','inline');
}

<?php

/**
 * @file
 * template.php
 */
function checkNewsletter(){
  $alias_parts = explode('/', drupal_get_path_alias());
  $check = FALSE;
  if(drupal_is_front_page()) $check = TRUE;
  if(count($alias_parts)){
    if (in_array($alias_parts[0], array('home2','home3','home4','home5','home6','home7','home8'))) {
      $check = TRUE;
    }
  }
  return $check;
}
function mukam_menu_tree__primary(&$variables) {
  $headerClass = get_header_type();
  if(in_array($headerClass, array('header-1','header-2','header-3','header-4','header-7'))){
    return '<ul class="nav navbar-nav navbar-right">' . $variables['tree'] . '</ul>';
  } else {
    return '<ul class="nav navbar-nav">' . $variables['tree'] . '</ul>';
  }
  
}
function mukam_js_alter(&$js) {
  $bootstrap_js_path = drupal_get_path('theme', 'bootstrap') . '/js/bootstrap.js';
  unset($js[$bootstrap_js_path]);
  $isotope_js_path = drupal_get_path('module', 'isotope') . '/isotope.js'; //change made at this line
  if (isset($js[$isotope_js_path])) {    
    unset($js[$isotope_js_path]);
    drupal_add_js(drupal_get_path('theme', 'mukam') . '/js/views_isotope.js');
  }  
}
function mukam_css_alter(&$css) {
  // print(drupal_get_path('theme','mukam'));
  // $custom_path = drupal_get_path('theme', 'mukam').'/css/custom.css';
  // //print_r($css);die;
  // if(isset($css[$custom_path])){
  //   $css[$custom_path]['attributes'] = array('id'=>'linhdevil');
  // }
}
function mukam_preprocess_page(&$variables) {
  drupal_add_js('jQuery.extend(Drupal.settings, { "pathToTheme": "' . drupal_get_path('theme','mukam') . '" });', 'inline');
  $alias_parts = explode('/', drupal_get_path_alias());
  $theme_path = drupal_get_path('theme', 'mukam');
  if(count($alias_parts)){
    if ( in_array($alias_parts[0], array('home1','home2','home3','home5','aboutus','aboutus2','shortcodes','service-one','carousel-sliders','service-two','members','contact_one','contact_two','pricing-table', 'contact-us'))) {
      $variables['theme_hook_suggestions'][] = 'page__front';
    } else if( in_array($alias_parts[0], array('blogs','blog-left-sidebar','blog-right-sidebar','blog-fullwidth','faqs','faqs2','blogs-homepage', 'blog-front', 'blog-categories', 'spca-merchandise', 'blog')) ){
      $variables['theme_hook_suggestions'][] = 'page__blog';
    } else if( in_array($alias_parts[0], array('shop_list')) ){
      $variables['theme_hook_suggestions'][] = 'page__shop';
    } elseif (in_array($alias_parts[0], array('home-parallax'))) {
      $variables['theme_hook_suggestions'][] = 'page__parallax';
    }
  }
  if (isset ($variables['node']->type)) {
    if(in_array($variables['node']->type, array('blog','features'))){
      $variables['theme_hook_suggestions'][] = 'page__blog';
    } elseif(in_array($variables['node']->type, array('page'))){
      $variables['theme_hook_suggestions'][] = 'page__front';
    } elseif(in_array($variables['node']->type, array('product'))){
      $variables['theme_hook_suggestions'][] = 'page__shop';
      drupal_add_js("jQuery(function() { 
        jQuery('.form-type-uc-quantity input').attr('type','number');
        jQuery('.form-type-uc-quantity input').addClass('form-control');
        jQuery('button.node-add-to-cart').addClass('buton b_inherit buton-2 buton-large button-custom-add');  
       });",'inline');
    }
  }
  //$term = menu_get_object('taxonomy_term', 2);
  //if ($term) {
  //  $variables['theme_hook_suggestions'][] = 'page__shop';
  //}
  if($_GET['q'] == 'cart' || $alias_parts[0] == 'product-categories'){
    drupal_add_js("jQuery(function() { 
        jQuery('.form-type-uc-quantity input').attr('type','number');
        jQuery('.form-type-uc-quantity input').addClass('form-control');
       });",'inline');
  }
  if($alias_parts[0] == 'blogs' || $alias_parts[0] == 'blog-fullwidth' || $alias_parts[0] == 'blogs-homepage'){
    drupal_add_js(drupal_get_path('theme','mukam').'/js/imagesloaded.pkgd.min.js');
  }
    // It's important to run some kind of filter on the title so users can't
    // use fx script tags to inject js or do nasty things.
    //$vars['title'] = filter_xss($vars['node']->title,array('a', 'em', 'strong', 'cite', 'blockquote', 'code', 'ul', 'ol', 'li', 'dl', 'dt', 'dd'));
    if (isset ($variables['node']->type)) {
    	if(isset($variables['node']->title)){
    		drupal_set_title($variables['node']->title,true);
		}
	}
  
}
function mukam_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == 'uc_cart_view_form'){
    $form['#attributes'] = array('class'=>array('cart-shipping'));
  }
  if($form_id == 'simplenews_block_form_10'){
    $form['mail']['#title_display'] = 'invisible';
    $form['mail']['#attributes'] = array('class'=>array('email-form'),'placeholder'=>'your email');
    if(checkNewsletter()){
      $form['submit']['#value'] = t('Go');
      $form['submit']['#attributes'] = array('class'=>array('button'));
    }
    else {
      $form['submit']['#value'] = t('Submit');
      $form['submit']['#attributes'] = array('class'=>array('buton b_inherit buton-2 buton-mini button-hover'));
    }
  }
  if ($form_id == 'contact_site_form') {
    $form['name']['#title_display'] = 'invisible';
    $form['mail']['#title_display'] = 'invisible';
    $form['subject']['#title_display'] = 'invisible';
    $form['message']['#title_display'] = 'invisible';
    $form['name']['#attributes']["placeholder"] = $form['name']['#title'];
    $form['mail']['#attributes']["placeholder"] = $form['mail']['#title'];
    $form['subject']['#attributes']["placeholder"] = $form['subject']['#title'];
    $form['message']['#attributes']["placeholder"] = $form['message']['#title'];
    $form['actions']['submit']['#value'] = t('Submit');
    $form['actions']['submit']['#attributes']["class"] = array('buton b_asset buton-2 buton-mini button-hover');
    $form['message']['#resizable'] = false ;
    $form['#attributes']["class"] = array('contact');
    if(isset($form['copy'])){
      unset($form['copy']);
    }
    $alias_parts = explode('/', drupal_get_path_alias());
    if (count($alias_parts) && ($alias_parts[0] == 'contact' || $alias_parts[0] == 'contact_one' || $alias_parts[0] == 'contact_two' || drupal_get_path_alias() == 'features/contact-forms')) {
      $form['name']['#prefix'] = '<div class="col-md-4 form-group">';
      $form['name']['#suffix'] = '</div>';
      $form['mail']['#prefix'] = '<div class="col-md-4 form-group">';
      $form['mail']['#suffix'] = '</div>';
      $form['subject']['#prefix'] = '<div class="col-md-4 form-group">';
      $form['subject']['#suffix'] = '</div>';
      $form['message']['#prefix'] = '<div class="clearfix"></div><div class="col-md-12 form-group">';
      $form['message']['#suffix'] = '</div>';
    }
  }
  if($form_id == 'comment_node_blog_form' || $form_id == 'comment_node_product_form' || $form_id == 'comment_node_article_form'){
    $form['comment_body'][LANGUAGE_NONE][0]['#format'] = 'plain_text';
    $form['actions']['submit']['#value'] = t('Submit');
    $form['actions']['submit']['#attributes']["class"] = array('buton b_asset buton-2 buton-mini button-hover');
  }
  if (isset($form['nid']['#value']) && $form_id == 'uc_catalog_buy_it_now_form_' . $form['nid']['#value']) {
    $form['actions']['submit']['#value'] = '<i class="mukam-shop"></i>ADD TO CART';
    $form['actions']['submit']['#attributes']['class'][] = 'btn-custom-add-to-cart';
  }
  if($form_id == 'uc_cart_view_form')  {
    $form['actions']['update']['#attributes']['class'][] = 'buton b_inherit buton-2 buton-mini button-hover';
    $form['actions']['checkout']['checkout']['#attributes']['class'][] = 'buton b_inherit buton-2 buton-mini';
    $form['actions']['continue_shopping']['#prefix'] = '<div class="continue-shopping">';
    $form['actions']['continue_shopping']['#suffix'] = '</div>';
  }
  if($form_id == 'uc_cart_checkout_form'){
    $form['actions']['cancel']['#attributes']['class'][] = 'buton b_inherit buton-2 buton-mini button-hover';
    $form['actions']['continue']['#attributes']['class'][] = 'buton b_inherit buton-2 buton-mini button-hover';
  }
  if(in_array($form_id, array('contact_personal_form','user_login','user_register_form','user_pass'))){
    $form['actions']['submit']['#attributes']['class'][] = 'buton b_inherit buton-2 buton-mini button-hover';
  }
  //if (isset($form['#entity_type']) && isset($form_state['field'])) {
  //  $entity_type = $form['#entity_type'];
  //  $bundle      = $form['#bundle'];
  //  $view_mode   = 'default';
  //  foreach($form_state['field'] as $key=>$value){
  //    $field_name  = $key;
  //    $formatter_info = field_formatter_settings_get_instance_display_settings($entity_type, $field_name, $bundle, $view_mode);
  //    $css_class = $formatter_info['field_formatter_class'];
  //    if(!empty($css_class)) {
  //      $form[$field_name]['#attributes']['class'][] = $css_class;
  //    }
  //  }
  //}
}

function mukam_form_search_block_form_alter(&$form, &$form_state, $form_id) { 
  $form['search_block_form']['#attributes']['placeholder'] = t('Search here...');
  $form['#prefix'] = '<div class="sidebar-widget">';
  $form['#suffix'] = '</div>';
  drupal_add_js("jQuery(function() { 
    jQuery('.block-search .form-search button.btn-default').addClass('search-icon'); 
    jQuery('.block-search .form-search button.btn-default').html('<a href=\"#\"><i class=\"icon-search\"></i></a>'); 
  });",'inline');
}
function mukam_preprocess_node(&$vars) {
  if(isset($vars['content']['links']['statistics']['#links']['statistics_counter'])){
    unset($vars['content']['links']['statistics']['#links']['statistics_counter']);    
  }
}
/**
 * Overrides Theme function to output tablinks for classic Quicktabs style tabs.
 */
function mukam_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'],
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      $tab['#options']['html'] = TRUE; // Added this to override to allow HTML in titles.
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $item['data'] = drupal_render($tab);
      $variables['items'][] = $item;
    }
  }
  return theme('item_list', $variables);
}
function mukam_element_info_alter(&$type) {
  if (isset($type['uc_quantity'])) {
    
    //print_r($type['uc_quantity']);die;
    // $type['uc_quantity']['#prefix'] = '<div class="item-counter"><span onClick="productQuantity(this,-1);" class="pull-left">-</span>';
    // $type['uc_quantity']['#suffix'] = '<span onClick="productQuantity(this,1);" class="pull-right">+</span><div class="clr"></div></div>';
    // $type['uc_quantity']['#attributes']['class'][] = 'items-total';
  }
}
function mukam_menu_link(array $variables) { 
   $element = $variables['element'];
  $sub_menu = '';
  
  if ($element['#below']) {
   
    // Prevent dropdown functions from being added to management menu as to not affect navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    else {
     
      // Add our own wrapper
      unset($element['#below']['#theme_wrappers']);

      if (isset($element['#original_link']['localized_options']['mega']) && $element['#original_link']['localized_options']['mega'] == 1) {
        $sub_menu = '<div class="mega-menu">';
        foreach ($element['#below'] as $key => $data) {
          if (isset($data['#below'])) {
            unset($data['#below']['#theme_wrappers']);
            $sub_menu .= '<ul><li><strong>' . $data['#title'] . '</strong></li>' . drupal_render($data['#below']) . '</ul>';
          }          
        }     
        $sub_menu .= '</div>';
        $element['#attributes']['class'][] = 'mega-menu-item';
        $element['#localized_options']['html'] = TRUE;
      }
      else {
        $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
        $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
        $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
       
        // Check if this element is nested within another
        if ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] > 1)) {
          // Generate as dropdown submenu
          $element['#attributes']['class'][] = 'dropdown-submenu';
          $sub_menu = '<i class="fa fa-angle-right pull-right"></i>' . $sub_menu;
        }
        else {
          // Generate as standard dropdown
          $element['#attributes']['class'][] = 'dropdown';
          $element['#localized_options']['html'] = TRUE;
          $element['#title'] .= ' <span class="caret"></span>';
        }
       
        // Set dropdown trigger element to # to prevent inadvertant page loading with submenu click
        $element['#localized_options']['attributes']['data-target'] = '#';
      }      
    }
  }
  // Issue #1896674 - On primary navigation menu, class 'active' is not set on active menu item.
  // @see http://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']) || $element['#localized_options']['language']->language == $language_url->language)) {
     $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function mukam_hidden_breadcrumb(){
  if(in_array(drupal_get_path_alias(), array('blogs','blog-fullwidth','home1','home2','home3','home4','home5','home6','home7','home8','shop','blogs-homepage','shop-homepage','home-parallax'))){
    return TRUE;
  } else{
    return FALSE;
  }
}
function mukam_menu_alter(&$items){
  $items['node']['page callback'] = 'drupal_not_found';
}
function get_footer_class(){
  $check_allow = theme_get_setting('allowClient') ? theme_get_setting('allowClient') : 0;
  $footerClass = '';
  if( isset($_COOKIE["footerClass"]) && $check_allow == 1) {
    $footerClass = $_COOKIE["footerClass"];

  } else {
      $footerClass = theme_get_setting('footerClass') ? theme_get_setting('footerClass') : 'facts';
  }
  return $footerClass;
}
function get_header_type(){
  $check_allow = theme_get_setting('allowClient') ? theme_get_setting('allowClient') : 0;
  $footerClass = '';
  if( isset($_COOKIE["headerType"]) && $check_allow == 1) {
    $footerClass = $_COOKIE["headerType"];

  } else {
      $footerClass = theme_get_setting('styleHeader') ? theme_get_setting('styleHeader') : 'header-1';
  }
  return $footerClass;
}
function get_class_body(){
  $alias_parts = explode('/', drupal_get_path_alias());
  $class = 'off';
  $loader = '';
  if(count($alias_parts)){
   if (in_array($alias_parts[0], array('home-parallax'))) {
      $class = 'download';
      $loader = '<div id="qLoverlay"></div>';
    }
  }
  return array('class'=>$class,'loader'=>$loader);
}
function get_style_color(){
    // style switcher
  global $base_url;
  $color_setting = '';
  $check_allow = theme_get_setting('allowClient') ? theme_get_setting('allowClient') : 0;
  if( isset($_COOKIE["styleColor"]) && $check_allow == 1) {
    $color_setting = $_COOKIE["styleColor"].'.css';

  } else {
    if(theme_get_setting('styleColor')){
      $color_setting = theme_get_setting('styleColor').'.css';
    }
  }
  if($color_setting != '' && $color_setting != 'asset.css'){
    //drupal_add_css(drupal_get_path('theme','mukam') . '/css/'.$color_setting,array('group'=>200));
    $color_setting = '<link rel="stylesheet" href="'.$base_url.'/'.drupal_get_path('theme','mukam').'/css/'.$color_setting.'" id="styleswitcher">';
  } else {
    $color_setting = '<link rel="stylesheet" href="'.$base_url.'/'.drupal_get_path('theme','mukam').'/css/custom.css" id="styleswitcher">';
  }
  return $color_setting;
}
function check_show_option_header(){
  $alias_parts = explode('/', drupal_get_path_alias());
  if(count($alias_parts)){
   if (in_array($alias_parts[0], array('home-parallax'))) {
      return FALSE;
    }
  }
  return TRUE;
}
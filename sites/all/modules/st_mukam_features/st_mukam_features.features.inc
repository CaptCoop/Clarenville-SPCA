<?php
/**
 * @file
 * st_mukam_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function st_mukam_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function st_mukam_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function st_mukam_features_image_default_styles() {
  $styles = array();

  // Exported image style: author_image_60x60.
  $styles['author_image_60x60'] = array(
    'label' => 'author image(60x60)',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: client_image_219x116_.
  $styles['client_image_219x116_'] = array(
    'label' => 'client image(219x116)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 219,
          'height' => 116,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: client_say_image_46x54.
  $styles['client_say_image_46x54'] = array(
    'label' => 'client say image(46x54)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 46,
          'height' => 54,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: client_say_image_77x90.
  $styles['client_say_image_77x90'] = array(
    'label' => 'client say image(77x90)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 77,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_blog_1900x567.
  $styles['image_blog_1900x567'] = array(
    'label' => 'Image blog(1900x567)',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1900,
          'height' => 567,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_blog_430x270.
  $styles['image_blog_430x270'] = array(
    'label' => 'Image blog(430x270)',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 430,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_blog_525.
  $styles['image_blog_525'] = array(
    'label' => 'Image blog(525)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 525,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_blog_72x71.
  $styles['image_blog_72x71'] = array(
    'label' => 'Image blog(72x71)',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 72,
          'height' => 71,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_blog_805x503.
  $styles['image_blog_805x503'] = array(
    'label' => 'Image blog(805x503)',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 805,
          'height' => 503,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: image_member_593x586.
  $styles['image_member_593x586'] = array(
    'label' => 'Image member(593x586)',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 593,
          'height' => 586,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_product_224x336.
  $styles['image_product_224x336'] = array(
    'label' => 'Image product(224x336)',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 224,
          'height' => 336,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: md_slider_4_thumb.
  $styles['md_slider_4_thumb'] = array(
    'label' => 'md_slider_4_thumb',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: portfolio_classic_331x207.
  $styles['portfolio_classic_331x207'] = array(
    'label' => 'portfolio classic(331x207)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 331,
          'height' => 207,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_detail_width_725.
  $styles['portfolio_detail_width_725'] = array(
    'label' => 'portfolio detail(width:725)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 725,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_thumb_255x160.
  $styles['portfolio_thumb_255x160'] = array(
    'label' => 'portfolio thumb(255x160)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_wide_width_1200.
  $styles['portfolio_wide_width_1200'] = array(
    'label' => 'portfolio wide(width 1200)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_thumb_320x200.
  $styles['project_thumb_320x200'] = array(
    'label' => 'project thumb(320x200)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_install().
 */
function st_mukam_features_install() {
$sliders = array(
  1 => array(
    'slid' => 1,
    'title' => 'Front banner header',
    'description' => '',
    'machine_name' => 'front-banner-header',
    'settings' => 'a:30:{s:10:"full_width";i:1;s:5:"width";s:4:"1447";s:6:"height";s:3:"610";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:0;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  2 => array(
    'slid' => 2,
    'title' => 'parallaxslider',
    'description' => '',
    'machine_name' => 'parallaxslider',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1302";s:6:"height";s:3:"610";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  3 => array(
    'slid' => 3,
    'title' => 'Front 2 banner header',
    'description' => '',
    'machine_name' => 'front-2-banner-header',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1302";s:6:"height";s:3:"549";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  4 => array(
    'slid' => 4,
    'title' => 'Front 3 banner header',
    'description' => '',
    'machine_name' => 'md-slider-53f84e121032f',
    'settings' => 'a:30:{s:10:"full_width";i:1;s:5:"width";s:4:"1447";s:6:"height";s:3:"610";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  5 => array(
    'slid' => 5,
    'title' => 'Top header parallax',
    'description' => '',
    'machine_name' => 'top-header-parallax',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1302";s:6:"height";s:3:"659";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"5000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  6 => array(
    'slid' => 6,
    'title' => 'Header shop',
    'description' => '',
    'machine_name' => 'header-shop',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1140";s:6:"height";s:3:"548";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"5000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
);
foreach ($sliders as $slider) {
	$slider = (object)$slider;
	$slider = _md_slider_recast('MDSlider',$slider);
	$slider->slid = NULL;

	if (!MDSlider::get_by_machine_name($slider->machine_name))
		$slider->save();
}
}

/**
 * Implements hook_node_info().
 */
function st_mukam_features_node_info() {
  $items = array(
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'client_say' => array(
      'name' => t('Client say'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'faqs' => array(
      'name' => t('FAQs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'features' => array(
      'name' => t('Features'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'member' => array(
      'name' => t('member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'skill' => array(
      'name' => t('Skill'),
      'base' => 'node_content',
      'description' => t('Our skills'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_uc_product_default_classes().
 */
function st_mukam_features_uc_product_default_classes() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'uc_product',
      'description' => t('Use <em>products</em> to represent items for sale on the website, including all the unique information that can be attributed to a specific model number.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

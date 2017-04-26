<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html>
<!--[if lt IE 7]>      <html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?> class="lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?> class="lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?> class="lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>> <!--<![endif]-->  
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print get_style_color(); ?>
  <!--[if IE 7]>
      <link rel="stylesheet" href="<?php global $base_url; print($base_url.'/'.drupal_get_path('theme','mukam'));?>/css/font-awesome-ie7.min.css">
    <![endif]-->
  <?php print $scripts; ?>
</head>
<?php $paracheck = get_class_body();?>
<body class="<?php print $classes; ?> <?php print $paracheck['class']; ?>" <?php print $attributes;?>>
  <?php print $paracheck['loader']; ?>
  <div id="mukam-layout">
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </div>
  <?php if(theme_get_setting('allowClient')):?>
      <div class="styleswitcher">
        <div class="switch">
          <h5>STYLE SWITCHER</h5>
        </div>  
        <div class="switch">
          <p>Choose Color Style</p>
          <div class="asset-change"></div>
          <div class="green-change"></div>
          <div class="lightbrown-change"></div>
          <div class="lightyellow-change"></div>
          <div class="orange-change"></div>
          <div class="purple-change"></div>
          <div class="red-change"></div>
          <div class="yellow-change"></div>
          <div class="clearfix"></div>  
        </div> 
        <?php if(check_show_option_header()):?> 
        <div class="switch">
          <select id="headertype" name="headertype" class="form-control">
                      <option value="">Header Style</option>
                      <option value="header-1">Header - 1</option>
                      <option value="header-2">Header - 2</option>
                      <option value="header-3">Header - 3</option>
                      <option value="header-4">Header - 4</option>
                      <option value="header-5">Header - 5</option>
                      <option value="shopheader">Header - 6</option>
                      <option value="header-7">Header - 7</option>
          </select>
        </div>
      <?php endif;  ?>
        <div class="switch">
          <select id="footertype" name="footertype" class="form-control">
                      <option value="">Footer Style</option>
                      <option value="footer-1">Footer - 1</option>
                      <option value="footer-2">Footer - 2</option>
          </select>
        </div>   
          <div class="stylebutton">
              <i class="mukam-settings icon-2x"></i>
          </div>
      </div>
    <?php endif;?>
</body>
</html>

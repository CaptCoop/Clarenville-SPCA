  <?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
$headerClass = get_header_type();
$topsection = in_array($headerClass, array('header-2','header-3','header-4','header-7')) ? 'top-section-container2':'top-section-container';
?>
<!-- Header -->
<header id="mukam-header" class="mukam-header mukam-header-large <?php print $headerClass; ?> fadein scaleInv anim_1">
  <div class="<?php print($topsection); ?>">
  <div class="top-section">
  <div class="container">
    <div class="row">
      <div class="col-sm-6 col-md-6">
        <div class="phone"><i class="mukam-mobile icon-3x pull-left"></i>(709) 466 3489</div>
        <div class="email"><i class="mukam-envelope icon-3x pull-left"></i>support@clarenvilleareaspca.ca</div>
      </div>
      <div class="col-sm-6 col-md-6">
        <div class="social">
            <?php if(in_array($headerClass, array('header-1','header-2','header-3','header-4','header-7'))): ?>
              <div class="search-widget"> 
              <a href="#"><div class="social-box"><i class="mukam-search"></i></div></a>
              <div class="search">
                <form method="post"  action="/search/node/">
                  <input type="text" name="keys" class="search-query" placeholder="Search">
                  <button type="submit"><span class="social-box"><i class="mukam-search"></i></span></button>
                </form>
              </div>
              </div>
            <?php endif; ?>
            <a href="http://blog.instagram.com/" target="_blank"><div class="social-box"><i class="entypo-instagram"></i></div></a>
            <a href="https://www.facebook.com/ClarenvilleAreaSPCAAdoptables/" target="_blank"><div class="social-box"><i class="mukam-face"></i></div></a>  
        </div>
      </div>
    </div>
  </div>
</div>
<?php if (in_array($headerClass, array('header-1','header-5'))): ?>
  <div class="showhide"><div class="trans-topsection">+</div></div>
<?php endif; ?>
</div>    
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <!-- Main Menu -->
        <nav class="navbar navbar-default <?php print $headerClass; ?>" role="navigation">
          <div class="navbar-header">
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-ex1-collapse">
              <span class="sr-only">Toggle navigation</span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button>
            <?php if ($logo): ?>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                <img class="logo" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
              </a>
            <?php endif; ?>

            <?php if (!empty($site_name)): ?>
              <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
            <?php endif; ?>
            <!--<div class="shopping hidden-md hidden-lg"><a href="#"><div class="shopping-cart"><i class="mukam-shop"></i></div></a> </div>-->
            <?php if (!empty($page['shopcart']) && in_array($headerClass, array('header-5','shopheader'))): ?>
              <?php print render($page['shopcart']); ?>
            <?php endif; ?> 
            <?php if(in_array($headerClass, array('shopheader'))): ?>
            <div class="search-widget search-shopheader"> 
              <div class="search">
                <form method="post"  action="/search/node/">
                  <input type="text" name="keys" class="search-query" placeholder="Search">
                  <button type="submit"><span class="social-box"><i class="mukam-search"></i></span></button>
                </form>
              </div>
              </div>
            <?php endif; ?>  
          </div>
          <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
            <!-- Collect the nav links, forms, and other content for toggling -->
            <div class="collapse navbar-collapse navbar-ex1-collapse">
              <?php if (!empty($page['shopcart']) && in_array($headerClass, array('header-1','header-2','header-3','header-4','header-7'))): ?>
                <?php print render($page['shopcart']); ?>
              <?php endif; ?>            
              <?php if (!empty($primary_nav)): ?>
                  <?php print render($primary_nav); ?>
              <?php endif; ?>
              <?php if(in_array($headerClass, array('header-5'))): ?>
              <div class="search-widget search-header-5"> 
              <div class="search">
                <form method="post"  action="/search/node/">
                  <input type="text" name="keys" class="search-query" placeholder="Search">
                  <button type="submit"><span class="social-box"><i class="mukam-search"></i></span></button>
                </form>
              </div>
              </div>
            <?php endif; ?>  
              <?php if (!empty($secondary_nav)): ?>
                  <?php print render($secondary_nav); ?>
              <?php endif; ?>
              <?php if (!empty($page['navigation'])): ?>
                  <?php print render($page['navigation']); ?>
              <?php endif; ?>              
            </div><!-- /.navbar-collapse -->
          <?php endif; ?>
        </nav>
      </div>
    </div>
  </div>
</header>
<section class="mukam-waypoint" data-animate-down="mukam-header-small <?php print $headerClass; ?>" data-animate-up="mukam-header-large <?php print $headerClass; ?>">
  <?php if (!empty($breadcrumb) && !mukam_hidden_breadcrumb()):  ?>
  <div class="caption-out fadein scaleInv anim_2">
    <div class="container">
      <div class="row">
        <div class="col-md-8 caption">
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
              <h3 class="page-header bordered light"><?php print $title; ?></h3>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <p class="fadein scaleInv anim_4"><?php if(isset($node)){ print $node->body['und'][0]['summary']; }?></p>
        </div>
        <?php print $breadcrumb; ?>
      </div>
    </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($page['content_top'])): ?>
    <section class="sub-page-banner text-center" data-stellar-background-ratio="0.3">
      <div class="overlay"></div>
      <div class="container">
        <?php print render($page['content_top']); ?>
      </div>
    </section>
  <?php endif; ?>
  <?php if (!empty($page['content_top_2'])): ?>
      <?php print render($page['content_top_2']); ?>
  <?php endif; ?>
  <div class="bg-color grey fadein scaleInv anim_3">
    <div class="main-container container"> 
      <div class="row">
            <?php if (!empty($page['sidebar_first'])): ?>
                <aside class="col-sm-3 col-md-3 sidebar fadein scaleInv anim_4" role="complementary">
                    <?php print render($page['sidebar_first']); ?>
                </aside>  <!-- /#sidebar-first -->
            <?php endif; ?>

            <section <?php print $content_column_class; ?> >
                <?php if (!empty($page['highlighted'])): ?>
                    <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
                <?php endif; ?>
                <?php print render($title_suffix); ?>
                <a id="main-content"></a>
                
                <?php print $messages; ?>
                <?php if (!empty($tabs)): ?>
                    <?php print render($tabs); ?>
                <?php endif; ?>
                <?php if (!empty($page['help'])): ?>
                    <?php print render($page['help']); ?>
                <?php endif; ?>
                <?php if (!empty($action_links)): ?>
                    <ul class="action-links"><?php print render($action_links); ?></ul>
                <?php endif; ?>
                <?php print render($page['content']); ?>
            </section>

            <?php if (!empty($page['sidebar_second'])): ?>
               <aside class="col-sm-3 col-md-3 sidebar" role="complementary">
                    <?php print render($page['sidebar_second']); ?>
               </aside>  <!-- /#sidebar-second -->
            <?php endif; ?>
      </div> 
    </div>
  </div>
  <?php if (!empty($page['content_bottom'])): ?>
    <?php print render($page['content_bottom']); ?>
  <?php endif; ?>
  <?php if (!empty($page['content_bottom2'])): ?>
    <section class="container">
      <?php print render($page['content_bottom2']); ?>
    </section>
  <?php endif; ?>     
  <div class="colourfull-row"></div>
</section>
<?php if (!empty($page['footer_facts'])): ?>
  <div class="<?php print(get_footer_class());?>" id="footer_facts">
    <div class="container">     
      <div class="row">
        <?php print render($page['footer_facts']); ?>
      </div>
    </div>
  </div>
<?php endif; ?>
<footer id="footer" class="light">
  <div class="container">
    <div class="row">
      <?php print render($page['footer']); ?>
    </div>
  </div>
  <?php if (!empty($page['footer_bottom'])): ?>
    <?php print render($page['footer_bottom']); ?>
  <?php endif; ?>
</footer>

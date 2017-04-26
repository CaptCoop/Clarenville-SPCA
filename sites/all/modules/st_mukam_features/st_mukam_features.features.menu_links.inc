<?php
/**
 * @file
 * st_mukam_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function st_mukam_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_404-error-page:node/37
  $menu_links['main-menu_404-error-page:node/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => '404 Error Page',
    'options' => array(
      'identifier' => 'main-menu_404-error-page:node/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_404-error:node/60
  $menu_links['main-menu_404-error:node/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => '404 ERROR',
    'options' => array(
      'identifier' => 'main-menu_404-error:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_about-us-2:aboutus2
  $menu_links['main-menu_about-us-2:aboutus2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'aboutus2',
    'router_path' => 'aboutus2',
    'link_title' => 'About Us 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us-2:aboutus2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_about-us:aboutus
  $menu_links['main-menu_about-us:aboutus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'aboutus',
    'router_path' => 'aboutus',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:aboutus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_accordions:node/61
  $menu_links['main-menu_accordions:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Accordions',
    'options' => array(
      'identifier' => 'main-menu_accordions:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_blog-fullwidth:blog-fullwidth
  $menu_links['main-menu_blog-fullwidth:blog-fullwidth'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog-fullwidth',
    'router_path' => 'blog-fullwidth',
    'link_title' => 'Blog Fullwidth',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog-fullwidth:blog-fullwidth',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blogs',
  );
  // Exported menu link: main-menu_blog:blogs
  $menu_links['main-menu_blog:blogs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogs',
    'router_path' => 'blogs',
    'link_title' => 'BLAG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:blogs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bloggy-homepage:blogs-homepage
  $menu_links['main-menu_bloggy-homepage:blogs-homepage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogs-homepage',
    'router_path' => 'blogs-homepage',
    'link_title' => 'BLOGGY HOMEPAGE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bloggy-homepage:blogs-homepage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_buttons:node/55
  $menu_links['main-menu_buttons:node/55'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Buttons',
    'options' => array(
      'identifier' => 'main-menu_buttons:node/55',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_carousel-sliders:carousel-sliders
  $menu_links['main-menu_carousel-sliders:carousel-sliders'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'carousel-sliders',
    'router_path' => 'carousel-sliders',
    'link_title' => 'Carousel Sliders',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_carousel-sliders:carousel-sliders',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_cart:cart
  $menu_links['main-menu_cart:cart'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cart',
    'router_path' => 'cart',
    'link_title' => 'Cart',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_cart:cart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_shop:shop_list',
  );
  // Exported menu link: main-menu_columns:node/38
  $menu_links['main-menu_columns:node/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Columns',
    'options' => array(
      'identifier' => 'main-menu_columns:node/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_contact-forms:node/65
  $menu_links['main-menu_contact-forms:node/65'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Contact Forms',
    'options' => array(
      'identifier' => 'main-menu_contact-forms:node/65',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_contact-us-2:contact_two
  $menu_links['main-menu_contact-us-2:contact_two'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact_two',
    'router_path' => 'contact_two',
    'link_title' => 'CONTACT US 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us-2:contact_two',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact:contact_one',
  );
  // Exported menu link: main-menu_contact-us:contact_one
  $menu_links['main-menu_contact-us:contact_one'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact_one',
    'router_path' => 'contact_one',
    'link_title' => 'CONTACT US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:contact_one',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact:contact_one',
  );
  // Exported menu link: main-menu_contact:contact_one
  $menu_links['main-menu_contact:contact_one'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact_one',
    'router_path' => 'contact_one',
    'link_title' => 'CONTACT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact_one',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_faqs-2:faqs2
  $menu_links['main-menu_faqs-2:faqs2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faqs2',
    'router_path' => 'faqs2',
    'link_title' => 'FAQS 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faqs-2:faqs2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_faqs:faqs
  $menu_links['main-menu_faqs:faqs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faqs',
    'router_path' => 'faqs',
    'link_title' => 'FAQS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faqs:faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_faqs:node/66
  $menu_links['main-menu_faqs:node/66'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/66',
    'router_path' => 'node/%',
    'link_title' => 'FAQs',
    'options' => array(
      'identifier' => 'main-menu_faqs:node/66',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_features:node/54
  $menu_links['main-menu_features:node/54'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'FEATURES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_features:node/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_google-maps:node/56
  $menu_links['main-menu_google-maps:node/56'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Google Maps',
    'options' => array(
      'identifier' => 'main-menu_google-maps:node/56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'HOME',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_homepage-1:home1
  $menu_links['main-menu_homepage-1:home1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home1',
    'router_path' => 'home1',
    'link_title' => 'HOMEPAGE 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_homepage-1:home1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_homepage-2:home2
  $menu_links['main-menu_homepage-2:home2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home2',
    'router_path' => 'home2',
    'link_title' => 'HOMEPAGE 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_homepage-2:home2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_homepage-3:home3
  $menu_links['main-menu_homepage-3:home3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home3',
    'router_path' => 'home3',
    'link_title' => 'HOMEPAGE 3',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_homepage-3:home3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_homepage-4:home5
  $menu_links['main-menu_homepage-4:home5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home5',
    'router_path' => 'home5',
    'link_title' => 'HOMEPAGE 4',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_homepage-4:home5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_left-sidebar-blog:blog-left-sidebar
  $menu_links['main-menu_left-sidebar-blog:blog-left-sidebar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog-left-sidebar',
    'router_path' => 'blog-left-sidebar',
    'link_title' => 'Left Sidebar Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_left-sidebar-blog:blog-left-sidebar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blogs',
  );
  // Exported menu link: main-menu_notifications:node/54
  $menu_links['main-menu_notifications:node/54'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Notifications',
    'options' => array(
      'identifier' => 'main-menu_notifications:node/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_pages:aboutus
  $menu_links['main-menu_pages:aboutus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'aboutus',
    'router_path' => 'aboutus',
    'link_title' => 'PAGES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pages:aboutus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_parallax-homepage:home-parallax
  $menu_links['main-menu_parallax-homepage:home-parallax'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home-parallax',
    'router_path' => 'home-parallax',
    'link_title' => 'PARALLAX HOMEPAGE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_parallax-homepage:home-parallax',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_portfolio-classic:portfolio-classic
  $menu_links['main-menu_portfolio-classic:portfolio-classic'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-classic',
    'router_path' => 'portfolio-classic',
    'link_title' => 'Portfolio Classic',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio-classic:portfolio-classic',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio-classic',
  );
  // Exported menu link: main-menu_portfolio-detail:portfolio-detail
  $menu_links['main-menu_portfolio-detail:portfolio-detail'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-detail',
    'router_path' => 'portfolio-detail',
    'link_title' => 'Portfolio Detail',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio-detail:portfolio-detail',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio-classic',
  );
  // Exported menu link: main-menu_portfolio-grid:portfolio-grid
  $menu_links['main-menu_portfolio-grid:portfolio-grid'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-grid',
    'router_path' => 'portfolio-grid',
    'link_title' => 'Portfolio Grid',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio-grid:portfolio-grid',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio-classic',
  );
  // Exported menu link: main-menu_portfolio-wide:portfolio-wide-image
  $menu_links['main-menu_portfolio-wide:portfolio-wide-image'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-wide-image',
    'router_path' => 'portfolio-wide-image',
    'link_title' => 'Portfolio Wide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio-wide:portfolio-wide-image',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_portfolio:portfolio-classic',
  );
  // Exported menu link: main-menu_portfolio:portfolio-classic
  $menu_links['main-menu_portfolio:portfolio-classic'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-classic',
    'router_path' => 'portfolio-classic',
    'link_title' => 'PORTFOLIO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio:portfolio-classic',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_right-sidebar-blog:blog-right-sidebar
  $menu_links['main-menu_right-sidebar-blog:blog-right-sidebar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog-right-sidebar',
    'router_path' => 'blog-right-sidebar',
    'link_title' => 'Right Sidebar Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_right-sidebar-blog:blog-right-sidebar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blogs',
  );
  // Exported menu link: main-menu_service-one:service-one
  $menu_links['main-menu_service-one:service-one'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'service-one',
    'router_path' => 'service-one',
    'link_title' => 'Service One',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_service-one:service-one',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_service-two:service-two
  $menu_links['main-menu_service-two:service-two'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'service-two',
    'router_path' => 'service-two',
    'link_title' => 'Service Two',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_service-two:service-two',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_shop-homepage:shop-homepage
  $menu_links['main-menu_shop-homepage:shop-homepage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop-homepage',
    'router_path' => 'shop-homepage',
    'link_title' => 'SHOP HOMEPAGE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shop-homepage:shop-homepage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_shop-list:shop_list
  $menu_links['main-menu_shop-list:shop_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop_list',
    'router_path' => 'shop_list',
    'link_title' => 'Shop List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shop-list:shop_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_shop:shop_list',
  );
  // Exported menu link: main-menu_shop:shop
  $menu_links['main-menu_shop:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shop:shop',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_shop:shop_list',
  );
  // Exported menu link: main-menu_shop:shop_list
  $menu_links['main-menu_shop:shop_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop_list',
    'router_path' => 'shop_list',
    'link_title' => 'SHOP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shop:shop_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_shortcodes:shortcodes
  $menu_links['main-menu_shortcodes:shortcodes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shortcodes',
    'router_path' => 'shortcodes',
    'link_title' => 'Shortcodes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shortcodes:shortcodes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_skills-bars:node/62
  $menu_links['main-menu_skills-bars:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Skills Bars',
    'options' => array(
      'identifier' => 'main-menu_skills-bars:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_tables:node/58
  $menu_links['main-menu_tables:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Tables',
    'options' => array(
      'identifier' => 'main-menu_tables:node/58',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_tables:pricing-table
  $menu_links['main-menu_tables:pricing-table'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pricing-table',
    'router_path' => 'pricing-table',
    'link_title' => 'Tables',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tables:pricing-table',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_tabs:node/57
  $menu_links['main-menu_tabs:node/57'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'Tabs',
    'options' => array(
      'identifier' => 'main-menu_tabs:node/57',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_team-elements:node/64
  $menu_links['main-menu_team-elements:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Team Elements',
    'options' => array(
      'identifier' => 'main-menu_team-elements:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Exported menu link: main-menu_team:members
  $menu_links['main-menu_team:members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'members',
    'router_path' => 'members',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_team:members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pages:aboutus',
  );
  // Exported menu link: main-menu_typography:node/59
  $menu_links['main-menu_typography:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Typography',
    'options' => array(
      'identifier' => 'main-menu_typography:node/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:node/54',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('404 ERROR');
  t('404 Error Page');
  t('About Us');
  t('About Us 2');
  t('Accordions');
  t('BLAG');
  t('BLOGGY HOMEPAGE');
  t('Blog Fullwidth');
  t('Buttons');
  t('CONTACT');
  t('CONTACT US');
  t('CONTACT US 2');
  t('Carousel Sliders');
  t('Cart');
  t('Columns');
  t('Contact Forms');
  t('FAQS');
  t('FAQS 2');
  t('FAQs');
  t('FEATURES');
  t('Google Maps');
  t('HOME');
  t('HOMEPAGE 1');
  t('HOMEPAGE 2');
  t('HOMEPAGE 3');
  t('HOMEPAGE 4');
  t('Left Sidebar Blog');
  t('Notifications');
  t('PAGES');
  t('PARALLAX HOMEPAGE');
  t('PORTFOLIO');
  t('Portfolio Classic');
  t('Portfolio Detail');
  t('Portfolio Grid');
  t('Portfolio Wide');
  t('Right Sidebar Blog');
  t('SHOP');
  t('SHOP HOMEPAGE');
  t('Service One');
  t('Service Two');
  t('Shop');
  t('Shop List');
  t('Shortcodes');
  t('Skills Bars');
  t('Tables');
  t('Tabs');
  t('Team');
  t('Team Elements');
  t('Typography');


  return $menu_links;
}

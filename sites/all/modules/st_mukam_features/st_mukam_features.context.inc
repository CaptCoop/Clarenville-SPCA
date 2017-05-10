<?php
/**
 * @file
 * st_mukam_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function st_mukam_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'aboutus' => 'aboutus',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-skill-block' => array(
          'module' => 'views',
          'delta' => 'skill-block',
          'region' => 'content_left5',
          'weight' => '-10',
        ),
        'views-service-block_5' => array(
          'module' => 'views',
          'delta' => 'service-block_5',
          'region' => 'content_right7',
          'weight' => '-10',
        ),
        'views-service-block_service' => array(
          'module' => 'views',
          'delta' => 'service-block_service',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us_2';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'aboutus2' => 'aboutus2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-skill-block_1' => array(
          'module' => 'views',
          'delta' => 'skill-block_1',
          'region' => 'content_left5',
          'weight' => '-9',
        ),
        'views-service-block_6' => array(
          'module' => 'views',
          'delta' => 'service-block_6',
          'region' => 'content_right7',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about_us_2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blogs' => 'blogs',
        'blogs-homepage' => 'blogs-homepage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_slideshow' => array(
          'module' => 'views',
          'delta' => 'blog-block_slideshow',
          'region' => 'content_top_2',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        //'views-categories-block_2' => array(
        //  'module' => 'views',
        //  'delta' => 'categories-block_2',
        //  'region' => 'sidebar_second',
        //  'weight' => '-9',
        //),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        //'views-tags-block' => array(
        //  'module' => 'views',
        //  'delta' => 'tags-block',
        //  'region' => 'sidebar_second',
        //  'weight' => '-7',
        //),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  //t('blogs');
  //$export['blog'] = $context;
  //
  //$context = new stdClass();
  //$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  //$context->api_version = 3;
  //$context->name = 'blog';
  //$context->description = '';
  //$context->tag = 'blog';
  //$context->conditions = array(
  //  'path' => array(
  //    'values' => array(
  //      'blog' => 'blog',
  //    ),
  //  ),
  //);
  //$context->reactions = array(
  //  'block' => array(
  //    'blocks' => array(
  //      'search-form' => array(
  //        'module' => 'search',
  //        'delta' => 'form',
  //        'region' => 'sidebar_second',
  //        'weight' => '-10',
  //      ),
  //      //'views-categories-block_2' => array(
  //      //  'module' => 'views',
  //      //  'delta' => 'categories-block_2',
  //      //  'region' => 'sidebar_second',
  //      //  'weight' => '-9',
  //      //),
  //      'views-blog-block_2' => array(
  //        'module' => 'views',
  //        'delta' => 'blog-block_2',
  //        'region' => 'sidebar_second',
  //        'weight' => '-8',
  //      ),
  //      //'views-tags-block' => array(
  //      //  'module' => 'views',
  //      //  'delta' => 'tags-block',
  //      //  'region' => 'sidebar_second',
  //      //  'weight' => '-7',
  //      //),
  //      //'block-6' => array(
  //      //  'module' => 'block',
  //      //  'delta' => '6',
  //      //  'region' => 'sidebar_second',
  //      //  'weight' => '-6',
  //      //),
  //      //'simplenews-10' => array(
  //      //  'module' => 'simplenews',
  //      //  'delta' => '10',
  //      //  'region' => 'sidebar_second',
  //      //  'weight' => '-5',
  //      //),
  //    ),
  //  ),
  //);
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog-right-sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog-right-sidebar' => 'blog-right-sidebar',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        //'views-tags-block' => array(
        //  'module' => 'views',
        //  'delta' => 'tags-block',
        //  'region' => 'sidebar_second',
        //  'weight' => '-7',
        //),
        //'block-6' => array(
        //  'module' => 'block',
        //  'delta' => '6',
        //  'region' => 'sidebar_second',
        //  'weight' => '-6',
        //),
        //'simplenews-10' => array(
        //  'module' => 'simplenews',
        //  'delta' => '10',
        //  'region' => 'sidebar_second',
        //  'weight' => '-5',
        //),
      ),
    ),
  );
  
  
  $context->condition_mode = 0;

  
  
  
  
  
  
  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog'] = $context;
  
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blogs';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blogs' => 'blogs',
      ),
    ),
  );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-10' => array(//thrift store volenteers
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  
  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blogs'] = $context;
  
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blogs';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blogs' => 'blogs',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
    $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-10' => array(//thrift store volenteers
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  
  
  $context->condition_mode = 0;
  
  
  
  
  
  
  
  
  
  
  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog-bbb'] = $context;
  
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog-front';
  $context->description = 'Everything happening at the shelter starts here!';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-front' => 'blog-front',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-10' => array(//thrift store volenteers
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = 'Everything happening at the shelter starts here!';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog-front' => 'blog-front',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        //'views-categories-block_2' => array(
        //  'module' => 'views',
        //  'delta' => 'categories-block_2',
        //  'region' => 'sidebar_second',
        //  'weight' => '-9',
        //),
        'block-10' => array(//thrift store volenteers
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  
  
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['recent-news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent-news';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-categories/recent-news' => 'blog-categories/recent-news',
        'recent-news/*' => 'recent-news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['recent-news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recent-news' => 'recent-news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  
  
    $context->condition_mode = 0;

    
    
    // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['fundraising'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fundraising';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-categories/fundraising' => 'blog-categories/fundraising',
        'fundraising/*' => 'fundraising/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['fundraising-bbb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fundraising' => 'fundraising',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['thrift-store'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thrift-store';
  $context->description = 'description here';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-categories/thrift-store' => 'blog-categories/thrift-store',
        'thrift-store/*' => 'thrift-store/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(//recent posts
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-10' => array(//thrift store volenteers
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'addtoany' => array(//social
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['thrift-store-bbb'] = $context;
  
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        //'views-categories-block_2' => array(
        //  'module' => 'views',
        //  'delta' => 'categories-block_2',
        //  'region' => 'sidebar_second',
        //  'weight' => '-9',
        //),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-10' => array(//thrift store volenteers
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  
  
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['spca-merchandise'] = $context;//$export['blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spca-merchandise';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-categories/spca-merchandise' => 'blog-categories/spca-merchandise',
        'spca-merchandise/*' => 'spca-merchandise/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  //t('blogs');
  //$export['spca-merchandise'] = $context;
  //
  //$context = new stdClass();
  //$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  //$context->api_version = 3;
  //$context->name = 'blog_detail';
  //$context->description = '';
  //$context->tag = 'blogs';
  //$context->conditions = array(
  //  'node' => array(
  //    'values' => array(
  //      'spca-merchandise' => 'spca-merchandise',
  //    ),
  //    'options' => array(
  //      'node_form' => '1',
  //    ),
  //  ),
  //);
  //$context->reactions = array(
  //  'block' => array(
  //    'blocks' => array(
  //      'search-form' => array(
  //        'module' => 'search',
  //        'delta' => 'form',
  //        'region' => 'sidebar_second',
  //        'weight' => '-10',
  //      ),
  //      'views-categories-block_2' => array(
  //        'module' => 'views',
  //        'delta' => 'categories-block_2',
  //        'region' => 'sidebar_second',
  //        'weight' => '-9',
  //      ),
  //      'views-blog-block_2' => array(
  //        'module' => 'views',
  //        'delta' => 'blog-block_2',
  //        'region' => 'sidebar_second',
  //        'weight' => '-8',
  //      ),
  //      'block-6' => array(
  //        'module' => 'block',
  //        'delta' => '6',
  //        'region' => 'sidebar_second',
  //        'weight' => '-6',
  //      ),
  //    ),
  //  ),
  //);
  
  
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['second-chance-stories'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'second-chance-stories';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-categories/second-chance-stories' => 'blog-categories/second-chance-stories',
        'second-chance-stories/*' => 'second-chance-stories/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['second-chance-stories-bbb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  
  
  
  
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_fullwidth';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-fullwidth' => 'blog-fullwidth',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_slideshow' => array(
          'module' => 'views',
          'delta' => 'blog-block_slideshow',
          'region' => 'content_top_2',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog_fullwidth'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_left_sidebar';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-left-sidebar' => 'blog-left-sidebar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-tags-block' => array(
          'module' => 'views',
          'delta' => 'tags-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog_left_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'catalog';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'catalog' => 'catalog',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-client-block' => array(
          'module' => 'views',
          'delta' => 'client-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_4' => array(
          'module' => 'views',
          'delta' => 'categories-block_4',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-60ee814145657eab1441f678c7dd5a9d' => array(
          'module' => 'views',
          'delta' => '60ee814145657eab1441f678c7dd5a9d',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['catalog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact-forms';
  $context->description = '';
  $context->tag = 'Features_list';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'features/contact-forms' => 'features/contact-forms',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Features_list');
  $export['contact-forms'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faqs';
  $context->description = '';
  $context->tag = 'faqs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'faqs' => 'faqs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'content',
          'weight' => '33',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-tags-block' => array(
          'module' => 'views',
          'delta' => 'tags-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('faqs');
  $export['faqs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faqs2';
  $context->description = '';
  $context->tag = 'faqs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'faqs2' => 'faqs2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('faqs');
  $export['faqs2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'features';
  $context->description = '';
  $context->tag = 'Features_list';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'features' => 'features',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'snappy_common-features_list' => array(
          'module' => 'snappy_common',
          'delta' => 'features_list',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Features_list');
  $export['features'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'features_faqs';
  $context->description = '';
  $context->tag = 'Features_list';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'features/faqs' => 'features/faqs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-faqs-block_1' => array(
          'module' => 'views',
          'delta' => 'faqs-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Features_list');
  $export['features_faqs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front1';
  $context->description = '';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'home2' => 'home2',
        'home5' => 'home5',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'content_left',
          'weight' => '-10',
        ),
        'views-client_say-block' => array(
          'module' => 'views',
          'delta' => 'client_say-block',
          'region' => 'content_right',
          'weight' => '-10',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'content_right',
          'weight' => '-9',
        ),
        'views-client-block' => array(
          'module' => 'views',
          'delta' => 'client-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  $export['front1'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front3';
  $context->description = '';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'home3' => 'home3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-service-block_5' => array(
          'module' => 'views',
          'delta' => 'service-block_5',
          'region' => 'content_left',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content_right',
          'weight' => '-10',
        ),
        'views-project-block' => array(
          'module' => 'views',
          'delta' => 'project-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'md_slider-parallaxslider' => array(
          'module' => 'md_slider',
          'delta' => 'parallaxslider',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-client_say-block_1' => array(
          'module' => 'views',
          'delta' => 'client_say-block_1',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  $export['front3'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_other';
  $context->description = '';
  $context->tag = 'node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'client' => 'client',
        'client_say' => 'client_say',
        'faqs' => 'faqs',
        'member' => 'member',
        'panel' => 'panel',
        'portfolio' => 'portfolio',
        'service' => 'service',
        'simplenews' => 'simplenews',
        'skill' => 'skill',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'search/node' => 'search/node',
        'search/node/*' => 'search/node/*',//for node/%node
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        //'search-form' => array(
        //  'module' => 'search',
        //  'delta' => 'form',
        //  'region' => 'sidebar_second',
        //  'weight' => '-10',
        //),
        //'views-tags-block' => array(
        //  'module' => 'views',
        //  'delta' => 'tags-block',
        //  'region' => 'sidebar_second',
        //  'weight' => '-9',
        //),
        'views-blog-block_4' => array(
          'module' => 'views',
          'delta' => 'blog-block_4',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-potw_sidebar-potw_sidebar' => array(
          'module' => 'views',
          'delta' => 'potw_sidebar-potw_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        //'views-pet_of_the_week-right_sidebar' => array(
        //  'module' => 'views',
        //  'delta' => 'pet_of_the_week-right_sidebar',
        //  'region' => 'sidebar_second',
        //  'weight' => '-10',
        //),
        'block-6' => array(//daytime volunteer block
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        //'simplenews-10' => array(
        //  'module' => 'simplenews',
        //  'delta' => '10',
        //  'region' => 'sidebar_second',
        //  'weight' => '-6',
        //),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('node');
  $export['node_other'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'parallax_homepage';
  $context->description = '';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'home-parallax' => 'home-parallax',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'md_slider-top-header-parallax' => array(
          'module' => 'md_slider',
          'delta' => 'top-header-parallax',
          'region' => 'top_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  $export['parallax_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio_wide';
  $context->description = '';
  $context->tag = 'portfolio';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'portfolio-wide-image' => 'portfolio-wide-image',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project-block' => array(
          'module' => 'views',
          'delta' => 'project-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portfolio');
  $export['portfolio_wide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_detail';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-client-block' => array(
          'module' => 'views',
          'delta' => 'client-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_4' => array(
          'module' => 'views',
          'delta' => 'categories-block_4',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-60ee814145657eab1441f678c7dd5a9d' => array(
          'module' => 'views',
          'delta' => '60ee814145657eab1441f678c7dd5a9d',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['product_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shop';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'shop' => 'shop',
        'shop-homepage' => 'shop-homepage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'md_slider-header-shop' => array(
          'module' => 'md_slider',
          'delta' => 'header-shop',
          'region' => 'content_top_2',
          'weight' => '-10',
        ),
        'block-20' => array(
          'module' => 'block',
          'delta' => '20',
          'region' => 'content_top_2',
          'weight' => '-9',
        ),
        'views-shop-block_3' => array(
          'module' => 'views',
          'delta' => 'shop-block_3',
          'region' => 'content_top_2',
          'weight' => '-8',
        ),
        'block-19' => array(
          'module' => 'block',
          'delta' => '19',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-client-block' => array(
          'module' => 'views',
          'delta' => 'client-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_4' => array(
          'module' => 'views',
          'delta' => 'categories-block_4',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-60ee814145657eab1441f678c7dd5a9d' => array(
          'module' => 'views',
          'delta' => '60ee814145657eab1441f678c7dd5a9d',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['shop'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shop_list';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'shop_list' => 'shop_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-client-block' => array(
          'module' => 'views',
          'delta' => 'client-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'simplenews-10' => array(
          'module' => 'simplenews',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_4' => array(
          'module' => 'views',
          'delta' => 'categories-block_4',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-60ee814145657eab1441f678c7dd5a9d' => array(
          'module' => 'views',
          'delta' => '60ee814145657eab1441f678c7dd5a9d',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['shop_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shortcodes';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'shortcodes' => 'shortcodes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-skill-block_1' => array(
          'module' => 'views',
          'delta' => 'skill-block_1',
          'region' => 'content_left',
          'weight' => '-10',
        ),
        'views-service-block_6' => array(
          'module' => 'views',
          'delta' => 'service-block_6',
          'region' => 'content_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['shortcodes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team-elements';
  $context->description = '';
  $context->tag = 'Features_list';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'features/team-elements' => 'features/team-elements',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-member-block_2' => array(
          'module' => 'views',
          'delta' => 'member-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-member-block_1' => array(
          'module' => 'views',
          'delta' => 'member-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-member-block' => array(
          'module' => 'views',
          'delta' => 'member-block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Features_list');
  $export['team-elements'] = $context;

  return $export;
}

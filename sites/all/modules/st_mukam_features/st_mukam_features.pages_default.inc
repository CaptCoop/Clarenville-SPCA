<?php
/**
 * @file
 * st_mukam_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function st_mukam_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'blog-wrapper blog-style-2',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'blog-item blog-content ',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'comments',
        ),
        'parent' => 'main',
        'class' => 'comments-wrapper',
      ),
      'comments' => array(
        'type' => 'region',
        'title' => 'comments',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'media',
        ),
        'parent' => 'main',
        'class' => 'blog-wrapper blog-style-2 blog_media',
      ),
      'media' => array(
        'type' => 'region',
        'title' => 'Media',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'blog-item blog-thumbnail',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'comments' => NULL,
      'media' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '51f6c31b-2bb7-437c-8724-b40dc1b6c7d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h4',
      'id' => '',
      'class' => 'blog-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $display->content['new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c'] = $pane;
    $display->panels['center'][0] = 'new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $pane = new stdClass();
    $pane->pid = 'new-9256e5cd-66bc-4871-9143-a4fa123a4727';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'meta',
      'title' => '',
      'body' => '<p class="blog-meta">By: %node:author | Tags: %node:field_tags</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9256e5cd-66bc-4871-9143-a4fa123a4727';
    $display->content['new-9256e5cd-66bc-4871-9143-a4fa123a4727'] = $pane;
    $display->panels['center'][1] = 'new-9256e5cd-66bc-4871-9143-a4fa123a4727';
    $pane = new stdClass();
    $pane->pid = 'new-080731b6-3cc1-4393-bfaf-694f9158878d';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '080731b6-3cc1-4393-bfaf-694f9158878d';
    $display->content['new-080731b6-3cc1-4393-bfaf-694f9158878d'] = $pane;
    $display->panels['center'][2] = 'new-080731b6-3cc1-4393-bfaf-694f9158878d';
    $pane = new stdClass();
    $pane->pid = 'new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $pane->panel = 'comments';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<h3 class="comment-title">Comments</h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $display->content['new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45'] = $pane;
    $display->panels['comments'][0] = 'new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $pane = new stdClass();
    $pane->pid = 'new-66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $pane->panel = 'comments';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<h3 id="replytitle" class="reply-title">Leave a <span>Reply</span></h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $display->content['new-66f64f5f-5122-4c19-81e8-c4a6e554ed80'] = $pane;
    $display->panels['comments'][1] = 'new-66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $pane = new stdClass();
    $pane->pid = 'new-3dc7728a-2223-42ee-b49e-e1279b7659aa';
    $pane->panel = 'media';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_multi_image';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:blog:field_media_type',
          'settings' => array(
            'field_media_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'Image',
                ),
              ),
            ),
            'field_media_type_value' => 'Image',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'owlcarousel_formatter',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'image_blog_805x503',
        'settings_group' => 'owlcarousel_settings_blog',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3dc7728a-2223-42ee-b49e-e1279b7659aa';
    $display->content['new-3dc7728a-2223-42ee-b49e-e1279b7659aa'] = $pane;
    $display->panels['media'][0] = 'new-3dc7728a-2223-42ee-b49e-e1279b7659aa';
    $pane = new stdClass();
    $pane->pid = 'new-bb314c23-fab0-427b-b5f0-4b89cf6bc935';
    $pane->panel = 'media';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_youtobe_video';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:blog:field_media_type',
          'settings' => array(
            'field_media_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'Video',
                ),
              ),
            ),
            'field_media_type_value' => 'Video',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'youtube_video',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'youtube_size' => 'responsive',
        'youtube_width' => '',
        'youtube_height' => '',
        'youtube_autoplay' => 0,
        'youtube_showinfo' => 0,
        'youtube_controls' => 0,
        'youtube_autohide' => 0,
        'youtube_iv_load_policy' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb314c23-fab0-427b-b5f0-4b89cf6bc935';
    $display->content['new-bb314c23-fab0-427b-b5f0-4b89cf6bc935'] = $pane;
    $display->panels['media'][1] = 'new-bb314c23-fab0-427b-b5f0-4b89cf6bc935';
    $pane = new stdClass();
    $pane->pid = 'new-0cd38507-01e3-4cae-8364-2744b2f099ab';
    $pane->panel = 'media';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'date_icon',
      'title' => '',
      'body' => '<?php 
$node = node_load(%node:nid);
?>
<div class="blog-date"><p class="day"><?php print(date(\'d\',$node->created));?></p><p class="monthyear"><?php print(date(\'M Y\',$node->created));?></p></div>
<div class="blog-type-logo"><div class="half-round"><i class="mukam-%node:field_media_type"></i></div></div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0cd38507-01e3-4cae-8364-2744b2f099ab';
    $display->content['new-0cd38507-01e3-4cae-8364-2744b2f099ab'] = $pane;
    $display->panels['media'][2] = 'new-0cd38507-01e3-4cae-8364-2744b2f099ab';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Node product',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'content',
        ),
        'parent' => 'main',
        'class' => 'product-single',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Image',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'product-thumbnails',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'product-single-content',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_content',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom_content' => array(
        'type' => 'region',
        'title' => 'Bottom content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'bottom_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4857786c-9872-4890-8ffe-8ea4fcbbff31';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6cecd324-c0b8-452d-97d6-5414ea91a17b';
    $pane->panel = 'bottom_content';
    $pane->type = 'block';
    $pane->subtype = 'views-shop-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6cecd324-c0b8-452d-97d6-5414ea91a17b';
    $display->content['new-6cecd324-c0b8-452d-97d6-5414ea91a17b'] = $pane;
    $display->panels['bottom_content'][0] = 'new-6cecd324-c0b8-452d-97d6-5414ea91a17b';
    $pane = new stdClass();
    $pane->pid = 'new-fc8855d4-8739-4064-b41c-1d5e6c6a6850';
    $pane->panel = 'bottom_content';
    $pane->type = 'block';
    $pane->subtype = 'views-shop-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fc8855d4-8739-4064-b41c-1d5e6c6a6850';
    $display->content['new-fc8855d4-8739-4064-b41c-1d5e6c6a6850'] = $pane;
    $display->panels['bottom_content'][1] = 'new-fc8855d4-8739-4064-b41c-1d5e6c6a6850';
    $pane = new stdClass();
    $pane->pid = 'new-721cf55c-2b25-453b-97f3-d69ee4d3eb96';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:uc_product_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'mukam_product_image_zoomer',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'slide_style' => 'galleryformatter_slide',
        'thumb_style' => 'galleryformatter_thumb',
        'style' => 'Greenarrows',
        'linking_method' => 'show_full_link',
        'link_to_full' => 1,
        'link_to_full_style' => 'project_thumb_320x200',
        'modal' => 'none',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '721cf55c-2b25-453b-97f3-d69ee4d3eb96';
    $display->content['new-721cf55c-2b25-453b-97f3-d69ee4d3eb96'] = $pane;
    $display->panels['center'][0] = 'new-721cf55c-2b25-453b-97f3-d69ee4d3eb96';
    $pane = new stdClass();
    $pane->pid = 'new-8e97f09a-c448-41e9-9a80-d15e2db93265';
    $pane->panel = 'content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e97f09a-c448-41e9-9a80-d15e2db93265';
    $display->content['new-8e97f09a-c448-41e9-9a80-d15e2db93265'] = $pane;
    $display->panels['content'][0] = 'new-8e97f09a-c448-41e9-9a80-d15e2db93265';
    $pane = new stdClass();
    $pane->pid = 'new-9539eedf-2687-4325-bc7b-e19e0940df85';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '600',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9539eedf-2687-4325-bc7b-e19e0940df85';
    $display->content['new-9539eedf-2687-4325-bc7b-e19e0940df85'] = $pane;
    $display->panels['content'][1] = 'new-9539eedf-2687-4325-bc7b-e19e0940df85';
    $pane = new stdClass();
    $pane->pid = 'new-65d84166-da1c-49f7-8280-6c2198239466';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:sell_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '65d84166-da1c-49f7-8280-6c2198239466';
    $display->content['new-65d84166-da1c-49f7-8280-6c2198239466'] = $pane;
    $display->panels['content'][2] = 'new-65d84166-da1c-49f7-8280-6c2198239466';
    $pane = new stdClass();
    $pane->pid = 'new-4b3873f2-ce18-4a4d-be12-458eeaa96da9';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:add_to_cart';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4b3873f2-ce18-4a4d-be12-458eeaa96da9';
    $display->content['new-4b3873f2-ce18-4a4d-be12-458eeaa96da9'] = $pane;
    $display->panels['content'][3] = 'new-4b3873f2-ce18-4a4d-be12-458eeaa96da9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Node Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'blog-wrapper blog-style-2',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'blog-item blog-content ',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'comments',
        ),
        'parent' => 'main',
        'class' => 'comments-wrapper',
      ),
      'comments' => array(
        'type' => 'region',
        'title' => 'comments',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'media',
        ),
        'parent' => 'main',
        'class' => 'blog-wrapper blog-style-2 blog_media',
      ),
      'media' => array(
        'type' => 'region',
        'title' => 'Media',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'blog-item blog-thumbnail',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'comments' => NULL,
      'media' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '51f6c31b-2bb7-437c-8724-b40dc1b6c7d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h4',
      'id' => '',
      'class' => 'blog-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $display->content['new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c'] = $pane;
    $display->panels['center'][0] = 'new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $pane = new stdClass();
    $pane->pid = 'new-9256e5cd-66bc-4871-9143-a4fa123a4727';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'meta',
      'title' => '',
      'body' => '<p class="blog-meta">By: %node:author | Tags: %node:field_tags </p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9256e5cd-66bc-4871-9143-a4fa123a4727';
    $display->content['new-9256e5cd-66bc-4871-9143-a4fa123a4727'] = $pane;
    $display->panels['center'][1] = 'new-9256e5cd-66bc-4871-9143-a4fa123a4727';
    $pane = new stdClass();
    $pane->pid = 'new-080731b6-3cc1-4393-bfaf-694f9158878d';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '080731b6-3cc1-4393-bfaf-694f9158878d';
    $display->content['new-080731b6-3cc1-4393-bfaf-694f9158878d'] = $pane;
    $display->panels['center'][2] = 'new-080731b6-3cc1-4393-bfaf-694f9158878d';
    $pane = new stdClass();
    $pane->pid = 'new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $pane->panel = 'comments';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<h3 class="comment-title">Comments</h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $display->content['new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45'] = $pane;
    $display->panels['comments'][0] = 'new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $pane = new stdClass();
    $pane->pid = 'new-66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $pane->panel = 'comments';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<h3 id="replytitle" class="reply-title">Leave a <span>Reply</span></h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $display->content['new-66f64f5f-5122-4c19-81e8-c4a6e554ed80'] = $pane;
    $display->panels['comments'][1] = 'new-66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $pane = new stdClass();
    $pane->pid = 'new-a627d01c-9418-4d82-9908-7ecf1c711fee';
    $pane->panel = 'media';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'owlcarousel_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'image_blog_805x503',
        'settings_group' => 'owlcarousel_settings_blog',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a627d01c-9418-4d82-9908-7ecf1c711fee';
    $display->content['new-a627d01c-9418-4d82-9908-7ecf1c711fee'] = $pane;
    $display->panels['media'][0] = 'new-a627d01c-9418-4d82-9908-7ecf1c711fee';
    $pane = new stdClass();
    $pane->pid = 'new-0cd38507-01e3-4cae-8364-2744b2f099ab';
    $pane->panel = 'media';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'date_icon',
      'title' => '',
      'body' => '<?php 
$node = node_load(%node:nid);
?>
<div class="blog-date"><p class="day"><?php print(date(\'d\',$node->created));?></p><p class="monthyear"><?php print(date(\'M Y\',$node->created));?></p></div>
<div class="blog-type-logo"><div class="half-round"><i class="mukam-image"></i></div></div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0cd38507-01e3-4cae-8364-2744b2f099ab';
    $display->content['new-0cd38507-01e3-4cae-8364-2744b2f099ab'] = $pane;
    $display->panels['media'][1] = 'new-0cd38507-01e3-4cae-8364-2744b2f099ab';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Node portfolio',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'portfolio' => 'portfolio',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'blog-wrapper blog-style-2',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'blog-item blog-content ',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'comments',
        ),
        'parent' => 'main',
        'class' => 'comments-wrapper',
      ),
      'comments' => array(
        'type' => 'region',
        'title' => 'comments',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'media',
        ),
        'parent' => 'main',
        'class' => 'blog-wrapper blog-style-2 blog_media',
      ),
      'media' => array(
        'type' => 'region',
        'title' => 'Media',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'blog-item blog-thumbnail',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'comments' => NULL,
      'media' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '51f6c31b-2bb7-437c-8724-b40dc1b6c7d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h4',
      'id' => '',
      'class' => 'blog-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $display->content['new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c'] = $pane;
    $display->panels['center'][0] = 'new-7d87b5c2-bc21-4d1e-90c0-9f267e8aad5c';
    $pane = new stdClass();
    $pane->pid = 'new-080731b6-3cc1-4393-bfaf-694f9158878d';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '080731b6-3cc1-4393-bfaf-694f9158878d';
    $display->content['new-080731b6-3cc1-4393-bfaf-694f9158878d'] = $pane;
    $display->panels['center'][1] = 'new-080731b6-3cc1-4393-bfaf-694f9158878d';
    $pane = new stdClass();
    $pane->pid = 'new-c29e40fe-1536-41c1-ad6b-0e668087f413';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'about project',
      'title' => '',
      'body' => '<div class="portfolio-style-1">
<h5 class="about-project">About Project</h5>

<div class="portfolio-meta">
<div class="holder"><i class="mukam-socialman">&nbsp;</i></div>

<div class="project-meta">%node:field_project_client</div>
</div>

<div class="portfolio-meta">
<div class="holder"><i class="mukam-date">&nbsp;</i></div>

<div class="project-meta">%node:field_project_date</div>
</div>

<div class="portfolio-meta">
<div class="holder"><i class="mukam-globe">&nbsp;</i></div>

<div class="project-meta"><a href="%node:field_project_url">%node:field_project_url</a></div>
</div>

<div class="portfolio-meta">
<div class="holder"><i class="mukam-label">&nbsp;</i></div>

<div class="project-meta">%node:field_tags</div>
</div>
</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c29e40fe-1536-41c1-ad6b-0e668087f413';
    $display->content['new-c29e40fe-1536-41c1-ad6b-0e668087f413'] = $pane;
    $display->panels['center'][2] = 'new-c29e40fe-1536-41c1-ad6b-0e668087f413';
    $pane = new stdClass();
    $pane->pid = 'new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $pane->panel = 'comments';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<h3 class="comment-title">Comments</h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $display->content['new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45'] = $pane;
    $display->panels['comments'][0] = 'new-191990a9-2b2f-49b1-a4aa-bfe359e4eb45';
    $pane = new stdClass();
    $pane->pid = 'new-66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $pane->panel = 'comments';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<h3 id="replytitle" class="reply-title">Leave a <span>Reply</span></h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $display->content['new-66f64f5f-5122-4c19-81e8-c4a6e554ed80'] = $pane;
    $display->panels['comments'][1] = 'new-66f64f5f-5122-4c19-81e8-c4a6e554ed80';
    $pane = new stdClass();
    $pane->pid = 'new-a627d01c-9418-4d82-9908-7ecf1c711fee';
    $pane->panel = 'media';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'owlcarousel_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'image_blog_805x503',
        'settings_group' => 'owlcarousel_settings_blog',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a627d01c-9418-4d82-9908-7ecf1c711fee';
    $display->content['new-a627d01c-9418-4d82-9908-7ecf1c711fee'] = $pane;
    $display->panels['media'][0] = 'new-a627d01c-9418-4d82-9908-7ecf1c711fee';
    $pane = new stdClass();
    $pane->pid = 'new-0cd38507-01e3-4cae-8364-2744b2f099ab';
    $pane->panel = 'media';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'date_icon',
      'title' => '',
      'body' => '<?php 
$node = node_load(%node:nid);
?>
<div class="blog-date"><p class="day"><?php print(date(\'d\',$node->created));?></p><p class="monthyear"><?php print(date(\'M Y\',$node->created));?></p></div>
<div class="blog-type-logo"><div class="half-round"><i class="mukam-image"></i></div></div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0cd38507-01e3-4cae-8364-2744b2f099ab';
    $display->content['new-0cd38507-01e3-4cae-8364-2744b2f099ab'] = $pane;
    $display->panels['media'][1] = 'new-0cd38507-01e3-4cae-8364-2744b2f099ab';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Catalog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'catalog' => 'catalog',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '806120d8-1799-41eb-972e-7e9a3ede88b8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0dd7af35-15de-42e0-bc58-dfd7045e7b47';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-shop-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0dd7af35-15de-42e0-bc58-dfd7045e7b47';
    $display->content['new-0dd7af35-15de-42e0-bc58-dfd7045e7b47'] = $pane;
    $display->panels['center'][0] = 'new-0dd7af35-15de-42e0-bc58-dfd7045e7b47';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function st_mukam_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'About Us';
  $page->admin_description = '';
  $page->path = 'aboutus';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About us';
  $display->uuid = '406dce97-7c4e-4e87-ad0f-ec7753e4419b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a12a1c7-bb17-4f18-884b-f156b5060239';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a12a1c7-bb17-4f18-884b-f156b5060239';
    $display->content['new-9a12a1c7-bb17-4f18-884b-f156b5060239'] = $pane;
    $display->panels['center'][0] = 'new-9a12a1c7-bb17-4f18-884b-f156b5060239';
    $pane = new stdClass();
    $pane->pid = 'new-4c2ba4ad-181b-4d83-a7f4-19f734900d6a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<h3 class="container-custom mukam-title">Meet <span>The Team</span></h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c2ba4ad-181b-4d83-a7f4-19f734900d6a';
    $display->content['new-4c2ba4ad-181b-4d83-a7f4-19f734900d6a'] = $pane;
    $display->panels['center'][1] = 'new-4c2ba4ad-181b-4d83-a7f4-19f734900d6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9a12a1c7-bb17-4f18-884b-f156b5060239';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us_2';
  $page->task = 'page';
  $page->admin_title = 'About Us 2';
  $page->admin_description = '';
  $page->path = 'aboutus2';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_us_2_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_us_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About us 2';
  $display->uuid = '406dce97-7c4e-4e87-ad0f-ec7753e4419b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a12a1c7-bb17-4f18-884b-f156b5060239';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a12a1c7-bb17-4f18-884b-f156b5060239';
    $display->content['new-9a12a1c7-bb17-4f18-884b-f156b5060239'] = $pane;
    $display->panels['center'][0] = 'new-9a12a1c7-bb17-4f18-884b-f156b5060239';
    $pane = new stdClass();
    $pane->pid = 'new-b2233ffb-1938-4088-81fd-fb58385560fb';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b2233ffb-1938-4088-81fd-fb58385560fb';
    $display->content['new-b2233ffb-1938-4088-81fd-fb58385560fb'] = $pane;
    $display->panels['center'][1] = 'new-b2233ffb-1938-4088-81fd-fb58385560fb';
    $pane = new stdClass();
    $pane->pid = 'new-4c2ba4ad-181b-4d83-a7f4-19f734900d6a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'parallax-team',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c2ba4ad-181b-4d83-a7f4-19f734900d6a';
    $display->content['new-4c2ba4ad-181b-4d83-a7f4-19f734900d6a'] = $pane;
    $display->panels['center'][2] = 'new-4c2ba4ad-181b-4d83-a7f4-19f734900d6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9a12a1c7-bb17-4f18-884b-f156b5060239';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us_2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'carousel_sliders';
  $page->task = 'page';
  $page->admin_title = 'carousel sliders';
  $page->admin_description = '';
  $page->path = 'carousel-sliders';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_carousel_sliders_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'carousel_sliders';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_left_7',
          1 => 'content_right_5',
        ),
        'parent' => 'main',
        'class' => 'container container-custom',
      ),
      'content_left_7' => array(
        'type' => 'region',
        'title' => 'content left 7',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-7 col-md-custom',
      ),
      'content_right_5' => array(
        'type' => 'region',
        'title' => 'content right 5',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-5 col-md-custom',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_left_5',
          1 => 'content_right_7',
        ),
        'parent' => 'main',
        'class' => 'container container-custom',
      ),
      'content_left_5' => array(
        'type' => 'region',
        'title' => 'content left 5',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'col-md-5 col-md-custom',
      ),
      'content_right_7' => array(
        'type' => 'region',
        'title' => 'content right 7',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'col-md-7 col-md-custom',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_left_7' => NULL,
      'content_right_5' => NULL,
      'content_left_5' => NULL,
      'content_right_7' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Carousel Sliders';
  $display->uuid = 'd88058fa-29e3-4a57-8b03-57aba3fcf991';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-220a00c7-7b58-40f6-a0df-8d610de98194';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-project-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '220a00c7-7b58-40f6-a0df-8d610de98194';
    $display->content['new-220a00c7-7b58-40f6-a0df-8d610de98194'] = $pane;
    $display->panels['center'][0] = 'new-220a00c7-7b58-40f6-a0df-8d610de98194';
    $pane = new stdClass();
    $pane->pid = 'new-a7f6c4cb-29f5-429c-b78b-c4ed224dea2c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-shop-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a7f6c4cb-29f5-429c-b78b-c4ed224dea2c';
    $display->content['new-a7f6c4cb-29f5-429c-b78b-c4ed224dea2c'] = $pane;
    $display->panels['center'][1] = 'new-a7f6c4cb-29f5-429c-b78b-c4ed224dea2c';
    $pane = new stdClass();
    $pane->pid = 'new-7f593fc3-2692-462b-b7a1-e2becc9929d8';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-client-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7f593fc3-2692-462b-b7a1-e2becc9929d8';
    $display->content['new-7f593fc3-2692-462b-b7a1-e2becc9929d8'] = $pane;
    $display->panels['center'][2] = 'new-7f593fc3-2692-462b-b7a1-e2becc9929d8';
    $pane = new stdClass();
    $pane->pid = 'new-3cecbb76-b827-4614-afe3-aea6af37fad5';
    $pane->panel = 'content_left_5';
    $pane->type = 'block';
    $pane->subtype = 'block-21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cecbb76-b827-4614-afe3-aea6af37fad5';
    $display->content['new-3cecbb76-b827-4614-afe3-aea6af37fad5'] = $pane;
    $display->panels['content_left_5'][0] = 'new-3cecbb76-b827-4614-afe3-aea6af37fad5';
    $pane = new stdClass();
    $pane->pid = 'new-339afe30-46d6-460e-866e-2f08086e1c3f';
    $pane->panel = 'content_left_7';
    $pane->type = 'block';
    $pane->subtype = 'views-shop-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '339afe30-46d6-460e-866e-2f08086e1c3f';
    $display->content['new-339afe30-46d6-460e-866e-2f08086e1c3f'] = $pane;
    $display->panels['content_left_7'][0] = 'new-339afe30-46d6-460e-866e-2f08086e1c3f';
    $pane = new stdClass();
    $pane->pid = 'new-7c73fc2d-e8dd-4050-a5d5-d18d30705d75';
    $pane->panel = 'content_right_5';
    $pane->type = 'block';
    $pane->subtype = 'block-21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c73fc2d-e8dd-4050-a5d5-d18d30705d75';
    $display->content['new-7c73fc2d-e8dd-4050-a5d5-d18d30705d75'] = $pane;
    $display->panels['content_right_5'][0] = 'new-7c73fc2d-e8dd-4050-a5d5-d18d30705d75';
    $pane = new stdClass();
    $pane->pid = 'new-5d5b283a-7362-407a-b213-c1d52a28fc5a';
    $pane->panel = 'content_right_7';
    $pane->type = 'block';
    $pane->subtype = 'views-shop-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5d5b283a-7362-407a-b213-c1d52a28fc5a';
    $display->content['new-5d5b283a-7362-407a-b213-c1d52a28fc5a'] = $pane;
    $display->panels['content_right_7'][0] = 'new-5d5b283a-7362-407a-b213-c1d52a28fc5a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['carousel_sliders'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_1';
  $page->task = 'page';
  $page->admin_title = 'contact 1';
  $page->admin_description = '';
  $page->path = 'contact_one';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_1_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contact_1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_2' => NULL,
      'content_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact Us';
  $display->uuid = '3ccaf9d6-d50a-455f-8864-f8f79eaaace9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d4f69628-21b5-4c14-92e6-123422f3a3e6';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="google-map-canvas fadein scaleInv anim_3"><iframe height="500" src="https://maps.google.com/maps?f=q&amp;source=s_q&amp;hl=tr&amp;geocode=&amp;q=Broadway,+Manhattan,+New+York,+Birle%C5%9Fik+Devletler&amp;aq=1&amp;oq=bro&amp;sll=37.0625,-95.677068&amp;sspn=41.275297,79.013672&amp;t=m&amp;ie=UTF8&amp;hq=&amp;hnear=Broadway,+New+York&amp;z=14&amp;ll=40.720036,-74.001346&amp;output=embed" style="border-width:1px;width:100%;"></iframe></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4f69628-21b5-4c14-92e6-123422f3a3e6';
    $display->content['new-d4f69628-21b5-4c14-92e6-123422f3a3e6'] = $pane;
    $display->panels['center'][0] = 'new-d4f69628-21b5-4c14-92e6-123422f3a3e6';
    $pane = new stdClass();
    $pane->pid = 'new-d6ccd140-86d4-47f5-ade8-f57ac6600449';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd6ccd140-86d4-47f5-ade8-f57ac6600449';
    $display->content['new-d6ccd140-86d4-47f5-ade8-f57ac6600449'] = $pane;
    $display->panels['center'][1] = 'new-d6ccd140-86d4-47f5-ade8-f57ac6600449';
    $pane = new stdClass();
    $pane->pid = 'new-47cdbf79-fa29-4d48-a449-cd7af9a52b59';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-client-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '47cdbf79-fa29-4d48-a449-cd7af9a52b59';
    $display->content['new-47cdbf79-fa29-4d48-a449-cd7af9a52b59'] = $pane;
    $display->panels['center'][2] = 'new-47cdbf79-fa29-4d48-a449-cd7af9a52b59';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_1'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_2';
  $page->task = 'page';
  $page->admin_title = 'contact 2';
  $page->admin_description = '';
  $page->path = 'contact_two';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_2_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contact_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_2' => NULL,
      'content_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact Us 2';
  $display->uuid = '3ccaf9d6-d50a-455f-8864-f8f79eaaace9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d6ccd140-86d4-47f5-ade8-f57ac6600449';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6ccd140-86d4-47f5-ade8-f57ac6600449';
    $display->content['new-d6ccd140-86d4-47f5-ade8-f57ac6600449'] = $pane;
    $display->panels['center'][0] = 'new-d6ccd140-86d4-47f5-ade8-f57ac6600449';
    $pane = new stdClass();
    $pane->pid = 'new-cbdacc7c-e80e-4ef6-b821-27527f762337';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="bg-color contact2">
<div class="container">
<div class="row">
<div class="col-md-12">
<div class="google-map-canvas"><iframe style="border-width:5px;" height="505" src="https://maps.google.com/maps?f=d&amp;source=s_q&amp;hl=tr&amp;geocode=%3BCSwWtH2zi93fFaRWbQIdPtSW-ykb6V36jlnCiTH-9-l79dWSFA&amp;q=Broadway,+Manhattan,+New+York,+Birle%C5%9Fik+Devletler&amp;aq=1&amp;oq=bro&amp;sll=37.0625,-95.677068&amp;sspn=41.275297,79.013672&amp;t=h&amp;ie=UTF8&amp;hq=&amp;hnear=Broadway,+New+York&amp;daddr=Broadway,+New+York,+NY&amp;ll=40.720006,-74.001331&amp;spn=0.032526,0.100422&amp;output=embed" width="1170"></iframe></div>
</div>
</div>
</div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cbdacc7c-e80e-4ef6-b821-27527f762337';
    $display->content['new-cbdacc7c-e80e-4ef6-b821-27527f762337'] = $pane;
    $display->panels['center'][1] = 'new-cbdacc7c-e80e-4ef6-b821-27527f762337';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_1';
  $page->task = 'page';
  $page->admin_title = 'Home 1';
  $page->admin_description = '';
  $page->path = 'home1';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_1_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'right_above' => NULL,
      'center' => NULL,
    ),
    'right_above' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '086ece00-7242-4861-a041-7882c8f1e04b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc1ab844-1d63-48d8-b17d-e61edc38ea03';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-front-banner-header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc1ab844-1d63-48d8-b17d-e61edc38ea03';
    $display->content['new-bc1ab844-1d63-48d8-b17d-e61edc38ea03'] = $pane;
    $display->panels['center'][0] = 'new-bc1ab844-1d63-48d8-b17d-e61edc38ea03';
    $pane = new stdClass();
    $pane->pid = 'new-54b189fc-a9fa-446a-8ed6-b53c6ed07291';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'fadein scaleInv anim_3',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '54b189fc-a9fa-446a-8ed6-b53c6ed07291';
    $display->content['new-54b189fc-a9fa-446a-8ed6-b53c6ed07291'] = $pane;
    $display->panels['center'][1] = 'new-54b189fc-a9fa-446a-8ed6-b53c6ed07291';
    $pane = new stdClass();
    $pane->pid = 'new-fa8d580c-2a37-40e1-b06b-acd0b272eb5d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fa8d580c-2a37-40e1-b06b-acd0b272eb5d';
    $display->content['new-fa8d580c-2a37-40e1-b06b-acd0b272eb5d'] = $pane;
    $display->panels['center'][2] = 'new-fa8d580c-2a37-40e1-b06b-acd0b272eb5d';
    $pane = new stdClass();
    $pane->pid = 'new-bcc22c3a-d077-4bf8-842f-1b2ead68eec4';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-project-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bcc22c3a-d077-4bf8-842f-1b2ead68eec4';
    $display->content['new-bcc22c3a-d077-4bf8-842f-1b2ead68eec4'] = $pane;
    $display->panels['center'][3] = 'new-bcc22c3a-d077-4bf8-842f-1b2ead68eec4';
    $pane = new stdClass();
    $pane->pid = 'new-56678ad4-7b6a-4427-aa2e-0b5ccd3cf5dc';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-parallaxslider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '56678ad4-7b6a-4427-aa2e-0b5ccd3cf5dc';
    $display->content['new-56678ad4-7b6a-4427-aa2e-0b5ccd3cf5dc'] = $pane;
    $display->panels['center'][4] = 'new-56678ad4-7b6a-4427-aa2e-0b5ccd3cf5dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_1'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_2';
  $page->task = 'page';
  $page->admin_title = 'Home 2';
  $page->admin_description = '';
  $page->path = 'home2';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_2_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ada00f26-5f06-480d-ac1a-53d19c3a37a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-143e13cc-ff4b-4326-b477-2fcdab1b5d42';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-front-2-banner-header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '143e13cc-ff4b-4326-b477-2fcdab1b5d42';
    $display->content['new-143e13cc-ff4b-4326-b477-2fcdab1b5d42'] = $pane;
    $display->panels['center'][0] = 'new-143e13cc-ff4b-4326-b477-2fcdab1b5d42';
    $pane = new stdClass();
    $pane->pid = 'new-8e32082f-0518-4ed7-9a28-a9ee9e85848a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e32082f-0518-4ed7-9a28-a9ee9e85848a';
    $display->content['new-8e32082f-0518-4ed7-9a28-a9ee9e85848a'] = $pane;
    $display->panels['center'][1] = 'new-8e32082f-0518-4ed7-9a28-a9ee9e85848a';
    $pane = new stdClass();
    $pane->pid = 'new-c1920665-cbcb-4050-ac99-dc3400aa0f7f';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c1920665-cbcb-4050-ac99-dc3400aa0f7f';
    $display->content['new-c1920665-cbcb-4050-ac99-dc3400aa0f7f'] = $pane;
    $display->panels['center'][2] = 'new-c1920665-cbcb-4050-ac99-dc3400aa0f7f';
    $pane = new stdClass();
    $pane->pid = 'new-3dd36f56-ed95-4a7d-b862-36efbff39f65';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-project-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3dd36f56-ed95-4a7d-b862-36efbff39f65';
    $display->content['new-3dd36f56-ed95-4a7d-b862-36efbff39f65'] = $pane;
    $display->panels['center'][3] = 'new-3dd36f56-ed95-4a7d-b862-36efbff39f65';
    $pane = new stdClass();
    $pane->pid = 'new-d9dba208-6cc2-44d6-932c-0c0ded0eea30';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-22';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd9dba208-6cc2-44d6-932c-0c0ded0eea30';
    $display->content['new-d9dba208-6cc2-44d6-932c-0c0ded0eea30'] = $pane;
    $display->panels['center'][4] = 'new-d9dba208-6cc2-44d6-932c-0c0ded0eea30';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8e32082f-0518-4ed7-9a28-a9ee9e85848a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_2'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_3';
  $page->task = 'page';
  $page->admin_title = 'Home 3';
  $page->admin_description = '';
  $page->path = 'home3';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_3_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_3';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ada00f26-5f06-480d-ac1a-53d19c3a37a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbf043c0-8566-414b-8884-2479fb0164ce';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-md-slider-53f84e121032f';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbf043c0-8566-414b-8884-2479fb0164ce';
    $display->content['new-fbf043c0-8566-414b-8884-2479fb0164ce'] = $pane;
    $display->panels['center'][0] = 'new-fbf043c0-8566-414b-8884-2479fb0164ce';
    $pane = new stdClass();
    $pane->pid = 'new-d1f6b320-0d39-4fc3-a503-2e2ff4cbb4dc';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd1f6b320-0d39-4fc3-a503-2e2ff4cbb4dc';
    $display->content['new-d1f6b320-0d39-4fc3-a503-2e2ff4cbb4dc'] = $pane;
    $display->panels['center'][1] = 'new-d1f6b320-0d39-4fc3-a503-2e2ff4cbb4dc';
    $pane = new stdClass();
    $pane->pid = 'new-7f9dcc3a-9f0f-4b06-a98a-da108c73f052';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7f9dcc3a-9f0f-4b06-a98a-da108c73f052';
    $display->content['new-7f9dcc3a-9f0f-4b06-a98a-da108c73f052'] = $pane;
    $display->panels['center'][2] = 'new-7f9dcc3a-9f0f-4b06-a98a-da108c73f052';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_3'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_5';
  $page->task = 'page';
  $page->admin_title = 'Home 5';
  $page->admin_description = '';
  $page->path = 'home5';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_5_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_5';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ada00f26-5f06-480d-ac1a-53d19c3a37a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2f659de-4cb4-4bce-87f8-c5153b2ad33a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-26';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2f659de-4cb4-4bce-87f8-c5153b2ad33a';
    $display->content['new-b2f659de-4cb4-4bce-87f8-c5153b2ad33a'] = $pane;
    $display->panels['center'][0] = 'new-b2f659de-4cb4-4bce-87f8-c5153b2ad33a';
    $pane = new stdClass();
    $pane->pid = 'new-7f9dcc3a-9f0f-4b06-a98a-da108c73f052';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f9dcc3a-9f0f-4b06-a98a-da108c73f052';
    $display->content['new-7f9dcc3a-9f0f-4b06-a98a-da108c73f052'] = $pane;
    $display->panels['center'][1] = 'new-7f9dcc3a-9f0f-4b06-a98a-da108c73f052';
    $pane = new stdClass();
    $pane->pid = 'new-6a202e14-90cd-44cf-a9fe-e144b4f88992';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a202e14-90cd-44cf-a9fe-e144b4f88992';
    $display->content['new-6a202e14-90cd-44cf-a9fe-e144b4f88992'] = $pane;
    $display->panels['center'][2] = 'new-6a202e14-90cd-44cf-a9fe-e144b4f88992';
    $pane = new stdClass();
    $pane->pid = 'new-f585c311-6c05-4a82-b12b-34d689d996b9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f585c311-6c05-4a82-b12b-34d689d996b9';
    $display->content['new-f585c311-6c05-4a82-b12b-34d689d996b9'] = $pane;
    $display->panels['center'][3] = 'new-f585c311-6c05-4a82-b12b-34d689d996b9';
    $pane = new stdClass();
    $pane->pid = 'new-4e6a3edb-d115-4973-b2e6-82dfcc43fe7e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-22';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4e6a3edb-d115-4973-b2e6-82dfcc43fe7e';
    $display->content['new-4e6a3edb-d115-4973-b2e6-82dfcc43fe7e'] = $pane;
    $display->panels['center'][4] = 'new-4e6a3edb-d115-4973-b2e6-82dfcc43fe7e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_5'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'members';
  $page->task = 'page';
  $page->admin_title = 'members';
  $page->admin_description = '';
  $page->path = 'members';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_members_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'members';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Our Team Members';
  $display->uuid = '058470e5-b017-4157-a21a-19b68ea2e737';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a48cf20e-45b5-4118-ae7e-0cfc710a0040';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a48cf20e-45b5-4118-ae7e-0cfc710a0040';
    $display->content['new-a48cf20e-45b5-4118-ae7e-0cfc710a0040'] = $pane;
    $display->panels['center'][0] = 'new-a48cf20e-45b5-4118-ae7e-0cfc710a0040';
    $pane = new stdClass();
    $pane->pid = 'new-82b30b46-f154-445a-b704-fce0a06449e0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '82b30b46-f154-445a-b704-fce0a06449e0';
    $display->content['new-82b30b46-f154-445a-b704-fce0a06449e0'] = $pane;
    $display->panels['center'][1] = 'new-82b30b46-f154-445a-b704-fce0a06449e0';
    $pane = new stdClass();
    $pane->pid = 'new-d2e883e7-5812-4c08-a4d4-ef29547d0b8d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd2e883e7-5812-4c08-a4d4-ef29547d0b8d';
    $display->content['new-d2e883e7-5812-4c08-a4d4-ef29547d0b8d'] = $pane;
    $display->panels['center'][2] = 'new-d2e883e7-5812-4c08-a4d4-ef29547d0b8d';
    $pane = new stdClass();
    $pane->pid = 'new-8648613e-d801-465c-9080-7bd595f48c47';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'parallax-team',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8648613e-d801-465c-9080-7bd595f48c47';
    $display->content['new-8648613e-d801-465c-9080-7bd595f48c47'] = $pane;
    $display->panels['center'][3] = 'new-8648613e-d801-465c-9080-7bd595f48c47';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a48cf20e-45b5-4118-ae7e-0cfc710a0040';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['members'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'parallax_homepage';
  $page->task = 'page';
  $page->admin_title = 'PARALLAX HOMEPAGE';
  $page->admin_description = '';
  $page->path = 'home-parallax';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_parallax_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'parallax_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_left_7',
          1 => 'content_right_5',
        ),
        'parent' => 'main',
        'class' => 'container container-custom',
      ),
      'content_left_7' => array(
        'type' => 'region',
        'title' => 'Content left 7',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-7 col-md-custom',
      ),
      'content_right_5' => array(
        'type' => 'region',
        'title' => 'Content right 5',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-5 col-md-custom',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_12',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'content_12' => array(
        'type' => 'region',
        'title' => 'Content center 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_left_7_2',
          1 => 'content_right_5_2',
        ),
        'parent' => 'main',
        'class' => 'container container-custom ',
      ),
      'content_left_7_2' => array(
        'type' => 'region',
        'title' => 'content left 7 2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'col-md-7 col-md-custom',
      ),
      'content_right_5_2' => array(
        'type' => 'region',
        'title' => 'content right 5 2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'col-md-5 col-md-custom',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_center_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'content_center_3' => array(
        'type' => 'region',
        'title' => 'content center 3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'right_above' => NULL,
      'center' => NULL,
      'content_left_7' => NULL,
      'content_right_5' => NULL,
      'content_12' => NULL,
      'content_left_7_2' => NULL,
      'content_right_5_2' => NULL,
      'content_center_3' => NULL,
    ),
    'right_above' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '086ece00-7242-4861-a041-7882c8f1e04b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa8d580c-2a37-40e1-b06b-acd0b272eb5d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa8d580c-2a37-40e1-b06b-acd0b272eb5d';
    $display->content['new-fa8d580c-2a37-40e1-b06b-acd0b272eb5d'] = $pane;
    $display->panels['center'][0] = 'new-fa8d580c-2a37-40e1-b06b-acd0b272eb5d';
    $pane = new stdClass();
    $pane->pid = 'new-54b189fc-a9fa-446a-8ed6-b53c6ed07291';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'parallax-client',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '54b189fc-a9fa-446a-8ed6-b53c6ed07291';
    $display->content['new-54b189fc-a9fa-446a-8ed6-b53c6ed07291'] = $pane;
    $display->panels['center'][1] = 'new-54b189fc-a9fa-446a-8ed6-b53c6ed07291';
    $pane = new stdClass();
    $pane->pid = 'new-b816d380-b878-4904-bc39-7ff7f518dd3f';
    $pane->panel = 'content_12';
    $pane->type = 'block';
    $pane->subtype = 'block-25';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b816d380-b878-4904-bc39-7ff7f518dd3f';
    $display->content['new-b816d380-b878-4904-bc39-7ff7f518dd3f'] = $pane;
    $display->panels['content_12'][0] = 'new-b816d380-b878-4904-bc39-7ff7f518dd3f';
    $pane = new stdClass();
    $pane->pid = 'new-ca147cb1-171f-4161-90d6-f64376c2396c';
    $pane->panel = 'content_12';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-parallaxslider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca147cb1-171f-4161-90d6-f64376c2396c';
    $display->content['new-ca147cb1-171f-4161-90d6-f64376c2396c'] = $pane;
    $display->panels['content_12'][1] = 'new-ca147cb1-171f-4161-90d6-f64376c2396c';
    $pane = new stdClass();
    $pane->pid = 'new-6cf2ccec-24ae-4a12-abca-57829afb29c3';
    $pane->panel = 'content_center_3';
    $pane->type = 'block';
    $pane->subtype = 'block-25';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6cf2ccec-24ae-4a12-abca-57829afb29c3';
    $display->content['new-6cf2ccec-24ae-4a12-abca-57829afb29c3'] = $pane;
    $display->panels['content_center_3'][0] = 'new-6cf2ccec-24ae-4a12-abca-57829afb29c3';
    $pane = new stdClass();
    $pane->pid = 'new-cf947b0c-26cf-4ce3-9a37-40b13679c3ce';
    $pane->panel = 'content_center_3';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'parallax-price-tables',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf947b0c-26cf-4ce3-9a37-40b13679c3ce';
    $display->content['new-cf947b0c-26cf-4ce3-9a37-40b13679c3ce'] = $pane;
    $display->panels['content_center_3'][1] = 'new-cf947b0c-26cf-4ce3-9a37-40b13679c3ce';
    $pane = new stdClass();
    $pane->pid = 'new-4985dde2-fdbd-4b7f-8d8b-d8c08e9527a6';
    $pane->panel = 'content_center_3';
    $pane->type = 'block';
    $pane->subtype = 'views-client_say-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4985dde2-fdbd-4b7f-8d8b-d8c08e9527a6';
    $display->content['new-4985dde2-fdbd-4b7f-8d8b-d8c08e9527a6'] = $pane;
    $display->panels['content_center_3'][2] = 'new-4985dde2-fdbd-4b7f-8d8b-d8c08e9527a6';
    $pane = new stdClass();
    $pane->pid = 'new-09ca0f9c-01fe-4fcb-a52b-302ceaa79f0c';
    $pane->panel = 'content_left_7';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09ca0f9c-01fe-4fcb-a52b-302ceaa79f0c';
    $display->content['new-09ca0f9c-01fe-4fcb-a52b-302ceaa79f0c'] = $pane;
    $display->panels['content_left_7'][0] = 'new-09ca0f9c-01fe-4fcb-a52b-302ceaa79f0c';
    $pane = new stdClass();
    $pane->pid = 'new-5fa556d0-5744-422d-ba83-5310fb6cead1';
    $pane->panel = 'content_left_7_2';
    $pane->type = 'block';
    $pane->subtype = 'views-news-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5fa556d0-5744-422d-ba83-5310fb6cead1';
    $display->content['new-5fa556d0-5744-422d-ba83-5310fb6cead1'] = $pane;
    $display->panels['content_left_7_2'][0] = 'new-5fa556d0-5744-422d-ba83-5310fb6cead1';
    $pane = new stdClass();
    $pane->pid = 'new-7009a398-542c-4bf1-a67c-c3a5f979a64b';
    $pane->panel = 'content_right_5';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7009a398-542c-4bf1-a67c-c3a5f979a64b';
    $display->content['new-7009a398-542c-4bf1-a67c-c3a5f979a64b'] = $pane;
    $display->panels['content_right_5'][0] = 'new-7009a398-542c-4bf1-a67c-c3a5f979a64b';
    $pane = new stdClass();
    $pane->pid = 'new-1125dafe-b58b-44b3-a7a8-61a391c1b1e0';
    $pane->panel = 'content_right_5_2';
    $pane->type = 'block';
    $pane->subtype = 'views-client_say-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1125dafe-b58b-44b3-a7a8-61a391c1b1e0';
    $display->content['new-1125dafe-b58b-44b3-a7a8-61a391c1b1e0'] = $pane;
    $display->panels['content_right_5_2'][0] = 'new-1125dafe-b58b-44b3-a7a8-61a391c1b1e0';
    $pane = new stdClass();
    $pane->pid = 'new-7d0dd25e-16d2-47fb-b8a1-c7bffc5bab51';
    $pane->panel = 'content_right_5_2';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d0dd25e-16d2-47fb-b8a1-c7bffc5bab51';
    $display->content['new-7d0dd25e-16d2-47fb-b8a1-c7bffc5bab51'] = $pane;
    $display->panels['content_right_5_2'][1] = 'new-7d0dd25e-16d2-47fb-b8a1-c7bffc5bab51';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['parallax_homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_one';
  $page->task = 'page';
  $page->admin_title = 'Service One';
  $page->admin_description = '';
  $page->path = 'service-one';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_service_one_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'service_one';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => ' bg-color',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_left_6',
          1 => 'content_right_6',
        ),
        'parent' => 'main',
        'class' => 'container container-custom',
      ),
      'content_left_6' => array(
        'type' => 'region',
        'title' => 'content left 6',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-6 col-md-custom',
      ),
      'content_right_6' => array(
        'type' => 'region',
        'title' => 'Content right 6',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-6 col-md-custom',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_left_6' => NULL,
      'content_right_6' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Service One';
  $display->uuid = '96ffb284-b95e-4677-a290-b302a26af8f2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6cc9be9b-b917-4bca-b666-12a1f16ca101';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6cc9be9b-b917-4bca-b666-12a1f16ca101';
    $display->content['new-6cc9be9b-b917-4bca-b666-12a1f16ca101'] = $pane;
    $display->panels['center'][0] = 'new-6cc9be9b-b917-4bca-b666-12a1f16ca101';
    $pane = new stdClass();
    $pane->pid = 'new-5cdb0448-6abb-4459-947a-63b31bae44b1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5cdb0448-6abb-4459-947a-63b31bae44b1';
    $display->content['new-5cdb0448-6abb-4459-947a-63b31bae44b1'] = $pane;
    $display->panels['center'][1] = 'new-5cdb0448-6abb-4459-947a-63b31bae44b1';
    $pane = new stdClass();
    $pane->pid = 'new-1a145a04-fc57-4a81-b91f-9250f186059d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-17';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1a145a04-fc57-4a81-b91f-9250f186059d';
    $display->content['new-1a145a04-fc57-4a81-b91f-9250f186059d'] = $pane;
    $display->panels['center'][2] = 'new-1a145a04-fc57-4a81-b91f-9250f186059d';
    $pane = new stdClass();
    $pane->pid = 'new-0ecea7a7-812f-48fb-9aee-afd062f4d421';
    $pane->panel = 'content_left_6';
    $pane->type = 'block';
    $pane->subtype = 'views-faqs-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'un-bg-color',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ecea7a7-812f-48fb-9aee-afd062f4d421';
    $display->content['new-0ecea7a7-812f-48fb-9aee-afd062f4d421'] = $pane;
    $display->panels['content_left_6'][0] = 'new-0ecea7a7-812f-48fb-9aee-afd062f4d421';
    $pane = new stdClass();
    $pane->pid = 'new-a3d7836d-1d1b-403c-ac82-0022def9225c';
    $pane->panel = 'content_right_6';
    $pane->type = 'block';
    $pane->subtype = 'block-18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3d7836d-1d1b-403c-ac82-0022def9225c';
    $display->content['new-a3d7836d-1d1b-403c-ac82-0022def9225c'] = $pane;
    $display->panels['content_right_6'][0] = 'new-a3d7836d-1d1b-403c-ac82-0022def9225c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_one'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_two';
  $page->task = 'page';
  $page->admin_title = 'Service Two';
  $page->admin_description = '';
  $page->path = 'service-two';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_service_two_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'service_two';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'bg-color',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_left_6',
          1 => 'content_right_6',
        ),
        'parent' => 'main',
        'class' => 'container container-custom',
      ),
      'content_left_6' => array(
        'type' => 'region',
        'title' => 'content left 6',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-6 col-md-custom',
      ),
      'content_right_6' => array(
        'type' => 'region',
        'title' => 'Content right 6',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-md-6 col-md-custom',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_left_6' => NULL,
      'content_right_6' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Service Two';
  $display->uuid = '96ffb284-b95e-4677-a290-b302a26af8f2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97bdc5f6-ef1a-4545-8154-652f15025934';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '97bdc5f6-ef1a-4545-8154-652f15025934';
    $display->content['new-97bdc5f6-ef1a-4545-8154-652f15025934'] = $pane;
    $display->panels['center'][0] = 'new-97bdc5f6-ef1a-4545-8154-652f15025934';
    $pane = new stdClass();
    $pane->pid = 'new-9ce865e9-8dcd-40a9-a6b7-3b15e1b3d119';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-23';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9ce865e9-8dcd-40a9-a6b7-3b15e1b3d119';
    $display->content['new-9ce865e9-8dcd-40a9-a6b7-3b15e1b3d119'] = $pane;
    $display->panels['center'][1] = 'new-9ce865e9-8dcd-40a9-a6b7-3b15e1b3d119';
    $pane = new stdClass();
    $pane->pid = 'new-d43112ed-6c12-4bee-8257-d8330d6374b4';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bg-color',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd43112ed-6c12-4bee-8257-d8330d6374b4';
    $display->content['new-d43112ed-6c12-4bee-8257-d8330d6374b4'] = $pane;
    $display->panels['center'][2] = 'new-d43112ed-6c12-4bee-8257-d8330d6374b4';
    $pane = new stdClass();
    $pane->pid = 'new-d0f7910e-a64f-4c2c-b7fd-08a35c5aef81';
    $pane->panel = 'content_left_6';
    $pane->type = 'block';
    $pane->subtype = 'block-18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0f7910e-a64f-4c2c-b7fd-08a35c5aef81';
    $display->content['new-d0f7910e-a64f-4c2c-b7fd-08a35c5aef81'] = $pane;
    $display->panels['content_left_6'][0] = 'new-d0f7910e-a64f-4c2c-b7fd-08a35c5aef81';
    $pane = new stdClass();
    $pane->pid = 'new-cbc03762-c501-4b1c-b2ec-784124604549';
    $pane->panel = 'content_right_6';
    $pane->type = 'block';
    $pane->subtype = 'views-faqs-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'un-bg-color',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbc03762-c501-4b1c-b2ec-784124604549';
    $display->content['new-cbc03762-c501-4b1c-b2ec-784124604549'] = $pane;
    $display->panels['content_right_6'][0] = 'new-cbc03762-c501-4b1c-b2ec-784124604549';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_two'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'shortcodes';
  $page->task = 'page';
  $page->admin_title = 'Shortcodes';
  $page->admin_description = '';
  $page->path = 'shortcodes';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_shortcodes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'shortcodes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Shortcodes';
  $display->uuid = 'dc831ea7-c56c-4ac7-83f5-a99e74e5d36b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f68fd95c-b701-4204-9012-29e9e2d78f60';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f68fd95c-b701-4204-9012-29e9e2d78f60';
    $display->content['new-f68fd95c-b701-4204-9012-29e9e2d78f60'] = $pane;
    $display->panels['center'][0] = 'new-f68fd95c-b701-4204-9012-29e9e2d78f60';
    $pane = new stdClass();
    $pane->pid = 'new-761fe404-ca81-4460-9d0e-e072cf369e7e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '761fe404-ca81-4460-9d0e-e072cf369e7e';
    $display->content['new-761fe404-ca81-4460-9d0e-e072cf369e7e'] = $pane;
    $display->panels['center'][1] = 'new-761fe404-ca81-4460-9d0e-e072cf369e7e';
    $pane = new stdClass();
    $pane->pid = 'new-df56a7d5-f257-4374-bc29-b14dcee17bd1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df56a7d5-f257-4374-bc29-b14dcee17bd1';
    $display->content['new-df56a7d5-f257-4374-bc29-b14dcee17bd1'] = $pane;
    $display->panels['center'][2] = 'new-df56a7d5-f257-4374-bc29-b14dcee17bd1';
    $pane = new stdClass();
    $pane->pid = 'new-d0b87f57-3a45-42ce-a9d2-07859987f7d0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-member-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd0b87f57-3a45-42ce-a9d2-07859987f7d0';
    $display->content['new-d0b87f57-3a45-42ce-a9d2-07859987f7d0'] = $pane;
    $display->panels['center'][3] = 'new-d0b87f57-3a45-42ce-a9d2-07859987f7d0';
    $pane = new stdClass();
    $pane->pid = 'new-787a4d37-d617-48bb-90d2-729660336049';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '787a4d37-d617-48bb-90d2-729660336049';
    $display->content['new-787a4d37-d617-48bb-90d2-729660336049'] = $pane;
    $display->panels['center'][4] = 'new-787a4d37-d617-48bb-90d2-729660336049';
    $pane = new stdClass();
    $pane->pid = 'new-167868b5-be57-4bae-bad4-7205d6544ec2';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-faqs-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '167868b5-be57-4bae-bad4-7205d6544ec2';
    $display->content['new-167868b5-be57-4bae-bad4-7205d6544ec2'] = $pane;
    $display->panels['center'][5] = 'new-167868b5-be57-4bae-bad4-7205d6544ec2';
    $pane = new stdClass();
    $pane->pid = 'new-9bbdc99f-75fa-4420-98b0-925cd952a35d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bg-color white',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9bbdc99f-75fa-4420-98b0-925cd952a35d';
    $display->content['new-9bbdc99f-75fa-4420-98b0-925cd952a35d'] = $pane;
    $display->panels['center'][6] = 'new-9bbdc99f-75fa-4420-98b0-925cd952a35d';
    $pane = new stdClass();
    $pane->pid = 'new-543f52eb-5e5d-4868-9ddc-bae9dbf39049';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '543f52eb-5e5d-4868-9ddc-bae9dbf39049';
    $display->content['new-543f52eb-5e5d-4868-9ddc-bae9dbf39049'] = $pane;
    $display->panels['center'][7] = 'new-543f52eb-5e5d-4868-9ddc-bae9dbf39049';
    $pane = new stdClass();
    $pane->pid = 'new-e615b237-0e5d-49aa-9b01-a0ce6dea6b70';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'e615b237-0e5d-49aa-9b01-a0ce6dea6b70';
    $display->content['new-e615b237-0e5d-49aa-9b01-a0ce6dea6b70'] = $pane;
    $display->panels['center'][8] = 'new-e615b237-0e5d-49aa-9b01-a0ce6dea6b70';
    $pane = new stdClass();
    $pane->pid = 'new-8377d617-e123-4018-988a-1374799447d9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '8377d617-e123-4018-988a-1374799447d9';
    $display->content['new-8377d617-e123-4018-988a-1374799447d9'] = $pane;
    $display->panels['center'][9] = 'new-8377d617-e123-4018-988a-1374799447d9';
    $pane = new stdClass();
    $pane->pid = 'new-110ef68a-959b-4029-906c-25471eebfe4f';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-service-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '110ef68a-959b-4029-906c-25471eebfe4f';
    $display->content['new-110ef68a-959b-4029-906c-25471eebfe4f'] = $pane;
    $display->panels['center'][10] = 'new-110ef68a-959b-4029-906c-25471eebfe4f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f68fd95c-b701-4204-9012-29e9e2d78f60';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['shortcodes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tables';
  $page->task = 'page';
  $page->admin_title = 'Tables';
  $page->admin_description = '';
  $page->path = 'pricing-table';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tables_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tables';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Tables';
  $display->uuid = '96ffb284-b95e-4677-a290-b302a26af8f2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94ace3ba-fec7-4f2b-9eab-fc2b3e33721b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94ace3ba-fec7-4f2b-9eab-fc2b3e33721b';
    $display->content['new-94ace3ba-fec7-4f2b-9eab-fc2b3e33721b'] = $pane;
    $display->panels['center'][0] = 'new-94ace3ba-fec7-4f2b-9eab-fc2b3e33721b';
    $pane = new stdClass();
    $pane->pid = 'new-3df07b9a-1bc6-46f9-9f4f-f1b4739243c9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-15';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3df07b9a-1bc6-46f9-9f4f-f1b4739243c9';
    $display->content['new-3df07b9a-1bc6-46f9-9f4f-f1b4739243c9'] = $pane;
    $display->panels['center'][1] = 'new-3df07b9a-1bc6-46f9-9f4f-f1b4739243c9';
    $pane = new stdClass();
    $pane->pid = 'new-6e443358-f167-45ba-8062-75150455f55c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e443358-f167-45ba-8062-75150455f55c';
    $display->content['new-6e443358-f167-45ba-8062-75150455f55c'] = $pane;
    $display->panels['center'][2] = 'new-6e443358-f167-45ba-8062-75150455f55c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-94ace3ba-fec7-4f2b-9eab-fc2b3e33721b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tables'] = $page;

  return $pages;

}

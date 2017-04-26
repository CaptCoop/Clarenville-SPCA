<?php
/**
 * @file
 * st_mukam_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function st_mukam_features_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog categories',
      'machine_name' => 'blog_categories',
      'description' => 'Blog categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'catalog' => array(
      'name' => 'Catalog',
      'machine_name' => 'catalog',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'uc_catalog',
      'weight' => 0,
    ),
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => 'Simplenews newsletter categories.',
      'hierarchy' => 0,
      'module' => 'simplenews',
      'weight' => 0,
    ),
    'portfolio_categories' => array(
      'name' => 'Portfolio categories',
      'machine_name' => 'portfolio_categories',
      'description' => 'Portfolio categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

<?php
/**
 * @file
 * st_mukam_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function st_mukam_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_project|node|portfolio|form';
  $field_group->group_name = 'group_about_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Project',
    'weight' => '8',
    'children' => array(
      0 => 'field_project_client',
      1 => 'field_project_date',
      2 => 'field_tags',
      3 => 'field_project_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-project field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about_project|node|portfolio|form'] = $field_group;

  return $export;
}

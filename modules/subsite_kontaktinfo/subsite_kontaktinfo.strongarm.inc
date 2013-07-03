<?php
/**
 * @file
 * subsite_kontaktinfo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function subsite_kontaktinfo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__kontaktinfo';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__kontaktinfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kontaktinfo';
  $strongarm->value = '0';
  $export['language_content_type_kontaktinfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kontaktinfo';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_kontaktinfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kontaktinfo';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kontaktinfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kontaktinfo';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_kontaktinfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kontaktinfo';
  $strongarm->value = '1';
  $export['node_preview_kontaktinfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kontaktinfo';
  $strongarm->value = 1;
  $export['node_submitted_kontaktinfo'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * subsite_grundindstillinger.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function subsite_grundindstillinger_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'opret_indhold';
  $delta->name = 'Opret indhold';
  $delta->description = '';
  $delta->theme = 'odsherredsub';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_odsherredsub_settings' => array(
      'alpha_toggle_page_title' => 1,
    ),
  );
  $export['opret_indhold'] = $delta;

  return $export;
}

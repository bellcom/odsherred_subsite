<?php
/**
 * @file
 * subsite_grundindstillinger.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function subsite_grundindstillinger_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'unavngiven_profil';
  $linkit_profile->admin_title = 'Unavngiven profil';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'page' => 'page',
        'subsite_nyhed' => 'subsite_nyhed',
        'article' => 0,
        'banner' => 0,
        'kontaktinfo' => 0,
        'selv' => 0,
        'spotboks' => 0,
        'velkomst' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 'document',
        'image' => 0,
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
  );
  $linkit_profile->role_rids = array();
  $linkit_profile->weight = 0;
  $export['unavngiven_profil'] = $linkit_profile;

  return $export;
}

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
        'enabled' => 1,
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
        'banner' => 0,
        'os2web_borger_dk_article' => 0,
        'kontaktinfo' => 0,
        'selv' => 0,
        'spotboks' => 0,
        'velkomst' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 'image',
        'document' => 'document',
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'show_scheme' => 1,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'os2web_taxonomies_tax_comittee' => 0,
        'os2web_taxonomies_tax_editor_tag' => 0,
        'os2web_taxonomies_tax_kle' => 0,
        'os2web_taxonomies_tax_org' => 0,
        'os2web_taxonomies_tax_places' => 0,
        'os2web_taxonomies_tax_politics' => 0,
        'os2web_taxonomies_tax_portal_cat' => 0,
        'os2web_taxonomies_tax_user_pos' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'imce' => array(
      'use_imce' => 0,
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
  $linkit_profile->role_rids = array(
    2 => 1,
  );
  $linkit_profile->weight = 0;
  $export['unavngiven_profil'] = $linkit_profile;

  return $export;
}

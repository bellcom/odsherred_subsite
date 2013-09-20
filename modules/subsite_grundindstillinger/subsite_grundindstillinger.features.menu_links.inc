<?php
/**
 * @file
 * subsite_grundindstillinger.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function subsite_grundindstillinger_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:a-aa-index
  $menu_links['user-menu:a-aa-index'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'a-aa-index',
    'router_path' => 'a-aa-index',
    'link_title' => 'A-Å Indeks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: user-menu:http://www.adgangforalle.dk/
  $menu_links['user-menu:http://www.adgangforalle.dk/'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'http://www.adgangforalle.dk/',
    'router_path' => '',
    'link_title' => 'Læs højt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: user-menu:sitemap
  $menu_links['user-menu:sitemap'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A-Å Indeks');
  t('Læs højt');
  t('Sitemap');


  return $menu_links;
}

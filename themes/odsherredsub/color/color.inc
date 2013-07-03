<?php
// $Id: color.inc,v 1.7 2010/12/14 19:53:14 dries Exp $

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'beta'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'bgmain' => t('Main background (banner area)'),
    'bgsecond' => t('Secondary background (header and footer)'),
    'slogan' => t('Site slogan'),
    'search_button' => t('Search button color'),
    'bgcontent' => t('Content background'),
    'content_header' => t('Content header'),
    'link' => t('Links'),
    'menu_link' => t('Menu links'),
    'menu_link_hover' => t('Menu links hover'),
    'text' => t('Text'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Default colors'),
      'colors' => array(
        'bgmain' => '#0a5080',         //main background color (banner area)
        'bgsecond' => '#f3f1ee',       //secondary background color (header and footer areas)
        'slogan' => '#0a5081',         //site slogan color
        'search_button' => '#0a5082',  //search button color
        'bgcontent' => '#ffffff',      //content background
        'content_header' => '#0a5083', //content headers color
        'link' => '#0a5084',           //links color
        'menu_link' => '#1f1f1f',       //menu link
        'menu_link_hover' => '#1f1f13',//menu link hover color
        'text' => '#272727',           //text color
      ),
    ),
  ),
  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
//     array(
//       'dimension' => array(0,0,39,1704),
//       'direction' => 'vertical',
//       'colors' => array('link', 'link'),
//     ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(
    'bgmain' => array(0,0,36,522),
    'bgsecond' => array (0,4,0,118),
    'search_button' => array(1,0,35,32),
  ),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(
    'images/ods-sub-transp-bg.png' => array(0, 0, 1, 522),
    'images/sog.png' => array(1,0,35,32),
  ),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'images/base.png',
);

<?php
/**
 * @file
 * subsite_spotbokse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function subsite_spotbokse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotbokse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotbokse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotboks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_link_til_side']['id'] = 'field_link_til_side';
  $handler->display->display_options['fields']['field_link_til_side']['table'] = 'field_data_field_link_til_side';
  $handler->display->display_options['fields']['field_link_til_side']['field'] = 'field_link_til_side';
  $handler->display->display_options['fields']['field_link_til_side']['label'] = 'URL';
  $handler->display->display_options['fields']['field_link_til_side']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_til_side']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_til_side']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_til_side']['type'] = 'link_plain';
  /* Felt: Indhold: Link til side */
  $handler->display->display_options['fields']['field_link_til_side_1']['id'] = 'field_link_til_side_1';
  $handler->display->display_options['fields']['field_link_til_side_1']['table'] = 'field_data_field_link_til_side';
  $handler->display->display_options['fields']['field_link_til_side_1']['field'] = 'field_link_til_side';
  $handler->display->display_options['fields']['field_link_til_side_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['field_link_til_side_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_til_side_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_til_side_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_til_side_1']['type'] = 'link_title_plain';
  /* Felt: Indhold: Spotbillede */
  $handler->display->display_options['fields']['field_spotbillede']['id'] = 'field_spotbillede';
  $handler->display->display_options['fields']['field_spotbillede']['table'] = 'field_data_field_spotbillede';
  $handler->display->display_options['fields']['field_spotbillede']['field'] = 'field_spotbillede';
  $handler->display->display_options['fields']['field_spotbillede']['label'] = '';
  $handler->display->display_options['fields']['field_spotbillede']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbillede']['alter']['path'] = '[field_link_til_side] ';
  $handler->display->display_options['fields']['field_spotbillede']['alter']['alt'] = '[field_link_til_side_1]';
  $handler->display->display_options['fields']['field_spotbillede']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spotbillede']['element_class'] = 'billede';
  $handler->display->display_options['fields']['field_spotbillede']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbillede']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbillede']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbillede']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Ekstra tekst */
  $handler->display->display_options['fields']['field_ekstra_tekst']['id'] = 'field_ekstra_tekst';
  $handler->display->display_options['fields']['field_ekstra_tekst']['table'] = 'field_data_field_ekstra_tekst';
  $handler->display->display_options['fields']['field_ekstra_tekst']['field'] = 'field_ekstra_tekst';
  $handler->display->display_options['fields']['field_ekstra_tekst']['label'] = '';
  $handler->display->display_options['fields']['field_ekstra_tekst']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ekstra_tekst']['alter']['text'] = '<span class="titel">[title]</span>
<span class="resten">[field_ekstra_tekst]</span>';
  $handler->display->display_options['fields']['field_ekstra_tekst']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ekstra_tekst']['alter']['path'] = '[field_link_til_side]';
  $handler->display->display_options['fields']['field_ekstra_tekst']['alter']['alt'] = '[field_link_til_side_1]';
  $handler->display->display_options['fields']['field_ekstra_tekst']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ekstra_tekst']['element_class'] = 'ekstratekst';
  $handler->display->display_options['fields']['field_ekstra_tekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ekstra_tekst']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotboks' => 'spotboks',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['spotbokse'] = array(
    t('Master'),
    t('Spotboks'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('URL'),
    t('Titel'),
    t('[field_link_til_side_1]'),
    t('<span class="titel">[title]</span>
<span class="resten">[field_ekstra_tekst]</span>'),
    t('Block'),
  );
  $export['spotbokse'] = $view;

  return $export;
}

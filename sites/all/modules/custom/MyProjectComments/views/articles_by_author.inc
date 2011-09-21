<?php
$view = new view;
$view->name = 'wiki_nodes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Wiki Nodes';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Wiki Nodes';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '9';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['style_options']['fill_single_line'] = 1;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['row_options']['default_field_elements'] = 1;
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['label'] = 'revisions user';
$handler->display->display_options['relationships']['uid']['required'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Created by */
$handler->display->display_options['fields']['authname']['id'] = 'authname';
$handler->display->display_options['fields']['authname']['table'] = 'authmap';
$handler->display->display_options['fields']['authname']['field'] = 'authname';
$handler->display->display_options['fields']['authname']['ui_name'] = 'Created by';
$handler->display->display_options['fields']['authname']['label'] = 'Created by';
$handler->display->display_options['fields']['authname']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['authname']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['authname']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['authname']['alter']['external'] = 0;
$handler->display->display_options['fields']['authname']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['authname']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['authname']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['authname']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['authname']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['authname']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['authname']['alter']['trim'] = 0;
$handler->display->display_options['fields']['authname']['alter']['html'] = 0;
$handler->display->display_options['fields']['authname']['element_label_colon'] = 1;
$handler->display->display_options['fields']['authname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['authname']['hide_empty'] = 0;
$handler->display->display_options['fields']['authname']['empty_zero'] = 0;
$handler->display->display_options['fields']['authname']['hide_alter_empty'] = 0;
/* Field: Revised by */
$handler->display->display_options['fields']['authname_1']['id'] = 'authname_1';
$handler->display->display_options['fields']['authname_1']['table'] = 'authmap';
$handler->display->display_options['fields']['authname_1']['field'] = 'authname';
$handler->display->display_options['fields']['authname_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['authname_1']['ui_name'] = 'Revised by';
$handler->display->display_options['fields']['authname_1']['label'] = 'Revised by';
$handler->display->display_options['fields']['authname_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['authname_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['authname_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['authname_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['authname_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['authname_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['authname_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['authname_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['authname_1']['hide_alter_empty'] = 0;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['body']['alter']['external'] = 0;
$handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['body']['alter']['trim'] = 0;
$handler->display->display_options['fields']['body']['alter']['html'] = 0;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = 1;
$handler->display->display_options['fields']['body']['hide_empty'] = 0;
$handler->display->display_options['fields']['body']['empty_zero'] = 0;
$handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '300',
);
$handler->display->display_options['fields']['body']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Page:Wiki Nodes */
$handler = $view->new_display('page', 'Page:Wiki Nodes', 'page');
$handler->display->display_options['path'] = 'wiki-nodes';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Wiki Nodes';
$handler->display->display_options['menu']['weight'] = '0';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

$views[$view->name] = $view;
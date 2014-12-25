<?php
/**
 * @file
 * slider_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slider_content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slider_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'slider_show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a class="btn carousel-thumbnails" data-toggle="modal" data-target="#carousel-thumbs-modal">
      Thumbnails
    </a>
        <div class="btn-group btn-group-sm carousel-top-arrows">
      <a class="btn btn-primary ga-slide-prev" href="#myCarousel" data-slide="prev">‹</a>
      <a class="btn btn-primary ga-slide-next" href="#myCarousel" data-slide="next">›</a>
    </div>';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'slider_show:panel_pane_2';
  /* Relationship: Content: Slider (field_slider) */
  $handler->display->display_options['relationships']['field_slider_value']['id'] = 'field_slider_value';
  $handler->display->display_options['relationships']['field_slider_value']['table'] = 'field_data_field_slider';
  $handler->display->display_options['relationships']['field_slider_value']['field'] = 'field_slider_value';
  $handler->display->display_options['relationships']['field_slider_value']['delta'] = '-1';
  /* Field: Field collection item: Img */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Body */
  $handler->display->display_options['fields']['field_body_slider']['id'] = 'field_body_slider';
  $handler->display->display_options['fields']['field_body_slider']['table'] = 'field_data_field_body_slider';
  $handler->display->display_options['fields']['field_body_slider']['field'] = 'field_body_slider';
  $handler->display->display_options['fields']['field_body_slider']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_body_slider']['label'] = '';
  $handler->display->display_options['fields']['field_body_slider']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_body_slider']['element_class'] = 'carousel-caption-relative';
  $handler->display->display_options['fields']['field_body_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body_slider']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slider_item' => 'slider_item',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a class="btn carousel-thumbnails" data-toggle="modal" data-target="#carousel-thumbs-modal" href="#carousel-thumbs-modal">
      Thumbnails
    </a>
        <div class="btn-group btn-group-sm carousel-top-arrows">
      <a class="btn btn-primary ga-slide-prev" href="#myCarousel" data-slide="prev">‹</a>
      <a class="btn btn-primary ga-slide-next" href="#myCarousel" data-slide="next">›</a>
    </div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'slider_show:panel_pane_2';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Img */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['slider_show'] = $view;

  return $export;
}

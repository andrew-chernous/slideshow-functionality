<?php
/**
 * @file
 * slider_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slider_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slider_content_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slider_content_types_node_info() {
  $items = array(
    'slider_item' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

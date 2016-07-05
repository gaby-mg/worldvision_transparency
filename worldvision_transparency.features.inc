<?php
/**
 * @file
 * worldvision_transparency.features.inc
 */

/**
 * Implements hook_views_api().
 */
function worldvision_transparency_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function worldvision_transparency_node_info() {
  $items = array(
    'wv_transparency_fact' => array(
      'name' => t('Transparency Fact'),
      'base' => 'node_content',
      'description' => t('Use <em>transparency facts</em> for the items on the <strong>Transparency Slider</strong>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

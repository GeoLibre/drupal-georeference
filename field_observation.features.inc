<?php
/**
 * @file
 * field_observation.features.inc
 */

/**
 * Implements hook_node_info().
 */
function field_observation_node_info() {
  $items = array(
    'observation' => array(
      'name' => t('Field Observation'),
      'base' => 'node_content',
      'description' => t('Add information about a place in time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * hot_bs_carousel.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function hot_bs_carousel_eck_bundle_info() {
  $items = array(
    'hot_bs_carousel_hot_bs_carousel' => array(
      'machine_name' => 'hot_bs_carousel_hot_bs_carousel',
      'entity_type' => 'hot_bs_carousel',
      'name' => 'hot_bs_carousel',
      'label' => 'HotBootstrapCarousel!',
    ),
  );
  return $items;
}

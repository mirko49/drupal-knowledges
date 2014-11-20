<?php

/**
 * Implements hook_views_data().
 */
function mycustomfield_views_data() {

  $data = array();
  $data['node']['my_custom_field'] = array(
    'title' => t('Mymodule Custom field'),
    'help' => t('Provides a field with some custom code in php.'),
    'field' => array(
      'handler' => 'mycustomfield_handler_custom_field',
    ),
  );
  return $data;
}

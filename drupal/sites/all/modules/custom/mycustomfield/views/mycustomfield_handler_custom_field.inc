<?php

/**
 * @file
 * Definition of mycustomfield_handler_custom_field
 */

/**
 * Provides a custom views field.
 */
class mycustomfield_handler_custom_field extends views_handler_field_custom {

  function option_definition() {
    $options = parent::option_definition();
    $options['my_option'] = array('default' => '');
    return $options;
  }


  /**
   * Default options form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['my_option'] = array(
      '#type' => 'textfield',
      '#title' => t('Added text'),
      '#default_value' => $this->options['my_option'],
      '#description' => t('An option for mymodule custom.'),
    );
  }


  function render($values) {
    $links = "You added : " . $this->options['my_option'];
    $output = $links;
    return $output;
  }
}

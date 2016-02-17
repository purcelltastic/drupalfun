<?php

/*
 * Systems settings form for blacklisting passwords.
 */
function demo_falter_passwords_form($form, &$form_state) {
  $form['demo_falter_badpasswords'] = array(
    '#type' => 'textfield',
    '#title' => t('Bad Passwords'),
    '#default_value' => variable_get('demo_falter_badpasswords'),
    '#description'=> t('Enter a list of "Bad Passwords" separated by commas. If a user tries to enter one of these passwords, either on account creatin or when editing their account, the form will display an error message.'),
  );

  return(system_settings_form($form));
}

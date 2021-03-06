<?php

function form_fun_tree($form, &$form_state) {
  $form = array();

  $form['#tree'] = TRUE;

  $form['home'] = array(
    '#type' => 'fieldset',
    '#title'=> t('Home Address'),
  );
  $form['home']['street'] = array(
    '#type'=> 'textfield',
    '#title' => t('Street Address'),
  );
  $form['home']['city'] = array(
    '#type'=> 'textfield',
    '#title' => t('City'),
  );

  $form['work'] = array(
    '#type' => 'fieldset',
    '#title'=> t('Work Address'),
  );
  $form['work']['street'] = array(
    '#type'=> 'textfield',
    '#title' => t('Street Address'),
  );
  $form['work']['city'] = array(
    '#type'=> 'textfield',
    '#title' => t('City'),
  );

  $form['submit'] = array(
     '#type' => 'submit',
     '#value' => t('Submit'),
  );

  return $form;
}

function form_fun_tree_validate($form, &$form_state) {
  dsm($form_state);
}

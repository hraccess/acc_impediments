<?php
/**
 * @file
 * acc_impediments.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_impediments_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'impediments';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard/factsheet-impediments-entry' => 'dashboard/factsheet-impediments-entry',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-91fc51277a38e44936ed22b162ff64ef' => array(
          'module' => 'views',
          'delta' => '91fc51277a38e44936ed22b162ff64ef',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-c41a848174417426422f963fdda81a74' => array(
          'module' => 'views',
          'delta' => 'c41a848174417426422f963fdda81a74',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-becf862507558f28646bfd62393de8d5' => array(
          'module' => 'views',
          'delta' => 'becf862507558f28646bfd62393de8d5',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-f8a6c432535c4aac4725ef285e65a743' => array(
          'module' => 'views',
          'delta' => 'f8a6c432535c4aac4725ef285e65a743',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-7a501f49c6f4c53582c9bdd91522be59' => array(
          'module' => 'views',
          'delta' => '7a501f49c6f4c53582c9bdd91522be59',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-741ac8f18b4e03a52de0bb0df4cc25ce' => array(
          'module' => 'views',
          'delta' => '741ac8f18b4e03a52de0bb0df4cc25ce',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-63bde3a4ccf3517f5c534fe53121f201' => array(
          'module' => 'views',
          'delta' => '63bde3a4ccf3517f5c534fe53121f201',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-c9d7775e549e246111920c522c087f05' => array(
          'module' => 'views',
          'delta' => 'c9d7775e549e246111920c522c087f05',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['impediments'] = $context;

  return $export;
}

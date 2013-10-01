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
  $context->name = 'acc_impediments';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access/dashboard/factsheet-impediments-entry' => 'access/dashboard/factsheet-impediments-entry',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-45d6a939d2d9028483f523a444b262eb' => array(
          'module' => 'views',
          'delta' => '45d6a939d2d9028483f523a444b262eb',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-608198074dc7d04f78b60122afb76021' => array(
          'module' => 'views',
          'delta' => '608198074dc7d04f78b60122afb76021',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-1f1ed61d885b26e0b55537bb0b0a16cf' => array(
          'module' => 'views',
          'delta' => '1f1ed61d885b26e0b55537bb0b0a16cf',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-ec157c4c33252fc9c7df9581f33a3322' => array(
          'module' => 'views',
          'delta' => 'ec157c4c33252fc9c7df9581f33a3322',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-fcd7a37bdfe146422d36642642434c40' => array(
          'module' => 'views',
          'delta' => 'fcd7a37bdfe146422d36642642434c40',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-199f9213d51735002e952a26d595ff96' => array(
          'module' => 'views',
          'delta' => '199f9213d51735002e952a26d595ff96',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-6a73904a7c7d755b8e17d35d2dc8512a' => array(
          'module' => 'views',
          'delta' => '6a73904a7c7d755b8e17d35d2dc8512a',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-e3763ffbafa63de226d6aa97c702ea0a' => array(
          'module' => 'views',
          'delta' => 'e3763ffbafa63de226d6aa97c702ea0a',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['acc_impediments'] = $context;

  return $export;
}

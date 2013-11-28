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
        'views-29db38da9a52596e4234fb460e058b19' => array(
          'module' => 'views',
          'delta' => '29db38da9a52596e4234fb460e058b19',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-d0f82fb657991bf00d7e24aaefd881bf' => array(
          'module' => 'views',
          'delta' => 'd0f82fb657991bf00d7e24aaefd881bf',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-2f4c2e8a8f32365eaabf514773cc729d' => array(
          'module' => 'views',
          'delta' => '2f4c2e8a8f32365eaabf514773cc729d',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-8fadadb3e39d66dc5200d8b1d9e6fbb1' => array(
          'module' => 'views',
          'delta' => '8fadadb3e39d66dc5200d8b1d9e6fbb1',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-7b1f1fe1b194ba8a3438d660d163529c' => array(
          'module' => 'views',
          'delta' => '7b1f1fe1b194ba8a3438d660d163529c',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-760e3e545a6230f68372fa35e56a9b59' => array(
          'module' => 'views',
          'delta' => '760e3e545a6230f68372fa35e56a9b59',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-f80d3ab23980cbaff7292aad41d476f0' => array(
          'module' => 'views',
          'delta' => 'f80d3ab23980cbaff7292aad41d476f0',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-39fc19e3222ecfea2fee6d03a15d0f92' => array(
          'module' => 'views',
          'delta' => '39fc19e3222ecfea2fee6d03a15d0f92',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-f828a275687fb210b5aa01946ad28d24' => array(
          'module' => 'views',
          'delta' => 'f828a275687fb210b5aa01946ad28d24',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-d0cd3445cabfa2c1c9517b3197677bef' => array(
          'module' => 'views',
          'delta' => 'd0cd3445cabfa2c1c9517b3197677bef',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-45154b0e99f56544df68e69d7b8e58e8' => array(
          'module' => 'views',
          'delta' => '45154b0e99f56544df68e69d7b8e58e8',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-eca7ea079544ae87e44f46f3fbc44ef7' => array(
          'module' => 'views',
          'delta' => 'eca7ea079544ae87e44f46f3fbc44ef7',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-afaaeb9b5886659be7aa0572304c128c' => array(
          'module' => 'views',
          'delta' => 'afaaeb9b5886659be7aa0572304c128c',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-026577e2a18902652769c8579b45ba67' => array(
          'module' => 'views',
          'delta' => '026577e2a18902652769c8579b45ba67',
          'region' => 'content',
          'weight' => '3',
        ),
        'global_filter-global_filter_3' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_3',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'bean-filter-reset---incident-date' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---incident-date',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'global_filter-global_filter_6' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'bean-filter-reset---type-of-administr' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---type-of-administr',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['acc_impediments'] = $context;

  return $export;
}

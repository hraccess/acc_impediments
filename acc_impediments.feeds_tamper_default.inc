<?php
/**
 * @file
 * acc_impediments.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function acc_impediments_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_impediments_csv_impoter-clusters-explode';
  $feeds_tamper->importer = 'acc_impediments_csv_impoter';
  $feeds_tamper->source = 'Clusters';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_impediments_csv_impoter-clusters-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_impediments_csv_impoter-impact_text-explode';
  $feeds_tamper->importer = 'acc_impediments_csv_impoter';
  $feeds_tamper->source = 'Impact Text';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_impediments_csv_impoter-impact_text-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_impediments_csv_impoter-impact_text_guid-explode';
  $feeds_tamper->importer = 'acc_impediments_csv_impoter';
  $feeds_tamper->source = 'Impact Text GUID';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_impediments_csv_impoter-impact_text_guid-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_impediments_csv_impoter-submited_to-explode';
  $feeds_tamper->importer = 'acc_impediments_csv_impoter';
  $feeds_tamper->source = 'Submited to';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_impediments_csv_impoter-submited_to-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_impediments_csv_impoter-submited_to_guid-explode';
  $feeds_tamper->importer = 'acc_impediments_csv_impoter';
  $feeds_tamper->source = 'Submited to GUID';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_impediments_csv_impoter-submited_to_guid-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'acc_impediments_csv_impoter-value-explode';
  $feeds_tamper->importer = 'acc_impediments_csv_impoter';
  $feeds_tamper->source = 'Value';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['acc_impediments_csv_impoter-value-explode'] = $feeds_tamper;

  return $export;
}

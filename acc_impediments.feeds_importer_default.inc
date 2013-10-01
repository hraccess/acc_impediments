<?php
/**
 * @file
 * acc_impediments.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function acc_impediments_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'acc_impediments_csv_impoter';
  $feeds_importer->config = array(
    'name' => 'Access Impediments CSV Impoter',
    'description' => 'Import Access Impedimets from CVS file for Access Humanitarian project',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Access Constraint',
            'target' => 'field_access_constraint',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Date of submission',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Type of administrative procedure submitted',
            'target' => 'field_incident_type_impediment:etid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Type of administrative procedure submitted GUID',
            'target' => 'field_incident_type_impediment',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Submited to',
            'target' => 'field_if_denied_delayed_by_whom:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Submited to GUID',
            'target' => 'field_if_denied_delayed_by_whom',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Submited By',
            'target' => 'field_targetted_actor:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Submited By GUID',
            'target' => 'field_targetted_actor',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Nationality of applicant',
            'target' => 'field_nationality_of_applicant',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Submission Status',
            'target' => 'field_request_status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Clusters',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Impact Text',
            'target' => 'field_br_req_into_impact:field_br_req_into_country_impact:label',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Impact Text GUID',
            'target' => 'field_br_req_into_impact:field_br_req_into_country_impact',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Value',
            'target' => 'field_br_req_into_impact:field_value',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'How many days did it take to get answer (positive/negative)?',
            'target' => 'field_days_did_it_took',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'If denied/delayed by whom',
            'target' => 'field_responsible_actor:label',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'If denied/delayed by whom GUID',
            'target' => 'field_responsible_actor',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'br_requirement_into_country',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['acc_impediments_csv_impoter'] = $feeds_importer;

  return $export;
}

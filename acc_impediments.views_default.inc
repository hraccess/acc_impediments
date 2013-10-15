<?php
/**
 * @file
 * acc_impediments.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_impediments_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_impediments_on_entry';
  $view->description = '';
  $view->tag = 'Access';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'XLS Impediments by incident type';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
    52310416 => '52310416',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['id'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['relationships']['field_responsible_actor_target_id']['field'] = 'field_responsible_actor_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Type of administrative procedure submitted (field_incident_type_impediment) */
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['id'] = 'field_incident_type_impediment_target_id';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['field'] = 'field_incident_type_impediment_target_id';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['default_argument_type'] = 'global_filter_field';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_incident_type_impediment_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display:  Impediments on entry into country */
  $handler = $view->new_display('page', ' Impediments on entry into country', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments on entry into country';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['path'] = 'access/impediments';
  $handler->display->display_options['menu']['title'] = 'Impediments on entry';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'views_data_export_burea_into');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments on entry into country';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Export to XLS';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Access Constraint */
  $handler->display->display_options['fields']['field_access_constraint']['id'] = 'field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['table'] = 'field_data_field_access_constraint';
  $handler->display->display_options['fields']['field_access_constraint']['field'] = 'field_access_constraint';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Administrative request submitted by */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Submited by';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Submitted to */
  $handler->display->display_options['fields']['field_if_denied_delayed_by_whom']['id'] = 'field_if_denied_delayed_by_whom';
  $handler->display->display_options['fields']['field_if_denied_delayed_by_whom']['table'] = 'field_data_field_if_denied_delayed_by_whom';
  $handler->display->display_options['fields']['field_if_denied_delayed_by_whom']['field'] = 'field_if_denied_delayed_by_whom';
  $handler->display->display_options['fields']['field_if_denied_delayed_by_whom']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Submission Status */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Impact */
  $handler->display->display_options['fields']['field_br_req_into_impact']['id'] = 'field_br_req_into_impact';
  $handler->display->display_options['fields']['field_br_req_into_impact']['table'] = 'field_data_field_br_req_into_impact';
  $handler->display->display_options['fields']['field_br_req_into_impact']['field'] = 'field_br_req_into_impact';
  $handler->display->display_options['fields']['field_br_req_into_impact']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_br_req_into_impact']['delta_offset'] = '0';
  /* Field: Content: How many days did it take to get answer (positive/negative)? */
  $handler->display->display_options['fields']['field_days_did_it_took']['id'] = 'field_days_did_it_took';
  $handler->display->display_options['fields']['field_days_did_it_took']['table'] = 'field_data_field_days_did_it_took';
  $handler->display->display_options['fields']['field_days_did_it_took']['field'] = 'field_days_did_it_took';
  /* Field: Content: Nationality of applicant */
  $handler->display->display_options['fields']['field_nationality_of_applicant']['id'] = 'field_nationality_of_applicant';
  $handler->display->display_options['fields']['field_nationality_of_applicant']['table'] = 'field_data_field_nationality_of_applicant';
  $handler->display->display_options['fields']['field_nationality_of_applicant']['field'] = 'field_nationality_of_applicant';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/burea_into.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chart Impediments by incident type */
  $handler = $view->new_display('block', 'Chart Impediments by incident type', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments on entry into country by incident type';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_incident_type_impediment' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_incident_type_impediment_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_incident_type_impediment',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['label'] = 'Type of administrative procedure';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['id'] = 'field_incident_type_impediment_1';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Impediments by incident type';

  /* Display: Chart Impediments by Responsible Actor */
  $handler = $view->new_display('block', 'Chart Impediments by Responsible Actor', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments by Responsible Actor';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'pie';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_responsible_actor' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_responsible_actor_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
    'field_organization_type' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_organization_type',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Impediments by Responsible Actor';

  /* Display: Chart Impediments by sectors */
  $handler = $view->new_display('block', 'Chart Impediments by sectors', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments by sectors';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_clusters' => array(
      'enabled' => 0,
    ),
    'field_clusters_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_clusters',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors/Clusters Affected';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters_1']['id'] = 'field_clusters_1';
  $handler->display->display_options['fields']['field_clusters_1']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_clusters_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_clusters_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Impediments by sectors';

  /* Display: Chart Impediments by affected organization */
  $handler = $view->new_display('block', 'Chart Impediments by affected organization', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments by affected organization';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_targetted_actor_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
    'field_organization_type' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_organization_type',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Administrative request submitted by */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'number of incidents';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Org Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Chart Impediments by affected organization';

  /* Display: Impediments by incident type */
  $handler = $view->new_display('block', 'Impediments by incident type', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments on entry into country by incident type';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_incident_type_impediment' => 'field_incident_type_impediment',
    'field_incident_type_impediment_1' => 'field_incident_type_impediment_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_incident_type_impediment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incident_type_impediment_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['label'] = 'Type of administrative procedure';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['id'] = 'field_incident_type_impediment_1';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Impediments by incident type';

  /* Display: XLS Impediments by incident type */
  $handler = $view->new_display('views_data_export', 'XLS Impediments by incident type', 'impediments_by_sub_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Impediments by incident type';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment']['id'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment']['label'] = 'Type of administrative procedure';
  $handler->display->display_options['fields']['field_incident_type_impediment']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type of administrative procedure submitted */
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['id'] = 'field_incident_type_impediment_1';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['table'] = 'field_data_field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['field'] = 'field_incident_type_impediment';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_incident_type_impediment_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'access/dashboard/imp_by_inc_typ.xls';
  $handler->display->display_options['displays'] = array(
    'block_5' => 'block_5',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Impediments by Responsible Actor */
  $handler = $view->new_display('block', 'Impediments by Responsible Actor', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments by Responsible Actor';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_responsible_actor' => 'field_responsible_actor',
    'field_responsible_actor_1' => 'field_responsible_actor_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_responsible_actor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsible_actor_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'OrganizationType';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Impediments by Responsible Actor';

  /* Display: XLS Impediments by Responsible Actor */
  $handler = $view->new_display('views_data_export', 'XLS Impediments by Responsible Actor', 'impediments_by_res_actor');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Impediments by Responsible Actor';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Responsible Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'access/dashboard/imp_by_res_actor.xls';
  $handler->display->display_options['displays'] = array(
    'block_6' => 'block_6',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Impediments by sectors */
  $handler = $view->new_display('block', 'Impediments by sectors', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments by sectors';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sectors' => 'field_sectors',
    'field_sectors_1' => 'field_sectors_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sectors' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sectors_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors/Clusters Affected';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters_1']['id'] = 'field_clusters_1';
  $handler->display->display_options['fields']['field_clusters_1']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_clusters_1']['label'] = 'Sectors/Clusters Affected';
  $handler->display->display_options['fields']['field_clusters_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Impediments by sectors';

  /* Display: XLS Impediments by sectors affected */
  $handler = $view->new_display('views_data_export', 'XLS Impediments by sectors affected', 'impediments_by_sec_afec');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Impediments by sectors affected';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Sectors/Clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters_1']['id'] = 'field_clusters_1';
  $handler->display->display_options['fields']['field_clusters_1']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_clusters_1']['label'] = 'Number of incidents';
  $handler->display->display_options['fields']['field_clusters_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/dashboard/imp_by_sec_aff.xls';
  $handler->display->display_options['displays'] = array(
    'block_7' => 'block_7',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Impediments by affected organization */
  $handler = $view->new_display('block', 'Impediments by affected organization', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impediments by affected organization';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_targetted_actor' => 'field_targetted_actor',
    'field_targetted_actor_1' => 'field_targetted_actor_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_targetted_actor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_targetted_actor_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Administrative request submitted by */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Ogranization';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Administrative request submitted by */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'number of incidents';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Impediments by affected organization';

  /* Display: XLS Impediments by affected org */
  $handler = $view->new_display('views_data_export', 'XLS Impediments by affected org', 'impediments_by_aff_org');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Impediments by affected org';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['relationships']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Administrative request submitted by */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Organizations';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: Content: Administrative request submitted by */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'access/dashboard/imp_by_aff_org.xls';
  $handler->display->display_options['displays'] = array(
    'block_8' => 'block_8',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['acc_impediments_on_entry'] = array(
    t('Master'),
    t('XLS Impediments by incident type'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Taxonomy term entity referenced from field_responsible_actor'),
    t('Title'),
    t('Description'),
    t('Date'),
    t('All'),
    t(' Impediments on entry into country'),
    t('Impediments on entry into country'),
    t('Type of administrative procedure submitted'),
    t('XLS'),
    t('Access Constraint'),
    t('Submited by'),
    t('Submitted to'),
    t('Submission Status'),
    t('If denied/delayed, by whom'),
    t('Clusters'),
    t('Impact'),
    t('How many days did it take to get answer (positive/negative)?'),
    t('Nationality of applicant'),
    t('Chart Impediments by incident type'),
    t('Impediments on entry into country by incident type'),
    t('Type of administrative procedure'),
    t('Number of incidents'),
    t('Chart Impediments by Responsible Actor'),
    t('Impediments by Responsible Actor'),
    t('Org Type'),
    t('Chart Impediments by sectors'),
    t('Impediments by sectors'),
    t('Sectors/Clusters Affected'),
    t('Chart Impediments by affected organization'),
    t('Impediments by affected organization'),
    t('Taxonomy term entity referenced from field_targetted_actor'),
    t('number of incidents'),
    t('Impediments by incident type'),
    t('Number of Incidents'),
    t('OrganizationType'),
    t('XLS Impediments by Responsible Actor'),
    t('Responsible Actor'),
    t('Organization Type'),
    t('XLS Impediments by sectors affected'),
    t('Sectors/Clusters'),
    t('Date Between'),
    t('Affected Ogranization'),
    t('XLS Impediments by affected org'),
    t('Affected Organizations'),
  );
  $export['acc_impediments_on_entry'] = $view;

  return $export;
}

<?php
/**
 * @file
 * slider_content_types.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function slider_content_types_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'slider 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c0b9dc71-0591-44aa-974b-a3eaecae46d3\',
      \'nid\' => \'4\',
      \'type\' => \'slider_item\',
      \'language\' => \'und\',
      \'created\' => \'1419431396\',
      \'changed\' => \'1419521932\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b41fb7d1-0e4a-4dba-8ba9-cc7a778088f3\',
      \'revision_timestamp\' => \'1419521932\',
      \'revision_uid\' => \'1\',
      \'field_slider\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
            \'revision_id\' => \'1\',
          ),
          array(
            \'value\' => \'2\',
            \'revision_id\' => \'2\',
          ),
          array(
            \'value\' => \'3\',
            \'revision_id\' => \'3\',
          ),
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'5\',
          ),
          array(
            \'value\' => \'6\',
            \'revision_id\' => \'6\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'4\',
            \'revision_id\' => \'4\',
            \'name\' => \'node:slider_item:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                8 => 
                stdClass::__set_state(array(
                   \'pid\' => \'8\',
                   \'did\' => \'5\',
                   \'panel\' => \'center\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'slider_show-panel_pane_1\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'context\' => 
                    array (
                      0 => \'panelizer\',
                    ),
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'29901481-bead-40de-a815-c8b473eef445\',
                )),
              ),
               \'panels\' => 
              array (
                \'center\' => 
                array (
                  0 => \'8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'5\',
               \'renderer\' => \'standard\',
               \'layout\' => \'flexible\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'<none>\',
               \'hide_title\' => \'0\',
               \'title_pane\' => \'7\',
               \'uuid\' => \'448f3fff-f890-4f10-80ff-78cb5d9d39ab\',
            )),
          ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1419431396\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_slider\',
          \'langcode\' => \'und\',
          \'uuid\' => \'e2854e54-930d-40d6-bef2-e5b6eeeacf6d\',
        ),
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'2\',
          \'delta\' => 1,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_slider\',
          \'langcode\' => \'und\',
          \'uuid\' => \'a80b484a-010a-496c-9261-ae4fc2192f5f\',
        ),
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'3\',
          \'delta\' => 2,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_slider\',
          \'langcode\' => \'und\',
          \'uuid\' => \'be1f6647-94f5-4a1c-a939-71ebc0794e2e\',
        ),
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'4\',
          \'delta\' => 3,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_slider\',
          \'langcode\' => \'und\',
          \'uuid\' => \'bedcd817-1a13-4814-82d2-f55eda519a7d\',
        ),
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'5\',
          \'delta\' => 4,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_slider\',
          \'langcode\' => \'und\',
          \'uuid\' => \'1de94c2a-3af0-4ecf-a717-d8f02267e003\',
        ),
        array(
          \'type\' => \'field_collection_item\',
          \'id\' => \'6\',
          \'delta\' => 5,
          \'property\' => \'value\',
          \'module\' => \'field_collection\',
          \'field_name\' => \'field_slider\',
          \'langcode\' => \'und\',
          \'uuid\' => \'e254b994-ce8c-48eb-a83d-6784179c5d80\',
        ),
      ),
    ),
)',
);
  return $node_export;
}

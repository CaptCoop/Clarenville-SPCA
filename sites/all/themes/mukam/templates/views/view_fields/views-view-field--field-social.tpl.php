<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<div class="team-social">
<?php
	$collection = $row->field_field_social;
	if(isset($collection)){
	    foreach($collection AS $element){
	          //dprint_r($element);
	        foreach($element AS $collection_item)  {
	        		if (isset($collection_item['value'])) {
	        		  $field_collection = entity_load('field_collection_item', array($collection_item['value']));
		            //dprint_r($field_collection);
		            foreach($field_collection AS $item)  {						                
	            		$link = @$item->field_social_link['und'][0]['value'];
	            		$class = @$item->field_social_awesome_class['und'][0]['value'];	                
		              print  '<a href="'.$link.'"><div class="team-holder"><i class="'.$class.'"></i></div></a>';
		            }
	        		}            
	        }
	    }
	}
?>
</div>
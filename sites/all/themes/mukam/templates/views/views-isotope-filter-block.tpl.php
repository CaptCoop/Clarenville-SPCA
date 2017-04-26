<?php
/**
 * @file views-isotope-filter-block.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div id="isotope-options" class="primary clearfix col-md-12">
  <div class="portfolio-style-1-filter">
    <ul id="filters" class="option-set clearfix" data-option-key="filter">
      <li><a class="selected" data-option-value="*" href="#filter">All</a></li>
      <?php foreach ( $rows as $id => $row ): ?>
        
        <?php 
        // remove characters that cause problems with classes
        // this is also do to the isotope elements
        $dataoption = trim(strip_tags(strtolower($row)));
        $dataoption = str_replace(' ', '-', $dataoption);
        $dataoption = str_replace('/', '-', $dataoption);
        $dataoption = str_replace('&amp;', '', $dataoption); 
        ?>
            
        <li> <span>/</span> <a data-option-value=".<?php print $dataoption; ?>" href="#filter"><?php print trim($row); ?></a></li>

        
      <?php endforeach; ?>
      
    </ul>  
  </div>
</div>




<?php
/**
 * @file views-isotope.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
  <div  class="col-md-12 portfolio-wrapper portfolio-grid">
    <div class="portfolio-style-2">
      <div class="portfolio-2-wrapper" id="isotope-container">
        <div class="grid-sizer"></div>
        <?php $count = 0; ?>
        <?php foreach ( $rows as $id => $row ): ?>
          <?php
          // added for easy multi-color display 
          if ($count == 5) {
            $count = 0;
          }
          $classlist = '';
          $bgstyle = '';
          // pull out isotope-filter class if it exists
          
          if (strstr($row, '<div class="isotope-filter">')) {
            $rowparts = explode('<div class="isotope-filter">', $row);
            $filterclass = explode('</div>', $rowparts[1]);
            
            // check for commas and treat as an array for list of taxonomy terms
            if (strstr($filterclass[0], ',')) {
              $classes = explode(', ', $filterclass[0]);
              foreach ($classes as $class) {
                $class = trim(strip_tags(strtolower($class)));
                $class = str_replace(' ', '-', $class);
                $class = str_replace('/', '-', $class);
                $class = str_replace('&amp;', '', $class);
                $classlist .= ' ' . $class; 
        
              }
            } else {
              //strip divs and normalize naming for just once
              $classlist = trim(strip_tags(strtolower($filterclass[0])));
              $classlist = str_replace(' ', '-', $classlist);
              $classlist = str_replace('/', '-', $classlist);
              $classlist = str_replace('&amp;', '', $classlist);     
            }

            $row = $rowparts[0] . '</div>';
          }

          ?>
          <article class="isotope-element isotope-element-<?php print $count; ?> portfolio-item-2 class_item_margin_grid <?php print $classlist; ?>" data-category="<?php print $classlist; ?>" <?php print $bgstyle ?>>
            <?php print $row; ?>
          </article >
          <?php 
          // reset
          $rowparts = NULL;
          $filterclass = NULL;
          $count++;
          ?>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
	$page_content = '';
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $i = 0; foreach ($rows as $id => $row): ?>  
  <?php 
  	if ($i%2 == 0) {
  		$page_content .= '<article class="blog-item">'.$row.'</article>';
  	}
  	else {
  		$page_content .= '<article class="blog-item n2">'.$row.'</article>';
  	}
	?>  
<?php $i++; endforeach; ?>
<div class="blog-wrapper">
	<div class="blog-style-1"><div class="blog-sizer"></div><?php print $page_content; ?></div>
</div>
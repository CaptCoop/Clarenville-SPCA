<div class="menu-widget">
	<?php foreach ($features_list as $key => $data): ?>
        <h4><?php print $data['name']; ?></h4>
        <ul>
        <?php foreach ($data['node'] as $node): ?>	
		        	<?php 
		        		if (current_path() == 'node/' . $node['nid']) {
									$class = 'active';									
								}
								else {
									$class = '';
								}
							?>        		
        			<li class="<?php print $class; ?>"><a  href="<?php print url('node/' . $node['nid']); ?>"><?php print $node['title']; ?></a></li>	                  			
          	<?php endforeach; ?>
        </ul>
        </div>
    <?php endforeach; ?>
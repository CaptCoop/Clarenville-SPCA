<?php
/**
 * @file
 * st_mukam_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function st_mukam_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block alert';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'alert';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-6">
<div class="notification">
<h3>Simple <span>Alerts</span></h3>

<div class="alert alert-success">SUCCESS! This is a success message.</div>

<div class="alert alert-info">INFORMATION! This is an information message.</div>

<div class="alert alert-warning">WARNING! This is a warning message.</div>

<div class="alert alert-danger">DANGER! This is a danger message.</div>
</div>
</div>

<div class="col-md-6">
<div class="notification">
<h3>Dissmissable <span>Alerts</span></h3>

<div class="alert alert-success alert-dissmisabble"><button aria-hidden="true" class="close" data-dismiss="alert" type="button">×</button>SUCCESS! This is a success message.</div>

<div class="alert alert-info alert-dissmisabble"><button aria-hidden="true" class="close" data-dismiss="alert" type="button">×</button>INFORMATION! This is an information message.</div>

<div class="alert alert-warning alert-dissmisabble"><button aria-hidden="true" class="close" data-dismiss="alert" type="button">×</button>WARNING! This is a warning message.</div>

<div class="alert alert-danger alert-dissmisabble"><button aria-hidden="true" class="close" data-dismiss="alert" type="button">×</button>DANGER! This is a danger message.</div>
</div>
</div>
</div>
</div>
';

  $export['alert'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Awesome Responsive Theme';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'awesome_responsive_theme';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-12">
<div class="call-to-action fadein scaleInv anim_3">
<h2>Looking for an Awesome Responsive Theme</h2>

<p class="fadeInDown-1 blind animated">Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec.</p>
<span class="buton b_asset buton-2 buton-small"><a href="#">View Work</a></span> <span class="buton b_black buton-2 buton-small"><a href="#">Contact Us</a></span></div>
</div>
</div>
</div>
';

  $export['awesome_responsive_theme'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AWESOME TECHNOLOGY';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'awesome_tech';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-12">
<div class="featured-image">
<h2 class="bounceInLeft-1 blind animated"><span>AWESOME TECHNOLOGY</span> THAT WE USE</h2>

<p class="bounceInRight-1 blind animated">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard. of type and scrambled it to make a type specimen book. It has survived into electronic typesetting.</p>

<p class="bounceInUp-1 blind animated"><img alt="apples" src="/sites/default/files/apples.png" /></p>
</div>
</div>
</div>
</div>
';

  $export['awesome_tech'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'buy theme';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'buy_theme';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-12">
<div class="call-to-action-2"><span class="buton b_white buton-2 buton-small pull-right">BUY THEME</span>
<h4>Looking for a Professional and Unique Responsive Design?</h4>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of that Power of Human centuries.</p>
</div>
</div>
</div>
</div>
';

  $export['buy_theme'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block columns';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'columns';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-9">
<h3><span>3/4</span> Column</h3>

<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo. Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</p>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque diam sem, hendrerit ut faucibus sit amet, bibendum vel lacus. Nunc molestie magna sed sapien ornare tempus. Curabitur venenatis ipsum nec ligula placerat sollicitudin. Curabitur sit amet magna quam. Praesent in libero vel turpis pellentesque egestas sit amet vel nunc. Nunc lobortis dui neque, quis accumsan dolor. Aenean aliquet dignissim semper. Maecenas ullamcorper est vitae sem ornare interdum. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
</div>

<div class="col-md-3 shortcodes-headings">
<h1>Heading <span>H1</span></h1>

<h2>Heading <span>H2</span></h2>

<h3>Heading <span>H3</span></h3>

<h4>Heading <span>H4</span></h4>

<h5>Heading <span>H5</span></h5>

<h6>Heading <span>H6</span></h6>
</div>
</div>

<div class="row">
<div class="col-md-6">
<h3><span>1/2</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur.</div>

<div class="col-md-6">
<h3><span>1/2</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur.</div>
</div>

<div class="row">
<div class="col-md-4">
<h3><span>1/3</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</div>

<div class="col-md-4">
<h3><span>1/3</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</div>

<div class="col-md-4">
<h3><span>1/3</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</div>
</div>

<div class="row">
<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>

<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>

<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>

<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>
</div>

<div class="row">
<div class="col-md-8">
<h3><span>2/3</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo. Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</div>

<div class="col-md-4">
<h3><span>1/3</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</div>
</div>

<div class="row">
<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>

<div class="col-md-9">
<h3><span>3/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo. Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo.</div>
</div>

<div class="row">
<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>

<div class="col-md-6">
<h3><span>1/2</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore. veritatis et quasi architecto beatae vitae dicta sunt explicabo. Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus sunt explicabo.</div>

<div class="col-md-3">
<h3><span>1/4</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque.</div>
</div>

<div class="row">
<div class="col-md-2">
<h3><span>1/6</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium.</div>

<div class="col-md-2">
<h3><span>1/6</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium.</div>

<div class="col-md-2">
<h3><span>1/6</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium.</div>

<div class="col-md-2">
<h3><span>1/6</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium.</div>

<div class="col-md-2">
<h3><span>1/6</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium.</div>

<div class="col-md-2">
<h3><span>1/6</span> Column</h3>
Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium.</div>
</div>
</div>
';

  $export['columns'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Company detail';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'company_detail';
  $fe_block_boxes->body = '<h3><span>Company</span> Detail</h3>

<div class="textwidget">
<p>Lorem ipsum is simply dummy text of the printing and typesetting industry. Lorem ipsum has been the industry. It to make a type specimen book. It has survived into electronic typesetting Graphic Design.</p>

<p>Lorem ipsum is simply dummy text of the printing and typesetting industry. Lorem ipsum has been the industry. It to make a type specimen book. It has survived into electronic typesetting Graphic Design.</p>
</div>
';

  $export['company_detail'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<h3>Contact <span>Page</span></h3>
<?php
if(!function_exists(\'contact_site_page\')) {
  require_once drupal_get_path(\'module\', \'contact\').\'/contact.pages.inc\';
  $output = drupal_get_form(\'contact_site_form\');
  print drupal_render($output);
}
?>';

  $export['contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact form features';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'contact_form_features';
  $fe_block_boxes->body = '				<div class=" contact">			
<?php
if(!function_exists(\'contact_site_page\')) {
  require_once drupal_get_path(\'module\', \'contact\').\'/contact.pages.inc\';
  $output = drupal_get_form(\'contact_site_form\');
  print drupal_render($output);
}
?>
				</div>
';

  $export['contact_form_features'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block contact page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'contact_page';
  $fe_block_boxes->body = '<div class="bg-color grey fadein scaleInv anim_3">
		<div class="container">
			<div class="row">
				<div class="col-md-8 contact">
				<h3>Get in <span>Touch</span></h3>
				<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats nemo minima rerums unsers sadips amets.
				Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem
				aperiam, eaque ipsa quae ipsa quae ab illo inventore. Cras neque nulla, convallis non commodo et, euismod nonsense.
				</p>				
<?php
if(!function_exists(\'contact_site_page\')) {
  require_once drupal_get_path(\'module\', \'contact\').\'/contact.pages.inc\';
  $output = drupal_get_form(\'contact_site_form\');
  print drupal_render($output);
}
?>
				</div>
				<div class="col-md-4 contact-info">
				<h3>Contact <span>Info</span></h3>
					<div class="contact-widget">
					<i class="mukam-telephone pull-left widget-icon"></i><p>(+09) 0323 750 4561</p>
					<i class="mukam-envelope pull-left widget-icon"></i><p>mukam@mukam.com</p>
					<i class="mukam-globe pull-left widget-icon"></i><p>www.mukam-theme.com</p>
					<i class="mukam-clock pull-left widget-icon"></i><p>Mon - Sat 9:00am - 6:00 pm</p>
					<i class="mukam-direction pull-left widget-icon"></i><p>Envato Marketplace Melbourne St Sydney TF - 123456 Envato Marketplace Melbourne St Sydney TF - 123456</p>
					</div>
					<div class="social-widget">
					<a href="#"><div class="socialbox"><i class="mukam-face"></i></div></a>
					<a href="#"><div class="socialbox"><i class="mukam-tweet"></i></div></a>
					<a href="#"><div class="socialbox"><i class="mukam-google"></i></div></a>
					<a href="#"><div class="socialbox"><i class="mukam-dribble"></i></div></a>
					<a href="#"><div class="socialbox"><i class="mukam-youtube"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-vine"></i></div></a>
          <a href="#"><div class="socialbox"><i class="icon-linkedin"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-digg2"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-skype"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-stumbleupon"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-pinterest"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-flicker"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-myspace"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-rss"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-social-whale"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-yahoo"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-digg"></i></div></a>
          <a href="#"><div class="socialbox"><i class="mukam-social2"></i></div></a>
					</div>
				</div>
			</div>
		</div>
	  </div>';

  $export['contact_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'coppyright';
  $fe_block_boxes->body = '<div class="bg-color black fixed-padding">
<div class="container">
<div class="row">
<div class="col-md-12">
<div class="copyright-section">
<p>Copyright © 2014 snappytheme. All rights reserved.</p>
</div>
</div>
</div>
</div>
</div>
';

  $export['coppyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Facts footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'facts_footer';
  $fe_block_boxes->body = '<div class="col-md-3 timer-wrap">
<h4>Frappe Consumption</h4>
<span class="timer">4451</span>

<p>Yes! We love to drink frappe, especially with no sugar.</p>
</div>

<div class="col-md-3 timer-wrap">
<h4>Facebook Popularity</h4>
<span class="timer">10510</span>

<p>Yes! We love to drink frappe, especially with no sugar.</p>
</div>

<div class="col-md-3 timer-wrap">
<h4>People Follow Me</h4>
<span class="timer">9980</span>

<p>Yes! We love to drink frappe, especially with no sugar.</p>
</div>

<div class="col-md-3 timer-wrap">
<h4>Join our group on</h4>
<span class="timer">1026</span>

<p>Yes! We love to drink frappe, especially with no sugar.</p>
</div>
';

  $export['facts_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block FAQs phone';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'faqs_phone';
  $fe_block_boxes->body = '<div class="fadeInUp-1 blind faqinfo white animated v fadeInUp"><img alt="mukam" src="/sites/default/files/faqphone.png" />
<p>If the information above doesn\'t help. Call our support center <span>+01 123 456 7890</span><br />
no sea takimata sanctus es Lorem ipsum dolor sit amet.</p>

<p>&nbsp;</p>
</div>
';

  $export['faqs_phone'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'FREE SHIPPING';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'free_shipping';
  $fe_block_boxes->body = '<div class="bg-color parallax-shop" data-stellar-background-ratio="-0.14">
<div class="container">
<div class="row">
<div class="col-md-12">
<h1>FREE SHIPPING ON ALL ORDERS OVER $75</h1>

<h4>WE HAVE 10 YEARS OF EXPERIENCE IN THIS FIELD!</h4>
</div>
</div>

<div class="row">
<div class="col-xs-4 col-sm-4 col-md-4"><a href="#"><img alt="mukam" src="/sites/default/files/shop3.jpg" /></a></div>

<div class="col-xs-4 col-sm-4 col-md-4"><a href="#"><img alt="mukam" src="/sites/default/files/shop4.jpg" /></a></div>

<div class="col-xs-4 col-sm-4 col-md-4"><a href="#"><img alt="mukam" src="/sites/default/files/shop5.jpg" /></a></div>
</div>
</div>
</div>
';

  $export['free_shipping'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Get in Touch footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'get_in_touch_footer';
  $fe_block_boxes->body = '<h4>Get in Touch</h4>

<div class="contact-widget">
<p><i class="mukam-telephone pull-left widget-icon">&nbsp;</i>(+09) 0323 750 4561</p>

<p><i class="mukam-envelope pull-left widget-icon">&nbsp;</i>support@mukam.com</p>

<p><i class="mukam-globe pull-left widget-icon">&nbsp;</i>www.mukam-studio.com</p>

<p><i class="mukam-clock widget-icon">&nbsp;</i>Mon - Sat 9:00am - 6:00 pm</p>

<p><i class="mukam-direction pull-left widget-icon">&nbsp;</i>Envato Marketplace Melbourne St Sydney TF - 123456</p>
</div>

<div class="social-widget">
<div class="socialbox"><a href="#"><i class="mukam-face">&nbsp;</i></a></div>

<div class="socialbox"><a href="#"><i class="mukam-tweet">&nbsp;</i></a></div>

<div class="socialbox"><a href="#"><i class="mukam-google">&nbsp;</i></a></div>

<div class="socialbox"><a href="#"><i class="mukam-dribble">&nbsp;</i></a></div>

<div class="socialbox"><a href="#"><i class="mukam-youtube">&nbsp;</i></a></div>
</div>
';

  $export['get_in_touch_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header homepage 5';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_homepage_5';
  $fe_block_boxes->body = '<div class="bg-color grey fadein scaleInv anim_2">
<div class="container">
<div class="row">
<div class="col-md-12">
<div class="tabs-featured-slider">
<h3>We are a group of experienced designers and developers. Mukam Responsive Premium Wordpress Template is Simple in using.</h3>

<div class="tab-content">
<div class="tab-pane fade active in" id="banner-1"><img alt="mukam" src="/sites/default/files/banner-1.jpg" /></div>

<div class="tab-pane fade" id="banner-2"><img alt="mukam" src="/sites/default/files/banner-2.jpg" /></div>

<div class="tab-pane fade" id="banner-3"><img alt="mukam" src="/sites/default/files/banner-3.jpg" /></div>

<div class="tab-pane fade" id="banner-4"><img alt="mukam" src="/sites/default/files/banner-4.jpg" /></div>
</div>

<ul class="nav nav-tabs nav-custom">
	<li class="active"><a data-toggle="tab" href="#banner-1"><span class="slide-number pull-left">1</span><span class="nav-title hidden-xs hidden-sm">CREATIVE IDEAS</span><span class="hidden-xs hidden-sm">STAND OUT FROM THE CROWD</span></a></li>
	<li><a data-toggle="tab" href="#banner-2"><span class="slide-number pull-left">2</span><span class="nav-title hidden-xs hidden-sm">HTML5/CSS3</span><span class="hidden-xs hidden-sm">USE TODAY AND TOMORROW</span></a></li>
	<li><a data-toggle="tab" href="#banner-3"><span class="slide-number pull-left">3</span><span class="nav-title hidden-xs hidden-sm">OUR EXPERIENCE</span><span class="hidden-xs hidden-sm">WE HAVE 10 YEARS OF EXPERIENCE</span></a></li>
	<li><a data-toggle="tab" href="#banner-4"><span class="slide-number pull-left">4</span><span class="nav-title hidden-xs hidden-sm">RESPONSIVE DESIGN</span><span class="hidden-xs hidden-sm">FROM DESKTOP TO MOBILE</span></a></li>
</ul>

<div class="clearfix">&nbsp;</div>
</div>
</div>
</div>
</div>
</div>
';

  $export['header_homepage_5'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Looking for a Professional Responsive Design';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'looking_pro_responsive_design';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-12">
<div class="call-to-action">
<h2 class="fadeInDown-1 blind animated v fadeInDown">Looking for a Professional Responsive Design?</h2>

<p class="fadeInDown-1 blind animated v fadeInDown">Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec.</p>
<span class="fadeInDown-1 blind buton b_white buton-2 buton-mini animated v fadeInDown"><a href="#">View Work</a></span><span class="fadeInDown-1 blind buton b_white buton-2 buton-mini animated v fadeInDown"><a href="#">Contact Us</a></span></div>
</div>
</div>
</div>
';

  $export['looking_pro_responsive_design'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Pricing Table';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'pricing_table';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-12">
<h3>Pricing <span>Table</span></h3>
</div>

<div class="col-md-3">
<div class="mukam-table">
<div class="price-line greypricing">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">15</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_black buton-2 buton-mini">SIGN UP</span></div>
</div>
</div>

<div class="col-md-3">
<div class="mukam-table">
<div class="price-line greypricing">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">39</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_black buton-2 buton-mini">SIGN UP</span></div>
</div>
</div>

<div class="col-md-3">
<div class="mukam-table">
<div class="price-line back-inherit">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">79</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_asset buton-2 buton-mini">SIGN UP</span></div>
</div>
</div>

<div class="col-md-3">
<div class="mukam-table">
<div class="price-line greypricing">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">99</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_black buton-2 buton-mini">SIGN UP</span></div>
</div>
</div>
</div>
</div>
';

  $export['pricing_table'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Same features';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'same_features';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-12">
<div class="tabs-featured">
<h3>SOME <span>MUKAM</span> FEATURES</h3>

<p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard. of type and scrambled it to make a type specimen book. It has survived into electronic typesetting.</p>

<ul class="nav nav-tabs">
	<li><a data-toggle="tab" href="#rocket"><i class="entypo-rocket pull-left">&nbsp;</i>No Rocket Science</a></li>
	<li class="active"><a data-toggle="tab" href="#mobile"><i class="mukam-mobile pull-left">&nbsp;</i>Mobile Ready</a></li>
	<li><a data-toggle="tab" href="#social"><i class="mukam-socialman pull-left">&nbsp;</i>Social Media</a></li>
</ul>

<div class="tab-content">
<div class="tab-pane fade" id="rocket">
<h3><span>No Rocket</span> Science</h3>

<div>The falcate consonant reveals itself as an astute factory to those who look. The waveless kilogram reveals itself as The calendar of a rake becomes a sulkies quotation. Their industry was, in this moment, an awful effect.<br />
<br />
Framed in a different way, few can name an unsaid bit that isn’t a distilled history.a wailing square to those who look. This is not to discredit the idea that a medicine is a step-grandfather.</div>

<ul class="list-none">
	<li><i class="icon-li icon-ok">&nbsp;</i>Vestibulum sapien nisl, ornare auctor, consectetuer quis, posuere tristique, odio.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Duis volutpat elit et erat. In at nulla at nisl condimentum aliquet.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Curabitur pretium tincidunt lacus. Nulla gravida orci a odio.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Integer in mauris eu nibh euismod gravida.</li>
</ul>
<span class="buton b_asset buton-2 buton-large">READ MORE</span></div>

<div class="tab-pane fade in active" id="mobile"><img alt="mukam" class="pull-right" src="/sites/default/files/ipadmobile.png" style="width: 324px; height: 345px;" />
<h3><span>Mobile</span> Ready</h3>

<h5>Create Tablet marketing promotions in minute</h5>

<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

<ul class="list-none">
	<li><i class="icon-li icon-ok">&nbsp;</i>Vestibulum sapien nisl, ornare auctor, consectetuer quis, posuere tristique, odio.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Duis volutpat elit et erat. In at nulla at nisl condimentum aliquet.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Curabitur pretium tincidunt lacus. Nulla gravida orci a odio.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Integer in mauris eu nibh euismod gravida.</li>
</ul>
</div>

<div class="tab-pane fade" id="social"><img alt="mukam" class="pull-right" src="/sites/default/files/icons.png" />
<h3><span>Social</span> Media</h3>

<h5>Create Tablet marketing promotions in minute</h5>

<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

<ul class="list-none">
	<li><i class="icon-li icon-ok">&nbsp;</i>Vestibulum sapien nisl, ornare auctor, consectetuer quis, posuere tristique, odio.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Duis volutpat elit et erat. In at nulla at nisl condimentum aliquet.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Curabitur pretium tincidunt lacus. Nulla gravida orci a odio.</li>
	<li><i class="icon-li icon-ok">&nbsp;</i>Integer in mauris eu nibh euismod gravida.</li>
</ul>
<span class="buton b_asset buton-2 buton-large pull-left">READ MORE</span></div>
</div>
</div>
</div>
</div>
</div>
';

  $export['same_features'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price table 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'tables_price2';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="fadeInLeft-1 blind col-md-4 animated v fadeInLeft">
<div class="mukam-table">
<div class="price-line greypricing">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">39</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_black buton-2 buton-large">SIGN UP</span></div>
</div>
</div>

<div class="fadeInUp-1 blind col-md-4 animated v fadeInUp">
<div class="mukam-table">
<div class="price-line back-inherit">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">45</span><span class="cent">.00</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_asset buton-2 buton-large">SIGN UP</span></div>
</div>
</div>

<div class="fadeInRight-1 blind col-md-4 animated v fadeInRight">
<div class="mukam-table">
<div class="price-line greypricing">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">65</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_black buton-2 buton-large">SIGN UP</span></div>
</div>
</div>
</div>
</div>
';

  $export['tables_price2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price table 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'tables_price3';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="blogeffect4-1 blind col-md-6 animated v blogeffect4">
<div class="mukam-table">
<div class="price-line greypricing">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">15</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_black buton-2 buton-large">SIGN UP</span></div>
</div>
</div>

<div class="blogeffect4-1 blind col-md-6 animated v blogeffect4">
<div class="mukam-table">
<div class="price-line back-inherit">
<p>STANDARD</p>

<p class="period">monthly plan</p>

<div class="price"><span class="mcurrency">$</span><span class="money">35</span><span class="cent">.99</span></div>
</div>

<div class="mukam-line">
<p>Theme Update</p>
</div>

<div class="mukam-line">
<p>Most Wanted</p>
</div>

<div class="mukam-line">
<p>Layered Photoshop PSD</p>
</div>

<div class="mukam-line">
<p>5 E-Mail Accounts</p>
</div>

<div class="mukam-line">
<p>70MB Monthly Traffic</p>
</div>

<div class="mukam-line">
<p>24/7 Live Support</p>
</div>

<div class="mukam-line darkgrey"><span class="buton b_asset buton-2 buton-large">SIGN UP</span></div>
</div>
</div>
</div>
</div>
';

  $export['tables_price3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top header shop';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'top_header_shop';
  $fe_block_boxes->body = '<div class="bg-shop">
<div class="container">
<div class="row">
<div class="col-xs-6 col-sm-6 col-md-6"><a href="#"><img alt="mukam" src="/sites/default/files/shop1.jpg" /></a></div>

<div class="col-xs-6 col-sm-6 col-md-6"><a href="#"><img alt="mukam" src="/sites/default/files/shop2.jpg" /></a></div>
</div>
</div>
</div>
';

  $export['top_header_shop'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Use Carousel Columns';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'use_carousel_columns';
  $fe_block_boxes->body = '<h3 class="mukam-title">Use Carousel <span>Left Columns</span></h3>

<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore.</p>

<p>veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore.</p>

<ul class="list-none li-size">
	<li>Perspiciatis unde omnis iste natus.</li>
	<li>Perspiciatis unde omnis iste natus error si voluptatem</li>
	<li>Natus error si voluptatem accusantium Unde omnis iste.</li>
	<li>Perspiciatis unde omnis iste natus.</li>
	<li>Perspiciatis unde omnis iste natus error si voluptatem.</li>
	<li>Natus error si voluptatem accusantium Unde omnis iste.</li>
</ul>
';

  $export['use_carousel_columns'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Welcome to Mukam';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'welcome_mukam';
  $fe_block_boxes->body = '<div class="bg-color grey fadein scaleInv anim_3">
<div class="container">
<div class="row">
<div class="col-md-5">
<div class="aboutus">
<div class="slides">
<div style="width: 100%; float: left; margin-right: -100%; position: relative; opacity: 1; display: block; z-index: 2;"><img alt="mukam" draggable="false" src="/sites/default/files/aboutusslider1.png" style="height: 325px; width: 458px;" /></div>
</div>

<ul class="flex-direction-nav">
	<li>&nbsp;</li>
	<li>&nbsp;</li>
</ul>
</div>
</div>

<div class="col-md-7">
<h3>Welcome to <span>Mukam</span></h3>

<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore.</p>

<p>veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore.</p>

<ul class="list-none li-size">
	<li><i class="mukam-list">&nbsp;</i>Perspiciatis unde omnis iste natus.</li>
	<li><i class="mukam-list">&nbsp;</i>Perspiciatis unde omnis iste natus error sit voluptatem accusantium.</li>
	<li><i class="mukam-list">&nbsp;</i>Natus error sit voluptatem accusantium Unde omnis iste Perspiciatis unde omnis iste</li>
</ul>
</div>
</div>
</div>
</div>
';

  $export['welcome_mukam'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Why Choose Us?';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'why_choose_us';
  $fe_block_boxes->body = '<div class="fadeInLeft-1 blind animated">
<h3>Why <span>Choose Us?</span></h3>

<p>Veritatis et quasi architecto beatae vitae dicta sunt, explicabo. Nemo enim ipsam voluptatem, quia voluptas sit, aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos, qui ratione voluptatem sequi nesciunt. Sed ut perspiciatis, unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa.</p>

<ul class="list-none li-size">
	<li><i class="mukam-list">&nbsp;</i>Perspiciatis unde omnis iste natus.</li>
	<li><i class="mukam-list">&nbsp;</i>Perspiciatis unde omnis iste natus error si voluptatem accusantium.</li>
	<li><i class="mukam-list">&nbsp;</i>Natus error si voluptatem accusantium Unde omnis iste Perspiciatis unde.</li>
	<li><i class="mukam-list">&nbsp;</i>Perspiciatis unde omnis iste natus.</li>
	<li><i class="mukam-list">&nbsp;</i>Perspiciatis unde omnis iste natus error si voluptatem accusantium.</li>
	<li><i class="mukam-list">&nbsp;</i>Natus error si voluptatem accusantium Unde omnis iste Perspiciatis unde.</li>
</ul>
</div>
';

  $export['why_choose_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'WHY WE ARE BEST IN TOWN';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'why_we_best_town';
  $fe_block_boxes->body = '<div class="bg-color parallax-service-two" data-stellar-background-ratio="-0">
<div class="container">
<div class="row">
<div class="col-md-12">
<h3>WHY WE ARE BEST IN TOWN?</h3>

<p>Lorem ipsum is simple dummy text for printing and typesetting industry. Lorem ipsum has been the industry\'s standard. of<br />
type and scrambledit to make a type specimen book. It has survived into electronic typesetting.</p>
</div>
</div>
</div>
</div>
';

  $export['why_we_best_town'] = $fe_block_boxes;

  return $export;
}

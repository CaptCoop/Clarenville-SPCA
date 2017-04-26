jQuery(document).ready(function() {
    jQuery('.stylebutton').click(function() {
      	jQuery('.styleswitcher').toggleClass( "ackapa", 1000 );
  		return false;
    });

	jQuery(".asset-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/custom.css" );
		document.cookie="styleColor=asset";
	});

	jQuery(".green-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/green.css" );
		document.cookie="styleColor=green";
	});

	jQuery(".lightbrown-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/light-brown.css" );
		document.cookie="styleColor=light-brown";
	});

	jQuery(".lightyellow-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/light-yellow.css" );
		document.cookie="styleColor=light-yellow";
	});

	jQuery(".orange-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/orange.css" );
		document.cookie="styleColor=orange";
	});

	jQuery(".purple-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/purple.css" );
		document.cookie="styleColor=purple";
	});

	jQuery(".red-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/red.css" );
		document.cookie="styleColor=red";
	});

	jQuery(".yellow-change" ).click(function(){
		jQuery("#styleswitcher").attr("href", Drupal.settings.basePath + Drupal.settings.pathToTheme +"/css/yellow.css" );
		document.cookie="styleColor=yellow";
	});

	jQuery("#headertype").change(function() {
		jQuery( "#headertype option:selected" ).each(function() {
		    headertype = jQuery(this).val();
	    	if(headertype != ''){
	    		document.cookie="headerType=" + headertype;
	    		location.reload(true);
	    	}
	    });
	}).trigger( "change" );

	jQuery("#footertype").change(function() {
		jQuery( "#footertype option:selected" ).each(function() {
	    footertype = jQuery(this).val();
	    });
		switch (footertype)
		{
		case "footer-1":
			if( jQuery('body').find('.facts-2').length>0 ) {
				jQuery('#footer_facts').removeClass('facts-2');
				jQuery('#footer_facts').addClass('facts');
				document.cookie="footerClass=facts";
			}
			break;
		case "footer-2":
			if( jQuery('body').find('.facts').length>0 ) {
				jQuery('#footer_facts').addClass('facts-2');
				jQuery('#footer_facts').removeClass('facts');
				document.cookie="footerClass=facts-2";
			}
			break;
		} 
	}).trigger( "change" );

});
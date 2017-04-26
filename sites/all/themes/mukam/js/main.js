// Fixed Header Fix
// ======================
(function($) {
jQuery(window).load(function() {
    if( jQuery('body').find('.shopheader').length<1 ) {
    $('.mukam-waypoint').css('marginTop', $('.mukam-header').outerHeight(true) );
}
});

// Fixed Header
// ======================
jQuery(window).load(function() {
    var $head = $( '#mukam-header' );
    jQuery( '.mukam-waypoint' ).each( function(i) { 
        var $el = $( this ),
            animClassDown = $el.data( 'animateDown' ),
            animClassUp = $el.data( 'animateUp' );
     
        $el.waypoint( function( direction ) {
            if( direction === 'down' && animClassDown ) {
                $head.attr('class', 'mukam-header ' + animClassDown);
            }
            else if( direction === 'up' && animClassUp ){
                $head.attr('class', 'mukam-header ' + animClassUp);
            }
        }, { offset: '-1px' } );
    } );
    if( jQuery('body').find('.header-7 .navbar-nav>li>a').length > 1 ) {
        jQuery( '.header-7 .navbar-nav>li>a' ).each( function(i) { 
            var $el1 = $( this );
            var $valhtml = $el1.html();
            $el1.html('<i class="entypo-dot"></i>'+$valhtml);
        });
    }
});
// Fixed Header for Parallax Home Page
// ======================
// ======================
// var browser_height = jQuery(window).height();
// jQuery(window).load(function() {
//      jQuery('.parallax-homepage').css({height:browser_height});
// });
jQuery(window).load(function() {
    var browser_height = jQuery('.parallax-homepage').height();
    var $head2 = $( '#mukam-header2' );
    jQuery( '.mukam-waypoint2' ).each( function(i) {
        var $el = $( this ),
            animClassDown = $el.data( 'animateDown' ),
            animClassUp = $el.data( 'animateUp' );
        $el.waypoint( function( direction ) {
            if( direction === 'down' && animClassDown ) {
                $head2.attr('class', 'mukam-header2 ' + animClassDown);
            }
            else if( direction === 'up' && animClassUp ){
                $head2.attr('class', 'mukam-header2 ' + animClassUp);
            }
        }, { offset: '-1px' } );
    } );
});

$(document).ready(function () {
    jQuery("body.download").queryLoader2({
        barColor: "#e7d408",
        backgroundColor: "#e7d408",
        percentage: true,
        barHeight: 3,
        completeAnimation: "grow",
        minimumTime: 200
    });
});
// Show Hide TopSection
// ======================
jQuery(document).ready(function() {
        jQuery('.top-section-container .showhide .trans-topsection').click(function() {
          jQuery('.top-section').slideToggle( 300, "easeInSine", function() {
          $('.mukam-waypoint').css('marginTop', $('.mukam-header').outerHeight(true) );
            // Animation complete.
          });
        });
});

// Search Widget Open - Close
// ======================
var $searchCheck = "close";
jQuery(document).ready(function() {

    jQuery( ".search-widget .social-box" ).click(function() {
        if( $searchCheck == "close") {
          jQuery('.search-widget').addClass( 'open' );  
          jQuery('.search').addClass( 'open' );
          jQuery('.search-widget .social-box').addClass( 'open' );
          $searchCheck = "open"
        }
        else {
          jQuery('.search-widget').removeClass( 'open' );  
          jQuery('.search').removeClass( 'open');
          jQuery('.search-widget .social-box').removeClass( 'open' );
          $searchCheck = "close"
        }
    });
});

// All Menu Active 
// ======================
jQuery(function(jQuery) {
jQuery("header nav li a").filter(function(){
    return this.href == location.href.replace(/#.*/, "");
}) 
.closest('li.dropdown').addClass("active");
jQuery("li.dropdown").mouseover(function(){
    jQuery(this).addClass('open');
});
jQuery("li.dropdown").mouseout(function(){
    jQuery(this).removeClass('open');
});
});

jQuery(document).ready(function() {
// BLOG
// Style 1
// ======================
if( jQuery('body').find('.blog-style-1').length>0 ) { 
jQuery(function(jQuery) {
        var container=jQuery('.blog-style-1');
        container.imagesLoaded( function(){ 
        container.masonry({
        isAnimated: true,
        itemSelector:'.blog-item',
        columnWidth: '.blog-sizer',
        gutter: 29,
        isResizable: true
    });
    });    
});
}

// BLOG
// Style 3
// ======================
if( jQuery('body').find('.blog-style-3').length>0 ) {
jQuery(function(jQuery) {
    var container=jQuery('.blog-style-3');
    container.imagesLoaded( function(){ 
        container.masonry({
        isAnimated: true,
        itemSelector:'.blog-item',
        columnWidth: '.blog-sizer',
        gutter: 30,
        isResizable: true
});
});
}); }

});
// ANIMATION
// ======================
jQuery(document).ready(function() {"use strict";
   var myclasses;
   var myclass;
   var ekclass;
jQuery('.blind').waypoint(function() {
   myclasses = this.className;
   myclass = myclasses.split(" ");
   ekclass = myclass[0].split("-");
    if ( ekclass[0] !== "no_animation" && myclass[1] === "blind") {
                jQuery(this).addClass('v '+ekclass[0]);
                                                   }
}, { offset: '80%' });
});

// ANIMATION 2
// ======================
jQuery(document).ready(function() {
    var $body = $('body');
    $(window).load(function() {
        $body.toggleClass('on off');
        $('.on_off').click(function() {
            $body.toggleClass('on off');
            setTimeout(function() {
                $body.toggleClass('on off');
            }, 3000)
        });
    });  
    var transitionDelay=0;
    function findMaxYLValue(){
        var max=0;elArray=[];
        $('*[class*="anim_"]').each(function(){
            var animValue=$(this).attr('class').split(" ");
            var i,value;
            for(i=0;i<animValue.length;++i){
                value=animValue[i];if(value.substring(0,5)==="anim_"){
                    elArray.push(value.substring(5));
                    break;
                    }}});
            var maxValue='.anim_'+Math.max.apply(Math,elArray),$maxValueEl=$(maxValue).first();
            $maxValueEl.one('webkitTransitionEnd otransitionend oTransitionEnd msTransitionEnd transitionend',function(e){
            var transitionDelayValue=$maxValueEl.css("transition-delay");
            transitionDelay=Math.ceil(parseFloat(transitionDelayValue.substring(0,transitionDelayValue.length-1)*1000)*1)/1;
            });}findMaxYLValue();$('body').on('click','.trigger',function(e){
            e.preventDefault();
            $body.toggleClass('on off');
            var link=$(this).attr('href');
            setTimeout(function(){
            location.href=link;},transitionDelay);
    });
});

// TOGGLE
// ======================
jQuery(document).ready(function() {
    jQuery('.toggle').each(function() {
        var tis = $(this);
        tis.click(function() {
            tis.parent().parent().find('div.toggle-content').slideToggle( 400, "easeInCirc", function() {
            tis.toggleClass('title-active'); 
            });
        });
    });
});

//Pretty Photo
// ====================== 
jQuery(document).ready(function(){
    jQuery("a[data-rel^='prettyPhoto']").prettyPhoto({
        theme: "light_square"
    });
  });

// Anything Zoomer
// ======================
jQuery(window).load(function(){
//jQuery(document).ready(function(){
 if( jQuery('body').find('.product-gallery-active').length>0 ) {
 jQuery(function() {
        jQuery(".product-gallery-active").anythingZoomer({
            overlay : true,
            edit: true,
            // If you need to make the left top corner be at exactly 0,0, adjust the offset values below
            offsetX : 0,
            offsetY : 0
        });
});
}
});

})( jQuery );

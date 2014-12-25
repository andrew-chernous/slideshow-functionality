(function($, Drupal){

  Drupal.behaviors.bootstrapCarousel = {
    attach: function(context) {
      $('.carousel').carousel();
      $('.carousel .item:first-child').addClass('active');
      // Close modal pop-up when clide is selected.
      var rowSlider =  $('.modal-body .row .col-xs-4');
      rowSlider.each(function(){
        var imgHelp = $('img',this);
        imgHelp.addClass('img-responsive');
        imgHelp.wrap('<a class="carousel-thumb" href="#" data-target="#myCarousel"></a>');
      });
      var i = 0;
      $('a',rowSlider).each(function(){
        $(this).attr('data-slide-to',(i++));
      });
      $('#carousel-thumbs-modal .carousel-thumb').click(function() {
        $('#carousel-thumbs-modal').modal('hide');
      });
    }
  };

})(jQuery, Drupal);
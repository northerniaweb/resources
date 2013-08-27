(function ($) {
  Drupal.behaviors.togg= {
    attach: function (context, settings) {

      $(".uni_for_menu a").hover(function(evt) {
        $("#info-for-img img").hide();
        var id = $(this).attr('id');

        $("." + id).show();
      });
    }
  };
})(jQuery);
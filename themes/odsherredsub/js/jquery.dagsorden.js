(function ($) {
var is_visible = false;
$('.agenda-item').hide();
$('a.agenda-bullet-list').click(function(e) {
e.preventDefault();
$(this).nextAll('.agenda-item').toggle();
$(this).toggleClass('open')
$('a.agenda-bullet-list').not(this).nextAll('.agenda-item').hide();
$('a.agenda-bullet-list').not(this).removeClass('open');
var top = $(this).nextAll('.agenda-item').offset().top;
window.scrollTo(0, top -50);
});
}(jQuery)); 

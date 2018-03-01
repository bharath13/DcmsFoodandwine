 <?php 

/**
 * Subscribe Opt In
 *
 * @param array $classes An array of additional lasses to add to the opt-in.
 * @param string (image path) $sub_image A string, pathing to an image.
 * @param string (color hex) $sub_color_hex A string, overriding the base color of the text.
 * 
 **/

$classes = !empty($classes) ? implode(' ', $classes) : '';
$sub_image = !empty($sub_image) ? $sub_image : '';
$sub_color_hex = !empty($sub_color_hex) ? $sub_color_hex : '';

?>

<div class="opt-in opt-in--subscribe <?php print $classes; ?>" style="color:<?php print $sub_color_hex; ?>">
    <img class="opt-in--subscribe__image" src="<?php print $sub_image; ?>" alt="Subscribe Now!">
    <div class="opt-in--subscribe__content">
        <div class="opt-in--subscribe__logo">
            <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
              <use xlink:href="<?php asset('img/spritemap.svg#fw-logo'); ?>"></use>
            </svg>
        </div>
        <span class="opt-in--subscribe__cta-text">Delicious Deal<br/><span class="opt-in--subscribe__cta-text-strong">12 Issues for $12</span></span>
        <a style="color: white; background-color:<?php print $sub_color_hex; ?>; border-color: <?php print $sub_color_hex; ?>;" href="#" class="btn">Subscribe &amp; Save</a>
    </div>
</div>
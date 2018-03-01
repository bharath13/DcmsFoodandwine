<?php
/**
 * Name
 *
 * @param string $name Author's name.
 * @param string $landing_url URL to Author's landing page.
 * 
 * Optional Params:
 * @param string $image_path URL to Author bio image.
 * @param string $posted_date The posted date of content.
 * @param string $twitter_url URL to the Author's Twitter.
 * @param string $instagram_url URL to the Author's Instagram.
 * Mapped to: ../modules/custom/ti_amg_fwrd_feature/templates/modules/author.tpl.php
 */
?>

<div class="author">
  <?php if ($image_path): ?>
  <div class="author__image">
    <img width="80" src="<?php print $image_path; ?>" alt="<?php print $name; ?>">
  </div>
  <?php endif; ?>
  <div class="author__info">
    <span class="author__info-name">By <a href="<?php print $landing_url; ?>" class="author__info-link"><?php print $name; ?> <?php if ($twitter_url): ?><a class="author__info-social" href="<?php print $twitter_url; ?>">
    <svg viewBox="0 0 30 30"><use xlink:href="<?php asset('img/spritemap.svg#icon-twitter'); ?>"></use></svg></a><?php endif; ?> <?php if ($instagram_url): ?><a href="<?php print $instagram_url; ?>" class="author__info-social">
    <svg viewBox="0 0 30 30"><use xlink:href="<?php asset('img/spritemap.svg#icon-instagram'); ?>"></use></svg></a></span><?php endif; ?>
    <?php if ($posted_date): ?>
    <span class="author__info-posted">Posted <?php print $posted_date; ?></span>
    <?php endif; ?>
  </div>
</div>
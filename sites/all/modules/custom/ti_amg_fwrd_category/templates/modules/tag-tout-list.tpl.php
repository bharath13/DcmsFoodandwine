<?php
/**
 * Tout Section: List of tout contents which associated by the current term.
 *
 * @param array $touts The tout content: a list of tout contents.
 * 
 */
?>
<section>
    <?php $latest_touts_count = !empty($touts_count) ? $touts_count : ''; ?>
    <?php $latest_nojs_seemore_link = !empty($nojs_seemore_link) ? $nojs_seemore_link : ''; ?>
    <?php if (!empty($title)) : ?>
      <h3 class="section-heading section-heading--center"><span><?php print $title; ?></span></h3>
    <?php endif; ?>
    <div class="grid-3-up">
        <?php for ($row = 0; $row < count($touts); $row++) : ?>
          <?php 
          $inline_style = '';
          $inline_class = '';
          if ((!empty($type)) && ($type == 'latest' || $type == 'recipe' )) :
            if ($row >= 2) :
              $inline_style = '';
              $inline_class = 'grid-row-' . $type .'-'. ($row + 1);
            else :
              $inline_style = '';
              $inline_class = '';
            endif;
          endif;
          ?>       
          <div <?php print $inline_style; ?> class="grid-row <?php print $inline_class; ?>">
              <?php if (!empty($touts[$row]) && isset($touts[$row])) print $touts[$row]; ?>
          </div>
        <?php endfor; ?>
    </div>
    <?php if ((!empty($type)) && ($type == 'latest' || $type == 'recipe' ) && (count($touts) > 2)) : ?>
      <div class="centered"><a class="btn btn--plus-sign load-more-touts-<?php print $type; ?>">Load More</a></div>
    <?php endif; ?>
    <?php if ((!empty($type)) && ($type == 'latest' || $type == 'recipe') && (count($touts) > 4) && ($latest_touts_count >= 15)) : ?>
      <div class="centered"><a href="<?php print $latest_nojs_seemore_link; ?>" class="btn btn--plus-sign nojs-see-more-touts-<?php print $type; ?>">See More</a></div>
    <?php endif; ?>
</section>

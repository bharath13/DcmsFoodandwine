<?php
/**
 * Latest Content Section: video tout and a list of contents
 *
 * @param string $latest_title The title for this section.
 * @param array $latest_content The latest content: video tout + a list of contents
 * 
 */

?>
<section>  
<?php if (!empty($video_obj)): ?>
    <div id="video_section">
      <div class="section-heading section-heading--center"><h2 class="section-title"><?php print $latest_section_headings['video_section']['title']; ?></h2></div>
      <div class="subhead">
        <?php if(!empty($latest_section_headings['video_section']['subheading'])):?>
          <h3 class="subheading"><?php print $latest_section_headings['video_section']['subheading']; ?></h3>
        <?php endif;?>
        <?php if(!empty($latest_section_headings['video_section']['deck'])):?>  
          <div class="deck"><?php print render($latest_section_headings['video_section']['deck']); ?></div>
        <?php endif;?>
      </div>
      <article class="story-card  story-card--is-video story-card--feature-lg">
        <section class="section-container">     
            <?php print $video_obj['video']; ?>
            <span class="story-card__title"><?php print $video_obj['title']; ?></span>
            <div class="story-card__text"><?php print render($video_obj['deck']); ?></div>  
        </section>
      </article> 
    </div>
<?php endif; ?>
  <div id="large_tout_section">
    <div class="section-heading section-heading--center"><h2 class="section-title"><?php print $latest_section_headings['large_tout']['title']; ?></h2></div>
    <div class="subhead">
      <?php if(!empty($latest_section_headings['large_tout']['subheading'])):?>
        <h3 class="subheading"><?php print $latest_section_headings['large_tout']['subheading']; ?></h3>
        <?php endif;?>
      <?php if(!empty($latest_section_headings['large_tout']['deck'])):?>  
        <div class="deck"><?php print render($latest_section_headings['large_tout']['deck']); ?></div>
      <?php endif;?>
    </div>
    <div class="grid-3-up">    
      <div class="grid-row">
        <?php print $output[0]; ?>  
      </div>    
    </div>
  </div>
  <div id="small_tout_section">
    <?php if (!empty($latest_section_headings['small_tout']['title'])): ?>
      <div class="section-heading section-heading--center">
        <h2 class="section-title">
          <?php print $latest_section_headings['small_tout']['title']; ?>
        </h2>
      </div>
      <div class="subhead">
        <?php if (!empty($latest_section_headings['small_tout']['subheading'])): ?>
          <h3 class="subheading"><?php print $latest_section_headings['small_tout']['subheading']; ?></h3>
        <?php endif; ?>
        <?php if (!empty($latest_section_headings['small_tout']['deck'])): ?>
          <div class="deck"><?php print render($latest_section_headings['small_tout']['deck']); ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>    
    <div class="grid-3-up">
      <?php for ($row = 1; $row < count($output); $row++) : ?>    
        <div class="grid-row">
          <?php print $output[$row]; ?>  
        </div>
      <?php endfor; ?>
    </div>
  </div>
</section>

<?php 

/**
 * Recipe Notes
 *
 * @param $notes[] $notes_group An array of note.
 *
 */

?>
<div class="recipe-notes">
  <div class="recipe-notes__content">
    <?php if (!empty($make_ahead)) { ?>
      <div class="recipe-notes__group">
        <h4 class="recipe-notes__heading">Make Ahead</h4>
        <p><?php print $make_ahead; ?></p>
      </div>
    <?php } 
      if (!empty($serve_notes)) { ?>
      <div class="recipe-notes__group">
        <h4 class="recipe-notes__heading">Notes</h4>
        <p><?php print $serve_notes; ?></p>
      </div>
    <?php }
      if (!empty($serve_with)) { ?>
      <div class="recipe-notes__group">
        <h4 class="recipe-notes__heading">Serve With</h4>
        <p><?php print $serve_with; ?></p>
      </div>
    <?php } 
      if (!empty($pairing_notes)) { ?>
      <div class="recipe-notes__group">
        <h4 class="recipe-notes__heading">Suggested Pairing</h4>
        <p><?php print $pairing_notes; ?></p>
      </div>
    <?php } ?>
  </div>
</div>

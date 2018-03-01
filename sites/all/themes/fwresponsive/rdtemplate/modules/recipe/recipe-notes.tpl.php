<?php 

/**
 * Recipe Notes
 *  Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/recipe-notes.tpl.php
 *
 * @param notes[][] $notes_group An array of note.
 *
 * Note:
 * @param string $heading The heading of the note group.
 * @param string[] $notes An array of individual notes that below to this note group.
 */

?>
<div class="recipe-notes">
  <div class="recipe-notes__content">
    <?php foreach ($notes_group as $note_group): ?>
      <div class="recipe-notes__group">
        <h4 class="recipe-notes__heading"><?php print $note_group['heading']; ?></h4>
        <?php foreach ($note_group['notes'] as $note): ?>
        <p><?php print $note; ?></p>
        <?php endforeach; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
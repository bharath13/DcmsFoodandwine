<div class="classic_aspen_header">
  <div class="page-container">
    <div class="classic_aspen_first_row">
      <div class="classic_aspen_sub_title">
        <?php print $sub_header['sub_title']; ?>
      </div>
      <div class="classic_aspen_main_title">
        <span class="mobile_subnav_hamburger"> + </span>
        <span class="mobile_subnav_expand_hamburger"> - </span>
        <?php if (!empty($sub_header['header_title'])) : ?>
          <?php
          if (empty($sub_header['classic_home_url'])) :
            $cursor_text = 'cursor_text';
          else :
            $cursor_text = '';
          endif;
          ?>
          <a class="anchor_title <?php print $cursor_text; ?>" <?php if (!empty($sub_header['classic_home_url'])) : ?> href="<?php print $sub_header['classic_home_url'];?>" <?php endif; ?> ><?php print $sub_header['header_title']; ?></a> 
          <span class="normal_title"><?php print $sub_header['header_title']; ?></span>
        <?php endif; ?>
      </div>
      <?php if (!empty($sub_header['cta'])) : ?>
        <div class="classic_aspen_cta">
          <?php print $sub_header['cta']; ?>
        </div>
      <?php endif; ?>
    </div>
    <div class="classic_aspen_second_row">
      <ul class = "cassic-aspen-menu__nav">
        <?php foreach ($sub_header['sub_menu'] as $main_link) : ?>
          <li class="cassic-aspen-menu__item">
            <?php
            print $main_link['link'];
            if (isset($main_link['leaf'])) :
              ?>
              <ul class="cassic-aspen-menu__sub-menu">
                <?php foreach ($main_link['leaf'] as $submenu_link) : ?>
                  <li class="cassic-aspen-menu__sub-menu__item">
                    <?php print $submenu_link['link']; ?>
                  </li>
                <?php endforeach; ?>
              </ul>
            <?php endif; ?>
          </li>
        <?php endforeach; ?>
      </ul>
      <div class="cassic-aspen-mobile-bottom">
        <ul class = "cassic-aspen-mobile-menu__nav">
          <?php if (!empty($sub_header['classic_home_url'])) : ?>
            <li class="cassic-aspen-mobilie-menu__item">
              <a href="<?php print $sub_header['classic_home_url'];?>"><?php print t('MAIN');?></a>
            </li>
          <?php endif; ?>
          <?php foreach ($sub_header['sub_menu'] as $main_link) : ?>
            <li class="cassic-aspen-mobilie-menu__item">
              <?php
              print $main_link['link'];
              if (isset($main_link['leaf'])) :
                ?>
                <ul class="cassic-aspen-mobile-menu__sub-menu">
                  <?php foreach ($main_link['leaf'] as $submenu_link) : ?>
                    <li class="cassic-aspen-mobile-menu__sub-menu__item">
                      <?php print $submenu_link['link']; ?>
                    </li>
                  <?php endforeach; ?>
                </ul>
              <?php endif; ?>
            </li>
          <?php endforeach; ?>
            <?php if (!empty($sub_header['cta'])) : ?>
              <li class="cassic-aspen-mobilie-menu__item cta">
                <?php print $sub_header['cta']; ?>
              </li>
            <?php endif; ?>
        </ul>
        <?php if (!empty($sub_header['sponser_text']) || !empty($sub_header['sponser_img'])) : ?>
          <div class="classic_aspen_mobile_sponsor">
            <?php if (!empty($sub_header['sponser_text'])) : ?>
              <div class="sponser_text"><?php print $sub_header['sponser_text']; ?></div>
            <?php endif; ?>
            <?php if (!empty($sub_header['sponser_img'])) : ?>
              <div class="sponser_img"><?php print $sub_header['sponser_img']; ?></div>
            <?php endif; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <div class="classic_aspen_sponsor">
      <?php if (!empty($sub_header['sponser_text'])) : ?>
        <div class="sponser_text"><?php print $sub_header['sponser_text']; ?></div>
      <?php endif; ?>
      <?php if (!empty($sub_header['sponser_img'])) : ?>
        <div class="sponser_img"><?php print $sub_header['sponser_img']; ?></div>
      <?php endif; ?>
    </div>
  </div>
</div>

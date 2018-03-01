<div class="ad ad--leaderboard centered">
  <img src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/728x90.jpg" alt="">
</div>

<div class="site-header" data-js-component="mainMenu">
  <div class="page-container">
    <div class="site-header__content">
      <a class="site-header__logo" href="#">
        <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
          <use xlink:href="<?php asset('img/spritemap.svg#fw-logo'); ?>"></use>
        </svg>
      </a>
      
      <?php print theme('main-menu'); ?>
      
      <?php
        /**
         * This is Drupal Search module markup provided by Viki that was restyled
         * to match design.
         */
      ?>
      <form class="site-header__search"
            data-js-component="headerSearch"
            action="" 
            method="get" id="search-block-form" 
            accept-charset="UTF-8">
        <div>
          <div class="container-inline">
            <h2 class="element-invisible">Search form</h2>
            <div class="form-item form-type-textfield form-item-search-block-form">
              <label class="element-invisible" for="edit-search-block-form--2">Search </label>
              <input onfocus="if (this.value == 'Search')
              {this.value = '';}
              " onblur="if (this.value == '')
              {this.value = 'Search';}
              " type="text" id="edit-search-block-form--2" name="search_block_form" value="Search" size="15" maxlength="128" class="form-text">
            </div>
            <a href="/search/advanced" class="head_adv_search_link" title="Advanced Search">Advanced Search</a><div class="form-actions form-wrapper" id="edit-actions"><input type="submit" id="edit-submit" name="op" value="Search" class="form-submit"></div><input type="hidden" name="form_build_id" value="form-3UdbcfwjqzMaf44q2_7b43fDaKVyCLTlM8MljZZdnZc">
            <input type="hidden" name="form_id" value="search_block_form">
          </div>
        </div>
      </form>

    </div>
  </div>
</div>
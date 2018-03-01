<?php
/**
 * This is a @file
 */
?>
<?php
if (isset($_GET['keyword'])) {    
    $keyword = html_entity_decode(str_replace(array("{","}","\"","&lt;","&gt;","%7D","%7B","%22","%3C","%3E"),'',filter_xss($_GET['keyword'])));
}
$first = 'right';
$second = 'active';
$third = 'right';
if (isset($_GET['sort_by'])) {
    if ($_GET['sort_by'] == 'search_api_relevance') {
        $first = 'active';
        $second = 'right';
        $third = 'right';
    } elseif ($_GET['sort_by'] == 'published_at') {
        $first = 'left';
        $second = 'active';
        $third = 'right';
    } elseif ($_GET['sort_by'] == 'field_images') {
        $first = 'left';
        $second = 'left';
        $third = 'active';
    }
}
?>
<div class="sort-by">
    <div class="container m-container">
        <div class="m-eight m-columns eight columns sort-option">
            <h3 class="sort-title">
                Sort by:
            </h3>
            <ul class="sort-by-list">
                <li class="<?php print $first ?>">
                    <a href="/search.mobi?keyword=<?php print $keyword ?>&sort_by=search_api_relevance&sort_order=DESC">Relevance</a>
                </li>
                <li class="<?php print $second ?>">
                    <a href="/search.mobi?keyword=<?php print $keyword ?>&sort_by=published_at&sort_order=DESC">Date Published</a>
                </li>
                <li class="<?php print $third ?>">
                    <a href="/search.mobi?keyword=<?php print $keyword ?>&sort_by=field_images&sort_order=DESC">Photos Only</a>
                </li>
            </ul>
        </div>
    </div>
</div>
<div class="search-title">
    <div class="container m-container">
        <div class="m-eight m-columns eight columns">
            <h2>Results for: <?php print $keyword; ?>
            </h2>
        </div>
    </div>
</div>

<?php
//$variables['tabs'] = ti_patternlab_render_content($variables['tabs']);
$variables['page']['highlighted'] = ti_patternlab_render_content($variables['page']['highlighted']);
$variables['page']['help'] = ti_patternlab_render_content($variables['page']['help']);
$variables['page']['content'] =  ti_patternlab_render_content($variables['page']['content']);
$variables['page']['page_bottom'] =  ti_patternlab_render_content($variables['page']['page_bottom']);
$variables['page']['footer'] =  ti_patternlab_render_content($variables['page']['footer']);
$data = $variables;
print ti_patternlab_render_partial("wrappers-page", $data);

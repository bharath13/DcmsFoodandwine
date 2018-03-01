<?php
//global $PatternLab;

$data = ti_patternlab_get_partial_data("templates-panels-ti_twocol_65_35_stacked");

$data['content'] = $variables['content'];

print ti_patternlab_render_partial("templates-panels-ti_twocol_65_35_stacked", $data);

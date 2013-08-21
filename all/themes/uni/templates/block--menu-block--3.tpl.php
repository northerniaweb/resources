<div<?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <div id="menu-anchor">
      <a id="menu"></a>
    </div>
    <div<?php print $content_attributes; ?>>

      <?php print $content ?>
    </div>
  </div>
</div>

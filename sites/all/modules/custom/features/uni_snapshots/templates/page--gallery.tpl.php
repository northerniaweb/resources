<?php 
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>
<?php if (isset($page['content'])) : ?>
  <?php 
  
    $output = render($page['content']); 
    $tag_regex = '/<container[^>]*id="snapshot-page">(.*?)<\\/container>/si';
    preg_match($tag_regex, $output, $matches);
    print $matches[1];
  ?>
<?php endif; ?>  
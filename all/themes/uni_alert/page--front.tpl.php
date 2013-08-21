<div id="page-wrapper"><div id="page">

  <div id="page-top">  <!-- this is necessary for the admin menu -->
    <?php print render($page['page_top']); ?>
  </div>
  
  <div id="header"><div class="section clearfix">
    <img src="<?php global $base_path; print $base_path.drupal_get_path('theme', 'uni_alert'); ?>/images/uni-logo.png" alt="University of Northern Iowa"/>
    <?php print render($page['header']); ?>
  </div></div> <!-- /.section, /#header -->

  <?php print $messages; ?>

  <div id="main-wrapper"><div id="main" class="clearfix">
    
    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar"><div class="section">
          <!-- UNI Alert image -->
          <img src="<?php global $base_path; print $base_path.drupal_get_path('theme', 'uni_alert'); ?>/images/unialert.png" alt="University of Northern Iowa Alert"/>      
          <!-- UNI Hotlines -->
          <div id="uni-hotlines" class="block">
            <h2 class="block-title">UNI Hotlines</h2>
            <p>866-537-6053</p>
            <p>319-273-6053</p>
          </div>  
      </div></div> <!-- /.section, /#sidebar-first -->
    <?php endif; ?>

    <div id="content" class="column"><div class="section">
      <a id="main-content"></a>
      <h1 class="title" id="page-title">UNI Alert</h1>
      <?php print render($page['help']); ?>
      <?php $viewName = 'alert_blog'; print views_embed_view($viewName); ?> 
    </div></div> <!-- /.section, /#content -->

  </div></div> <!-- /#main, /#main-wrapper -->

  <div id="footer"><div class="section">
    <p>Due to the high level of web traffic at this time, most main links to the UNI website are currently suspended to facilitate access to the UNI Alert messages.
    <br /><br />
    <a href="http://www.uni.edu/email/">UNI Email</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
    <a href="https://access.uni.edu/cgi-bin/portal/portHandler.cgi">MyUNIverse</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
    <a href="https://java.access.uni.edu/ed/faces/searchAll.jsp">UNI Directory</a>
    <br /><br />
    Maintained by <a href="mailto:webteam@uni.edu">University Relations</a></p>     
  </div></div> <!-- /.section, /#footer -->

</div></div> <!-- /#page, /#page-wrapper -->
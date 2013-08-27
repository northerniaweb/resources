This module provides a 'codec' for the Video Filter module [http://drupal.org/project/video_filter] that embeds an iframe of a video from the UNI Panopto Server. 

==== Installation ====
Enable this module on the modules page.
Follow installation and configuration steps for Video Filter: http://drupal.org/node/402796

==== Usage ====
Video Filter's tags are used: [video:url] or can be added via the WYSIWYG button that is available from the Video Filter module
Paste in the link to your Panopto video, provided from the Share button in Panopto.

=== Notes ====
Videos are embedded in an <iframe> and have been tested in IE7+, FF 3.6+, and the latest versions Chrome and Safari.
The iframe will default to the size of the global default height and width settings for Video Filter, unless you specify your height and width in your [video:url height:300 width:450]
The default embed code provided by Panopto is 450px wide by 300px high. You may want to use these settings for optimal results.

==== Maintained by ====
Brandon Neil (bneil)
This module provides a 'codec' for the Video Filter module [http://drupal.org/project/video_filter] that embeds a flv or mp4 video from the UNI Helix Universal Media Server. 

==== Installation ====
Enable this module on the modules page.
Follow installation and configuration steps for Video Filter: http://drupal.org/node/402796

==== Notes ====
Videos are embedded in an <object> and have been tested in IE7+, FF 3.6+, and the latest versions Chrome and Safari.
The video calls on a centrally hosted JW Player, located at http://www.uni.edu/embed/player.swf
This filter directly embeds a flash player into the page and there isn't any javascript detection if Flash is installed.
If Flash is not installed, users will not see the embedded video and there isn't an alert message that Flash is required. More: http://www.longtailvideo.com/support/jw-player/jw-player-for-flash-v5/12538/supported-player-embed-methods#embedtag

==== Maintained by ====
Brandon Neil (bneil)
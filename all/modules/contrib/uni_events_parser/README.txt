CONTENTS OF THIS FILE
---------------------

* Introduction
* Installation
* Important Configuration Information

INTRODUCTION
------------

The UNI Events Parser feature builds a feeds importer for XML feeds from 
UNI Calendar (http://www.uni.edu/unicalendar). It also provides a Event Feed
content type which is configured to utilize the feeds importer provided to build
local events on the site using the UNI Events feature 
(http://www.uni.edu/features/uni-events).

Current Maintainer: Genevieve Johnson (becicka)
Past Maintainers: Brandon Neil (bneil) and Abu Audu (audua)


INSTALLATION
------------

1. Enable the Features module at the Modules page.
2. Navigate to Structure > Features > UNI Events and enable the UNI Event Parser
feature. The UNI Events feature is also required.
3. Assign Event Feed content type create, edit, and delete permissions to roles 
as required. This is generally an administrative task, since an Event Feed is
built and configured only once.
4. Create Event Feed at Content > Add content > Event Feed. You will need your 
departmental XML feed from http://www.uni.edu/unicalendar/rssxmlandicalfeeds


IMPORTANT CONFIGURATION INFORMATION
-----------------------------------

* On http://www.uni.edu/unicalendar/rssxmlandicalfeeds we recommend using the
"current and future events for a department" feed since it will keep all future 
events in sync with the UNI Calendar, but not check on past events.

* Need to pull in multiple feeds? No problem! Just create a separate Event Feed 
node per XML feed.

* If an item is deleted from UNI Calendar, it WILL NOT be deleted from your
site. This must be done manually.




CONTENTS OF THIS FILE
---------------------

* Introduction
* Differences between Drupal 6 and Drupal 7 versions
* Installation

INTRODUCTION
------------

The UNI Events feature builds a content type that is compatible with the
UNI Calendar (http://www.uni.edu/unicalendar). It does not, however, sync or 
pull from UNI Calendar. For that functionality, please download and enable 
the UNI Events Parser feature: http://www.uni.edu/features/uni-events-parser

Maintainers: Brandon Neil (bneil) and Abu Audu (audua)


DIFFERENCES BETWEEN DRUPAL 6 AND DRUPAL 7 VERSIONS
--------------------------------------------------

For Drupal 7, Calendar (http://drupal.org/project/calendar) integration has
been removed. Instead, a separate project, UNI Events FullCalendar 
(http://www.uni.edu/features/uni-events-fullcalendar) has been created 
utilizing the FullCalendar module (http://drupal.org/project/fullcalendar) 
and library (http://arshaw.com/fullcalendar/).


INSTALLATION
------------

1. Enable the Features module at the Modules page.
2. Navigate to Structure > Features > UNI Events and enable the UNI Events
feature.
3. Assign Event content type create, edit, and delete permissions to roles as
usual.



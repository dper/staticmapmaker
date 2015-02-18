staticmapmaker
==============

A PNG map maker for [OpenStreetMap](http://www.openstreetmap.org) and similar tile servers.


Why
===

This program is useful for people who want to make static maps.  You can take screenshots from OpenStreetMap easily enough, and if that's all you need, don't bother with this.  What this program lets you do is specify the precise size and location of your map, then add a few icons and lines, and then create the map image.  If you save the URL, you can update the map in the future by reloading the page.  This is particularly useful if you think the OpenStreetMap data for the target location will be improved in the future, you need a map now, and you'll want the improved map later.  Also, this program supports several different tile sources.  Each tile server renders the map in a different way, and it's easy to compare and choose your favorite using this.  The default OpenStreetMap layer is Mapnik, but there are other very nice layers too.  Finally anyone can run this program, so even if one map making server goes down, you can easily recreate the map later on another server by changing the base part of the URL.


Installing on Debian
====================


Here are some installation instructions for Debian with Apache.  Something very similar should work for other Linux distributions.  First, get the source from GitHub.

    $ git clone https://github.com/dper/staticmapmaker

Some PHP packages are required.  If you're not using Apache, you don't need the Apache one.

    # apt-get install php5 php5-gd libapache2-mod-php5
    
Ensure that the module is installed.  It should be, if you installed it like above.

    # a2enmod php5
    This module is already enabled!

Put the code into a web-accessible location.  For example, `/var/www/`.

    # mv staticmapmaker /var/www/

Make the cache directory and ensure the web server has write privileges to it.  This is the only location where write permission is needed.

    # cd /var/www/staticmapmaker
    # mkdir -p cache/tiles
    # chown -R www-data:www-data cache

Heavy tile usage could get you banned from the tile servers.  If you have a publicly accessible machine, consider adding password protection to avoid this.  In Apache, you can restrict access in an `htaccess` file or by modifying the `apache2.conf` file.


Tile usage
==========

To make maps, this PHP program downloads map tiles from an external server.  The default server is the Mapnik server run by OpenStreetMap, and others are run by other groups.  Generally speaking, these groups discourage heavy use of tile downloading.  If you plan on running this program on occasion or for individual use, I imagine they won't mind a small amount of traffic.  However, if you plan to use it a lot, you might want to ask permission from whoever is running the tile servers you use.  Or, if you're highly motivated and have a powerful server to play with, you could run our own tile server.

* OpenStreetMap: <http://wiki.openstreetmap.org/wiki/Tile_usage_policy>
* OpenCycleMap: <http://thunderforest.com/terms/>

Also, you may find that some of the layers are not useful to you.  Or you might find some new layers you'd like to add.  Layer information is in `layers.php.inc`, which can easily be modified according to the user's needs.


History
=======

This is a fork of [StaticMap](http://wiki.openstreetmap.org/wiki/StaticMap).  StaticMap's last major update was in 2009, and since then, some tile servers have gone offline and others have come online.

StaticMap was written largely by [Ojw](http://wiki.openstreetmap.org/wiki/User:Ojw).  The source code for that project is available via [Subversion](http://svn.openstreetmap.org/sites/other/StaticMap/).  This project is based on a clone of Changeset 16648 (Revision 29820).

When asked about the license for StaticMap on Twitter, Ojw said the source code could be considered BSD-licensed.

    Dear @almien, I've been playing around with #StaticMap recently. Very fun! Is it freely licensed? I looked at the source but dunno. #OSM

    @dpp0 you're welcome to treat http://svn.openstreetmap.org/sites/other/StaticMap/ … as BSD-licensed, I'll try to update those files at some point.


Troubleshooting
===============

If you're having trouble on installation, you might have a situation where the site seems to load, and even the Creative Commons logo appears, but you don't see any maps.  Some likely scenarios and solutions are:

* Your cache file is not writable by your web server.  Make sure that the user running your web server has write access to the cache.  For me on Debian, the user is `www-data`.
* PHP is not working properly.  Try testing PHP with some other simple example scripts.  Once they work, then return to this.
* You are missing some PHP dependencies.  The Debian dependencies are noted above.  However, if you use a different web server, or are running on a different operating system, the packages might not be the same.

Whatever the problem, you should take a look at the web server's log file.  It probably has the information you need to figure out what's going wrong.  If you're getting stuck, don't hesitate to ask for help.


Source
======

* Browse: <https://dperkins.org/git/gitlist/staticmapmaker.git/>.
* Clone: <https://dperkins.org/git/public/staticmapmaker.git/>.
* GitHub: <https://github.com/dper/staticmapmaker/>.


Contact
=======

If you want to contact the author, here are some ways.  Bug reports and improvements are always welcome.

* <https://microca.st/dper>
* <https://twitter.com/dpp0>
* <https://dperkins.org/tag/contact.html>
StaticMapMaker
==============

A PNG map maker for OpenStreetMap and similar tile servers.


Tile usage
==========

To make maps, this PHP program downloads map tiles from an external server.  The default server is the Mapnik server run by OpenStreetMap, and others are run by other groups.  Generally speaking, these groups discourage heavy use of tile downloading.  If you plan on running this program on occasion or for individual use, I imagine they won't mind the occasional traffic.  However, if you plan to use it a lot, you might want to ask permission from whoever is running the tile servers you use.

* OpenStreetMap: <http://wiki.openstreetmap.org/wiki/Tile_usage_policy>
* OpenCycleMap: <http://thunderforest.com/terms/>

History
=======

This is a fork of StaticMap (<http://wiki.openstreetmap.org/wiki/StaticMap>).  StaticMap's last major update was in 2009, and since then, some tile servers have gone offline and others have come online.

StaticMap was written largely by Ojw (<http://wiki.openstreetmap.org/wiki/User:Ojw>).  The source code for that project is available via Subversion at <http://svn.openstreetmap.org/sites/other/StaticMap/>.  This project is based on a clone of Changeset 16648 (Revision 29820).

When asked about the license for StaticMap on Twitter, Ojw said the source code could be considered BSD-licensed.

    Dear @almien, I've been playing around with #StaticMap recently. Very fun! Is it freely licensed? I looked at the source but dunno. #OSM

    @dpp0 you're welcome to treat http://svn.openstreetmap.org/sites/other/StaticMap/ … as BSD-licensed, I'll try to update those files at some point.

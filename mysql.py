#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
import MySQLdb

reload(sys)
sys.setdefaultencoding('utf-8')
assert sys.getdefaultencoding().lower() == "utf-8"

db = MySQLdb.connect(
        host='127.0.0.1',
        user='root',
        passwd='9e77e62048477a78cab0bfcfce455548',
        db='xzweb_pub',
        port=4306,
        charset='utf8')
cursor = db.cursor()
cursor.execute("select id,content from imtalkmsg limit 1000")
f = file("terms.txt", "w")

for i in cursor.fetchall():
    f.write(str(i))
    f.write("\n")

db.close();

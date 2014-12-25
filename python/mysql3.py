#!/usr/bin/env python
# encoding: utf-8

import mysql.connector as mysql
import sys

user = 'root'
pwd = '9e77e62048477a78cab0bfcfce455548'
host = '127.0.0.1'
db = 'xzweb_pub'
port = 4306

data_file = 'mysql-test.dat'

sql = "select id, content from imtalkmsg limit 1000"

cnx = mysql.connect(
        user=user,
        password=pwd,
        host=host,
        db=db,
        port=port)

cursor = cnx.cursor()

try:
    cursor.execute(sql)
except mysql.Error as err:
    print("query failed")
    print("Error: {}".format(err.msg))
    sys.exit()

for (id, content) in cursor:
    print(content)

cursor.close()
cnx.close()


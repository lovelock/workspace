<?php
# create
$book = R::dispense('book');
$book->title = 'Learn to Program';
$book->rating = 10;

# use array notation
$book['price'] = 29.99;

# store
$id = R::store($book);

# conventions
$page = R::dispense('page'); // valid

$page = R::dispense('Page'); // invalid
$page = R::dispense('cms_page'); // invalid
$page = R::dispense('@#!'); // invalid

$twoBooks = R::dispense('book', 2);

list($book, $page) = R::dispenseAll('book,page');
list($book, $page) = R::dispenseAll('book,page*2');

$book = R::load('book', $id);

$book->title = 'Learn to fly';
$book->rating = 'good';
$book->published = '2015-02-15';
R::store($book);

# delete
R::trash($book);
R::trashAll($books);

# delete all beans of a certain type
R::wipe('book');

# destroy the entire database
R::ruke();

# batch
$books = R::loadAll('book', $ids);

# reload
$bean = $bean->fresh();

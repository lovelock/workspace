 // this method is OK, function is not a variable
 /*
  *test();
  *
  *function test() {
  *    console.log('h');
  *}
  */


 /* this is not OK, because test is a variable, it can't be refered before it is defined.
  *test();
  *var test = function(){
  *    console.log('h');
  *};
  */

 /*
  * this is OK, it is refered after it is defined.
  * var test = function(){
  * console.log('h');
  * };
  * test();
  */

 /*
  *"use strict";
  */

 var var1 = ['test1', 'test2'];
 for (var i = 0; i < 2; i++) {
     console.log(var1[i]);
 }

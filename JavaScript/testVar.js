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

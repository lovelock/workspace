/*
 *(function doSomething() {
 *    console.log("hello, world");
 *})();
 */


/*
 *function doSomething() {
 *    console.log("hello, world");
 *}
 *
 *doSomething();
 */

var test = (function () {
    for (var i = 0; i < 5; i++) {
        return i;
    }
})()

console.log(test);

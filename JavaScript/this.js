/*
 *function test() {
 *    this.x = 1;
 *    console.log(this.x);
 *}
 *
 *test();
 */

var x = 1;

function test() {
    this.x = 0;
    console.log(this.x);
}

test();
console.log(x);

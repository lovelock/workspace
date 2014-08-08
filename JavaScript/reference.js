/*
 *var a = ['1', '2', '3'];
 *
 *var b = a[1];
 *console.log(a[1]);
 *console.log(b);
 *
 *a[1] = '5';
 *
 *console.log(a[1]);
 *console.log(b);
 *console.log(a);
 */


var a = [{
    yellow: 'blue'
}, {
    red: 'cyan'
}, {
    green: 'magenta'
}];
console.log(a);
console.log(a[1]);
var b = a[1];
console.log(b);

a[1].red = 'tan';
console.log(b);
b.red = 'black';
console.log(b.red);

console.log('a[1]' + a[1].red);

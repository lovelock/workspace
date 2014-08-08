function f(a, b, c){
    a = 3;
    b.push('foo');
    c.first = false;
}

var x = 4;
var y = ['kkd', 'kdsfjsadkf', 'jfkdsjfks'];
var z = {first: true}

console.log(x);
console.log(y);
console.log(z.first);

f(x, y, z);
console.log(x);
console.log(y);
console.log(z.first);
//var bin = new Buffer('hello', 'utf-8');
//console.log(bin.length);
//bin[0] = 0x48;
//console.log(bin[0]);

/*
 *var sub = bin.slice(2);
 *
 *sub[0] = 0x65;
 */
//console.log(bin.toString('utf-8'));

/*
 *var str = bin.toString('utf-8');
 *console.log(str);
 */


var bin = new Buffer([0x68, 0x65, 0x6c, 0x6c, 0x6f]);
var dup = new Buffer(bin.length);

bin.copy(dup);
dup[0] = 0x48;

console.log(bin);
console.log(dup);

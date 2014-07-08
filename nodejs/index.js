var examples = {
    a: 'a',
    b: 'b'
};

var some = {};
var example;
for (example in examples) {
    if (examples.hasOwnProperty(example)) {
        some[example] = examples[example];
    }
}
console.log(some.b);

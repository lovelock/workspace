"use esnext";
class Calc {
    constructor () {
        "use strict";
        console.log('Calc constructor');
    }
    add(a, b) {
        "use strict";
        return a + b;
    }
}

var c = new Calc();
console.log(c.add(4, 5));


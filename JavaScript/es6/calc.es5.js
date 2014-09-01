"use esnext";
var Calc = function Calc() {
  "use strict";
  console.log('Calc constructor');
};
($traceurRuntime.createClass)(Calc, {add: function(a, b) {
    "use strict";
    return a + b;
  }}, {});
var c = new Calc();
console.log(c.add(4, 5));

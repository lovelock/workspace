// "use strict";

test.execute();

function test() {
    execute: function () {
        this.var1();
        this.var2();
    },
    var1: function () {
        console.log('i am here');
    },
    var2: function () {
        console.log('i am not here');
    }
};

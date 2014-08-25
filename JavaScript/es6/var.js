var a = [];

for (var i = 0; i < 10; i++) {
    let c = i;
    a[i] = function () {
        console.log(c);
    };
}

a[6]();

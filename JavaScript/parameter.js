var test = function (a, b, c) {
    if (!arguments[0]){
        return null;
    }
    console.log(arguments[0]);
    console.log(arguments[1]);
    console.log(arguments[2]);
};

var fuck1 = true,
    fuck2 = 3,
    fuck3 = 'http';
test(fuck1, fuck2, fuck3);

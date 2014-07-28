/*
 *function greeting(name) {
 *    var text = 'Hello ' + name;
 *    return function () {
 *        console.log(text);
 *    }
 *}
 *
 *var sayHello = greeting('closure');
 *sayHello();
 */

/*
 * 闭包中使用的是引用，而不是拷贝
 */
/*
 *function say667(){
 *    var num = 666;
 *    var sayAlert = function() {
 *        console.log(num);
 *    }
 *    num++;
 *    return sayAlert;
 *}
 *
 *var sayAlert = say667();
 *sayAlert();
 */

/*
 * 多个函数绑定一个闭包，因为它们定义在同一个函数内
 */
/*
 *function setupSomeGlobals() {
 *    var num = 666;
 *    gAlertNumber = function () {
 *        console.log(num);
 *    }
 *    gIncreaseNumber = function () {
 *        num++;
 *    }
 *    gSetNumber = function (x) {
 *        num = x;
 *    }
 *}
 *
 *setupSomeGlobals();
 *gAlertNumber();
 *gIncreaseNumber();
 *gAlertNumber();
 *gSetNumber(12);
 *gAlertNumber();
 */

function buildList(list) {
    var result = [];
    for (var i = 0; i < list.length; i++) {
        var item = 'itme' + list[i];
        result.push(function () {
            console.log(item + ' ' + list[i]);
        });
    }
    return result;
}

function testList() {
    var fnlist = buildList([1, 2, 3]);
    for (var j = 0; j < fnlist.length; j++) {
        fnlist[j]();
    }
}

/*
 *var arr = {
 *    'arr1': 'test1',
 *    'arr2': 'test2'
 *};
 *
 *for (var i in arr) {
 *    console.log(arr[i]);
 *}
 *
 *if ('undefined' === typeof a) {
 *    return a;
 *}
 */

/*
 *for (var i = 2; i--; i < 0) {
 *    console.log(i);
 *}
 */

/*
 *var arr = ['arr', 'kd', 'kdjfs'];
 *console.log(typeof arr);
 *
 *var str = 'string';
 *console.log(str);
 */

var user = 'frost',
    id = '10101021';

var tags = {
    'user': user,
    'id': id
};

for (var tag in tags){
    console.log(tag);
    console.log(tags.tag);
}

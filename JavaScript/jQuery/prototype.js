/*
 *var Dog = function(name) {
 *    this.name = name;
 *    // this.species = '狗';
 *}
 *
 *Dog.prototype = {
 *    species: '狗'
 *}
 *var dogA = new Dog('大黄');
 *var dogB = new Dog('小黑');
 *
 *console.log(dogA.name);
 *console.log(dogB.name);
 *
 *console.log(dogA.species);
 *console.log(dogB.species);
 *
 *dogA.species = '人类';
 *
 *console.log(Dog.prototype.species);
 *console.log(dogA.species);
 *console.log(dogB.species);
 */

/*
 *var obj = new Object();
 *obj.prototype.test = function() {
 *    alert('hello');
 *};
 *
 *function MyObject() {}
 *MyObject.prototype.test = function(){
 *    alert('OK');
 *};
 */

/*
 *function Person() {
 *    this.name = 12;
 *}
 *
 *console.log(Person.prototype);
 *console.log(Person.prototype.constructor);
 *console.log(Person.prototype.constructor.prototype.constructor);
 */

function Person() {}

Person.prototype.name = 'xiaoming';
var p1 = new Person();
console.log(p1);

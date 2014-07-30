var Command = new Interface('Command', ['execute']);
var Composite = new Interface('Composite', ['add', 'remove', 'getChild', 'getElement']);
var MenuObject = new Interface('MenuObject', ['show']);


var MenuBar = function(){
    this.menus = {};
    this.element = document.createElement('ul');
    this.element.style.display = 'none';
};

MenuBar.prototype = {
    add:function(menuObject){
        Interface.ensureImplements(menuObject, Composite, MenuObject);
        this.menus[menuObject.name] = menuObject;
        this.element.appendChild(this.menus[menuObject.name].getElement());
    },
    remove: function(name){
        delete this.menus[name];
    },
    getChild: function(name){
        return this.menus[name];
    },
    getElement: function(){
        return this.element;
    },
    show: function(){
        this.element.style.display = 'block';
        for (name in this.menus){
          this.menus[name].show();
        }
    }
};


var Menu = function(name){
  this.name =name;
  this.items ={};
  this.element = document.createElement('li');
  this.element.innerHTML = this.name;
  this.element.style.display = 'none';
  this.container = document.createElement('ul');
  this.element.appendChild(this.container);
};

Menu.prototype = {
  add: function(menuItemObject){
    Interface.ensureImplements(menuItemObject, Composite, MenuObject);
    this.items[menuItemObject.name] = menuItemObject;
    this.container.appendChild(this.items[menuItemObject.name].getElement());
  },
  
}

(function(){
    var CarManager = {
        requestInfo: function(model, id){
            return 'the information for ' + model + ' with ID ' + id + 'is foobar.'
        },
        buyVehicle: function(model, id){
            return 'You have successfully purchased Item ' + id + ', a ' + model;
        },
        arrangeViewing: function(model, id){
            return 'You have successfully booked a viewing for ' + model + '(' + id + ')';
        }
    };

CarManager.execute = function(command){
    return CarManager[command.request](command.model, command.carID);
};

console.log(CarManager.execute({request: "arrangeViewing", model: 'Ferrari', carID: '152334'}));
console.log(CarManager.execute({request: "requestInfo", model: 'Ford Escort', carID: 'fksdfskf'}));
console.log(CarManager.execute({request: "arrangeViewing", model: 'Ferrari', carID: 'dfsjdfjafja'}));
})();
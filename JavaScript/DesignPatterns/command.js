var AdCommand = new Interface('AdCommand', ['execute']);

var StopAd = function (adObject) {
    this.ad = adObject;
};

StopAd.prototype.execute = function () {
    this.ad.stop();
};

var StartAd = function (adObject) {
    this.ad = adObject;
};

StartAd.prototype.execute = function () {
    this.ad.start();
};

var ads = getAds();
for (var i = 0, len = ads.length; i < len; i++) {
    var startCommand = new StartAd(ads[i]);
    var stopCommand = new StopAd(ads[i]);

    new UiButton('Start' + ads[i].name, startCommand);
    new UiButton('Stop' + ads[i].name, stopCommand);
}


var SimpleCommand = function (receiver) {
    this.receiver = receiver;
}

SimpleCommand.prototype.execute = function () {
    this.receiver.action();
}

var ComplexCommand = function () {
    this.logger = new Logger();
    this.xhrHandler = XhrManager.createXhrHandler();
    this.parameters = {};
};

ComplexCommand.prototype = {
    setParameter: function (key, value) {
        this.parameters[key] = value;
    },
    execute: function () {
        this.logger.log('Executing command');
        var postArray = [];
        for (var key in this.parameters) {
            postArray.push(key + '=' + this.parameters[key]);
        }

        var postString = postArray.join('&');
        this.xhrHandler.request(
            'POST',
            'script.php',
            function () {},
            postString
        );
    }
};

var GreyAreaCommand = function (receiver) {
    this.logger = new Logger();
    this.receiver = receiver;
};

GreyAreaCommand.prototype.execute = function () {
    this.logger.log('Executing command');
    this.receiver.prepareAction();
    this.receiver.action();
};

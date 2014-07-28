var obj = {};

var Pocker = {
    Title: "K",
    Style: "spade",
    Value: 13,
    State: 1
};


Object.defineProperties(
    Poker, {
        "backgroundImg": {
            value: "images\\common\\hide.png",
            enumerable: false,
            writable: false
        },
        "forgroundImg": {
            value: "images\\spade\\K.png",
            enumerable: false,
            writable: false
        },
        Img: {
            get: function () {
                return this.State === 0 ? this.backgroundImg : this.forgroundImg;
            },
            enumerable: true
        }
    });

alert(Poker.Img);

for (var key in Poker) {
    alert(key);
}


alert(Poker.backgroundImg);
Poker.backgroundImg = "xxx";
alert(Poker.backgroundImg);

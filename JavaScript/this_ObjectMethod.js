var point = {
	x : 0,
	y : 0,
	moveTo : function(x, y) {
		this.x = this.x + x;
		this.y = this.y + y;
	}
};

point.moveTo(1, 1);
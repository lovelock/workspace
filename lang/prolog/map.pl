diffrent(red, green). diffrent(red, blue).
diffrent(green, red). diffrent(green, blue).
diffrent(blue, red). diffrent(blue, green).

coloring(Alabama, Mississippi, Georgia, Tennessee, Florida) :-
	diffrent(Mississippi, Tennessee),
	diffrent(Mississippi, Alabama),
	diffrent(Alabama, Tennessee),
	diffrent(Alabama, Mississippi),
	diffrent(Alabama, Florida),
	diffrent(Alabama, Georgia),
	diffrent(Georgia, Florida),
	diffrent(Georgia, Tennessee).



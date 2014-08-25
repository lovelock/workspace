var rs = fs.createReadStream(pathname);

rs.on('data', function(chunk) {
    rs.pause();
    doSomething(chunk, function() {
        rs.resume();
    });
});

rs.on('end', function() {
    cleanUp();
});

(function () {
    console.log('outer function');
    (function () {
        console.log('inner');
    })()
})()

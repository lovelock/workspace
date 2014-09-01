var fs = require('fs');

/* for small files */
/*
 *function copy(src, dst) {
 *    fs.writeFileSync(dst, fs.readFileSync(src));
 *}
 */

/* for large files */
function copy(src, dst) {
    fs.createReadStream(src).pipe(fs.createWriteStream(dst));
}

function main(argv) {
    copy(argv[0], argv[1]);
}

main(process.argv.slice(2));

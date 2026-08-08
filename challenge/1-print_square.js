#!/usr/bin/node
/*
 * Print a square of size size
 */

if (process.argv.length <= 2) {
    console.error("Missing size");
    console.error("Usage: ./1-print_square.js <size>");
    process.exit(1);
}

// FIX: Change 16 to 10 so it parses as decimal, not hexadecimal
const size = parseInt(process.argv[2], 10);

for (let i = 0; i < size; i++) {
    let row = "";
    for (let j = 0; j < size; j++) {
        row += "#";
    }
    console.log(row);
}

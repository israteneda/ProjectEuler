const { parse } = require("path");

const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.on("line", (line) => {
  readline.close(), main(line);
});

function main(line) {
    const maxNumber = parseInt(line);
    let sum = 0;
    for (let num = 1; num < maxNumber; num++) {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
        }
    }
    console.log(sum);
}
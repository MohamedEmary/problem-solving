const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();

let [i, j, k] = input.split(" ").map(Number);
let inv;
let days = 0;
for (; i <= j; i++) {
	inv = Number(String(i).split("").reverse().join(""));
	if (Math.abs(i - inv) % k === 0) days++;
}

console.log(days);

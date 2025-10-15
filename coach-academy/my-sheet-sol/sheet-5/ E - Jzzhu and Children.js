const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim().split("\n");
const m = Number(input[0].split(" ")[1]);
input = input
	.splice(1)[0]
	.split(" ")
	.map(Number)
	.map((v, i) => [v, i + 1]);

while (input.length > 1) {
	const [num, i] = input[0];
	input.shift();
	if (num > m) input.push([num - m, i]);
}
console.log(input[0][1]);

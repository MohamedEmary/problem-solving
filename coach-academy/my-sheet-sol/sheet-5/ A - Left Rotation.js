const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n");

const d = input[0].split(" ")[1];
const arr = input[1].split(" ");

rotateLeft(arr, d);

function rotateLeft(arr = [], d) {
	const numsAtEnd = arr.splice(d);
	arr.unshift(...numsAtEnd);
	console.log(arr.join(" "));
}

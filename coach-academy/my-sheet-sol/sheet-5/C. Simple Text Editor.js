const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n").splice(1);
let str = "";
// Make those below an array of arrays
let prevOperations = [];
for (const operation of input) {
	const num = operation.split(" ")[0];
	if (num === "1") {
		prevOperations.push(["1", operation.split(" ")[1]]);
		str += operation.split(" ")[1];
	} else if (num === "2") {
		const k = operation.split(" ")[1];
		prevOperations.push(["2", str.slice(str.length - k)]);
		str = str.slice(0, str.length - k);
	} else if (num === "3") console.log(str[Number(operation.split(" ")[1]) - 1]);
	else {
		let [prevNum, prevStr] = prevOperations.pop();
		// undo logic
		if (prevNum === "1") str = str.slice(0, str.length - prevStr.length);
		else str += prevStr;
	}
}

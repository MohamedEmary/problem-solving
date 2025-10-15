const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n").splice(1);
const q = [];
for (const operation of input) {
	const [op, val] = operation.split(" ");
	if (op === "1") q.push(val);
	else if (op === "2") q.shift();
	else console.log(q[0]);
}

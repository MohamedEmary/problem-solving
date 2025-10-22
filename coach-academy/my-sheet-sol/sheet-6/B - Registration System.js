const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n").splice(1);
const names = new Set();
for (const str of input) {
	if (!names.has(str)) {
		names.add(str);
		console.log("OK");
	} else {
		let i = 1;
		let alternative = str + i;
		while (names.has(alternative)) alternative = `${str}${i++}`;
		names.add(alternative);
		console.log(alternative);
	}
}

/* 

4
abacaba
acaba
abacaba
acab

OK
OK
abacaba1
OK




6
first
first
second
second
third
third


OK
first1
OK
second1
OK
third1

*/

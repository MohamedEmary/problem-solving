const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();

let [n, w] = input.split("\n");

if (Number(n) < 24) console.log("NO");
else {
	w = w.toLowerCase();
	const letters = new Set();
	for (const c of w) letters.add(c);

	if (letters.size === 26) console.log("YES");
	else console.log("NO");
}

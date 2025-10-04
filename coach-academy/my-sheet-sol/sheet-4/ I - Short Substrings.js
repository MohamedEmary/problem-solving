const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n").slice(1);
for (const word of input) {
	if (word.length === 2) console.log(word);
	else {
		let result = word.slice(0, 1);
		for (let i = 1; i < word.length - 1; i += 2) result += word[i];
		result += word[word.length - 1];

		console.log(result);
	}
}

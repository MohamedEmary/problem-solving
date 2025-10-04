const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();

if (input.endsWith("AM")) {
	if (input.slice(0, 2) === "12") console.log("00" + input.slice(2, -2));
	else console.log(input.slice(0, -2));
} else {
	if (input.slice(0, 2) === "12") console.log(input.slice(0, -2));
	else {
		const hour = Number(input.substring(0, 2)) + 12;
		console.log(hour + input.slice(2, -2));
	}
}
// 12:05:45PM
// 01:05:45AM

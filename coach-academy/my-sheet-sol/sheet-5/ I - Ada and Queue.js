const fs = require("fs");
const input = fs
	.readFileSync(0, "utf8")
	.trim()
	.split("\n")
	.splice(1)
	.map((item) => item.split(" "));

const deque = [];
let reversed = false;
for (const arr of input) {
	let operation = arr[0];

	// instead of reversing the deque in O(n), we just swap the operations in O(1)
	if (reversed) {
		if (operation === "front") operation = "back";
		else if (operation === "back") operation = "front";
		else if (operation === "toFront") operation = "push_back";
		else if (operation === "push_back") operation = "toFront";
	}

	if ((operation === "front" || operation === "back") && deque.length === 0) {
		console.log("No job for Ada?");
		continue;
	}

	if (operation === "front") console.log(deque.shift());
	else if (operation === "back") console.log(deque.pop());
	else if (operation === "reverse") reversed = !reversed;
	else if (operation === "toFront") deque.unshift(arr[1]);
	else if (operation === "push_back") deque.push(arr[1]);
}

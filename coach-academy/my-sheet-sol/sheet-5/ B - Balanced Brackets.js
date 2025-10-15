const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n");

for (let i = 1; i < input.length; i++) isBalanced(input[i]);

function isBalanced(brackets = "") {
	brackets = brackets.split("");
	const stk = [];
	const bracketsObj = { ")": "(", "]": "[", "}": "{" };

	for (let i = 0; i < brackets.length; i++)
		if (Object.values(bracketsObj).includes(brackets[i])) stk.push(brackets[i]);
		else {
			if (stk[stk.length - 1] === bracketsObj[brackets[i]]) stk.pop();
			else {
				console.log("NO");
				return;
			}
		}

	if (stk.length === 0) console.log("YES");
	else console.log("NO");
}

/* 

3
{[()]}
{[(])}
{{[[(())]]}}

*/

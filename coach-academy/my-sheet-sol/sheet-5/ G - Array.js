const fs = require("fs");
const input = fs
	.readFileSync(0, "utf8")
	.trim()
	.split("\n")
	.splice(1)[0]
	.split(" ")
	.map(Number);

const zeros = [];
const gtZero = [];
const ltZero = [];

for (const num of input) {
	if (num > 0) gtZero.push(num);
	else if (num < 0) ltZero.push(num);
	else zeros.push(num);
}

// check if gtZero is empty
// we need only to check the length for the gtZero array
//
// for zeros it will always have at least on zero. If we don't have zeros we
// will not be able to get a product of zero
//
// also the ltZero array will always have at least one item because if it was
// empty then how will we get a product less than zero
if (gtZero.length === 0) {
	// push two items from ltZero into gtZero and two items not just
	// one because we want the product to be greater than zero
	gtZero.push(ltZero.pop());
	gtZero.push(ltZero.pop());
}
// check if the length of ltZero is even because that will cause a positive
// product so we will need to move a number into the zeros arr
if (ltZero.length % 2 === 0) {
	zeros.push(ltZero.pop());
}

console.log(ltZero.length, ltZero.join(" "));
console.log(gtZero.length, gtZero.join(" "));
console.log(zeros.length, zeros.join(" "));

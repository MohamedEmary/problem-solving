const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();
const [vowel] = [...input];
console.log(["a", "e", "i", "o", "u"].includes(vowel) ? "vowel" : "consonant");

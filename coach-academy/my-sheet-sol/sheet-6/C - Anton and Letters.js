const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().slice(1, -1);

if (input) console.log(new Set(input.split(", ")).size);
else console.log(0);

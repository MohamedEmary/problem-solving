const fs = require("fs");
const input = new Set(fs.readFileSync(0, "utf8").trim().split(""));

if (input.size % 2 === 0) console.log("CHAT WITH HER!");
else console.log("IGNORE HIM!");

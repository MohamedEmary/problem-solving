const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n").splice(1);
const chats = new Set();
for (let i = input.length - 1; i >= 0; i--) chats.add(input[i]);
for (const item of Array.from(chats)) console.log(item);

const crypto = require("crypto");

// MD5 hash
function getMD5Hash(str) {
  const hexHash = crypto.createHash("md5").update(str).digest("hex");
  return BigInt("0x" + hexHash);
}

// Example usage
const str = "hello world";
console.log(`MD5 hash of "${str}": ${getMD5Hash(str)}`);

for (const element of arr) {
  console.log(element);
}



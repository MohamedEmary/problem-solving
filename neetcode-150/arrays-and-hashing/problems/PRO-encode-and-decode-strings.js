/**
 * @param {string[]} strs
 * @returns {string}
 */
function encode(strs) {
  if (strs.length === 0 || (strs.length === 1 && strs[0] === "")) return strs;

  return strs.join(";#");
}

/**
 * @param {string} str
 * @returns {string[]}
 */
function decode(str) {
  if (typeof str === "string") {
    return str.split(";#");
  }

  if (str.length === 0) return str;
  if (str.length === 1 && str[0] === "") return str;
}

console.log(encode(["neet", "code", "love", "you"]));
console.log(decode(encode(["neet", "code", "love", "you"])));

console.log(encode([""]));
console.log(decode(encode([""])));

console.log(encode([]));
console.log(decode(encode([])));

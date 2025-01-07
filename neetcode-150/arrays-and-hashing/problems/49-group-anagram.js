/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  const dict = new Map();
  for (const str of strs) {
    // my key is the sorted string
    // values are arrays of strings
    const sortedStr = str.split("").sort().join("");
    if (dict.get(sortedStr)) {
      dict.get(sortedStr).push(str);
    } else {
      dict.set(sortedStr, [str]);
    }
  }
  return Array.from(dict.values());
};

console.log(groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]));
console.log(groupAnagrams([""]));
console.log(groupAnagrams(["a"]));

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  if (s.length !== t.length) return false;

  const sDict = new Map();
  const tDict = new Map();

  for (const char of s)
    sDict.has(char) ? sDict.set(char, sDict.get(char) + 1) : sDict.set(char, 1);

  for (const char of t)
    tDict.has(char) ? tDict.set(char, tDict.get(char) + 1) : tDict.set(char, 1);

  if (sDict.size !== tDict.size) return false;

  for (const [key, value] of sDict) {
    if (tDict.get(key) !== value) {
      return false;
    }
  }
  return true;
};

console.log(isAnagram("anagram", "nagaram"));

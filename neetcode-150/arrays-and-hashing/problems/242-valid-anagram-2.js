/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
  if (s.length !== t.length) return false;

  const sDict = new Map();

  for (const char of s)
    sDict.has(char) ? sDict.set(char, sDict.get(char) + 1) : sDict.set(char, 1);

  for (const char of t) {
    if (!sDict.has(char)) return false;
    else sDict.set(char, sDict.get(char) - 1);
  }

  for (const value of sDict.values()) if (value !== 0) return false;

  return true;
};

/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
    s = s
        .trim()
        .toLowerCase()
        .replace(/[^a-z0-9]/gi, "");
    let l = 0;
    let r = s.length - 1;

    while (l < r) {
        if (s[l] !== s[r]) return false;
        l++;
        r--;
    }
    return true;
};
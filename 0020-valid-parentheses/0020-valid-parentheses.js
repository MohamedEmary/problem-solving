/**
 * @param {string} s
 * @return {boolean}]
 */
var isValid = function (s) {
    if (s.length % 2 !== 0) return false;

    const map = new Map([
        [")", "("],
        ["]", "["],
        ["}", "{"],
    ]);

    let stack = [];
    let open = new Set(["(", "[", "{"]);

    for (const char of s) {
        if (open.has(char)) stack.push(char);
        else if (stack.pop() !== map.get(char)) return false;
    }

    return stack.length === 0;
};
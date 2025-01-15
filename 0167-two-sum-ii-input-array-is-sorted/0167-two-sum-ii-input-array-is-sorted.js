/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (numbers, target) {
    let l = 0;
    let r = numbers.length - 1;

    // since it's guaranteed that there is only one solution
    // we can use while true
    let num;
    while (true) {
        num = numbers[l] + numbers[r];
        if (num === target) return [l + 1, r + 1];
        if (num > target) r -= 1;
        if (num < target) l += 1;
    }
};
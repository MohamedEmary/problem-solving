/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
    if (nums.length === 0) return 0;
    const set = new Set(nums);
    let max = 0;
    set.forEach((num) => {
        if (!set.has(num - 1)) {
            let count = 1;
            while (set.has(num + 1)) {
                count += 1;
                num++;
            }
            max = max > count ? max : count;
        }
    });

    return max;
};
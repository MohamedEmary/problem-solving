/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    // Without using extra space
    const res = new Map();
    nums = nums.sort((a, b) => a - b);

    for (let i = 0; i < nums.length; i++) {
        const mainNum = nums[i];
        let l = i + 1;
        let r = nums.length - 1;
        while (l < r) {
            let resultNum = nums[l] + nums[r] + mainNum;
            if (resultNum === 0) {
                const resArr = [nums[l], nums[r], nums[i]];
                res.set(resArr.sort((a, b) => a - b).join(""), resArr);
                l++;
                r--;
                while (l < r && nums[l] === nums[l - 1]) {
                    l++;
                }
            }
            if (resultNum > 0) r--;
            if (resultNum < 0) l++;
        }
    }
    return Array.from(res.values());
};
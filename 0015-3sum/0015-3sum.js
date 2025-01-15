/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {


    // Without using extra space
    const res = [];
    nums = nums.sort((a, b) => a - b);
    for (let i = 0; i < nums.length; i++) {
        if (i > 0 && nums[i] === nums[i - 1]) continue;
        const mainNum = nums[i];
        let l = i + 1;
        let r = nums.length - 1;
        while (l < r) {
            let resultNum = nums[l] + nums[r] + mainNum;
            if (resultNum === 0) {
                res.push([nums[l], nums[r], nums[i]]);
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
    return res;
};
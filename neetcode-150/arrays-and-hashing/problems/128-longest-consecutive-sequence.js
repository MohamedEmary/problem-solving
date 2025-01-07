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

let nums = [100, 4, 200, 1, 3, 2];
console.log(longestConsecutive(nums));

nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1];
console.log(longestConsecutive(nums));

nums = [0];
console.log(longestConsecutive(nums));

nums = [];
console.log(longestConsecutive(nums));

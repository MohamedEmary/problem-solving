/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  let l = 0;
  let r = nums.length - 1;
  const sorted = [...nums].sort((a, b) => a - b);
  while (true) {
    const sum = sorted[l] + sorted[r];
    if (sum === target) break;
    sum > target ? r-- : l++;
  }

  return [nums.indexOf(sorted[l]), nums.lastIndexOf(sorted[r])];
};
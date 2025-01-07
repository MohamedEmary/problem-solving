// Solution using two pointers
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
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

let nums = [2, 11, 15, 7];
console.log(twoSum(nums, 9));

nums = [3, 2, 4]; // [2, 3, 4]
console.log(twoSum(nums, 6));

nums = [3, 3]; // 6 = 3+3
console.log(twoSum(nums, 6));

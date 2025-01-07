// Solution using dictionary
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  const dict = new Map();
  let index = 0;
  for (const num of nums) {
    if (dict.get(num)) {
      dict.get(num).push(index);
    } else {
      dict.set(num, [index]);
    }
    index++;
  }

  for (const num of nums) {
    if (dict.has(target - num)) {
      if (dict.get(num) !== dict.get(target - num)) {
        return [dict.get(num)[0], dict.get(target - num)[0]];
      } else if (
        dict.get(num) === dict.get(target - num) &&
        dict.get(target - num).length > 1
      ) {
        return [dict.get(num)[0], dict.get(target - num)[1]];
      }
    }
  }
};

let nums = [2, 7, 11, 15];
console.log(twoSum(nums, 9));

nums = [3, 2, 4];
console.log(twoSum(nums, 6));

nums = [3, 3];
console.log(twoSum(nums, 6));

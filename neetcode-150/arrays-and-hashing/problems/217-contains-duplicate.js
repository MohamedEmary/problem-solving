/**
 * @param {number[]} nums
 * @return {boolean}
 */
function containsDuplicate(nums = []) {
  const dict = new Set(); //
  for (const num of nums) {
    if (dict.has(num)) {
      return true;
    } else {
      dict.add(num);
    }
  }
  return false;
}

// let nums = [1, 2, 3, 1];
// console.log(containsDuplicate(nums));

// nums = [1, 2, 3, 4];
// console.log(containsDuplicate(nums));

// nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2];
// console.log(containsDuplicate(nums));

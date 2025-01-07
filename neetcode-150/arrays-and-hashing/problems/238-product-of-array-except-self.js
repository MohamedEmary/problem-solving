/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
  if (nums.length === 1) return nums;

  let product = 1;
  let zeroCount = 0;
  let productNoZero = 1;

  for (const num of nums) {
    if (num === 0) zeroCount += 1;
    product *= num;
    if (num !== 0 && zeroCount <= 1) productNoZero *= num;
  }

  if (zeroCount > 1) return new Array(nums.length).fill(0);
  if (zeroCount === 1) {
    const res = new Array(nums.length).fill(0);
    res[nums.indexOf(0)] = productNoZero;
    return res;
  } else {
    // no zero
    const res = [];
    for (const num of nums) res.push(product / num);
    return res;
  }
};

console.log(productExceptSelf([1, 2, 3, 4]));
console.log(productExceptSelf([-1, 1, 0, -3, 3]));

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
  let prefix = [nums[0]];
  nums.forEach((num, i) =>
    i !== 0 ? prefix.push(prefix[prefix.length - 1] * num) : ""
  );

  let postfix = [nums[nums.length - 1]];
  for (let i = nums.length - 2; i >= 0; i--) {
    postfix.unshift(nums[i] * postfix[0]);
  }

  /* 
    nums.reverse();
    let postfix = [nums[0]];
    nums.forEach((num, i) => (i !== 0 ? postfix.unshift(postfix[0] * num) : ""));
    nums.reverse();
  */

  const res = [];
  for (let i = 0; i < nums.length; i++) {
    if (i === 0) res.push(postfix[1]);
    else if (i === nums.length - 1) res.push(prefix[i - 1]);
    else res.push(prefix[i - 1] * postfix[i + 1]);
  }
  return res;
};

console.log(productExceptSelf([1, 2, 3, 4]));
console.log(productExceptSelf([-1, 1, 0, -3, 3]));

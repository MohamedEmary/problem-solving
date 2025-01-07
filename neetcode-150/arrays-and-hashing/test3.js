var productExceptSelf = function (nums) {
  const output = Array(nums.length).fill(1);

  let left = 1;
  for (let i = 0; i < nums.length; i++) {
    output[i] *= left;
    left *= nums[i];
  }

  let right = 1;
  for (let i = nums.length - 1; i >= 0; i--) {
    output[i] *= right;
    right *= nums[i];
  }

  return output;
};

console.log(productExceptSelf([1, 2, 3, 4]));
console.log(productExceptSelf([-1, 1, 0, -3, 3]));

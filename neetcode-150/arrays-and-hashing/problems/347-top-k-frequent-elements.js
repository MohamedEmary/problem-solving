/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
  const freq = {};
  for (const num of nums) freq[num] ? freq[num]++ : (freq[num] = 1);
  nums = Object.entries(freq); // [[k,v],[k,v]]
  nums.sort((a, b) => b[1] - a[1]); // n.log(n)
  const res = [];
  for (let i = 0; i < k; i++) {
    res.push(parseInt(nums[i][0]));
  }
  return res;
};

console.log(topKFrequent([2, 2, 2, 2, 1, 1, 1, 2, 2, 3], 2));

// idea 1 : get key of a specific value
// idea 2 : can i sort object values

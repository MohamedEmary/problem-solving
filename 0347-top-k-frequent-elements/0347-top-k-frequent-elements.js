/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
  const freq = {};
  for (const num of nums) {
    if (freq[num]) {
      freq[num]++;
    } else {
      freq[num] = 1;
    }
  }

  nums = Object.entries(freq);
  nums.sort((a, b) => b[1] - a[1]);
  const res = [];
  for (let i = 0; i < k; i++) {
    res.push(parseInt(nums[i][0]));
  }
  return res;

};
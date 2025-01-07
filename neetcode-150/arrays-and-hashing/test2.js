// /**
//  * @param {number[]} nums
//  * @param {number} target
//  * @return {number[]}
//  */
// var twoSum = function (nums, target) {
//   let map = new Map();
//   for (indx in nums) {
//     map.set(nums[indx], indx);
//   }
//   let required = 0;
//   for (num of nums) {
//     required = target - num;
//     if (map.has(required)) {
//       return [parseInt(map.get(num)), parseInt(map.get(required))];
//     }
//   }
//   return [];
// };

// ================================

// console.log(twoSum([3, 3], 9));

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
  const frequencyMap = new Map();
  for (const i of nums) {
    frequencyMap.set(i, (frequencyMap.get(i) || 0) + 1);
  }
  const sortedFrequencies = Array.from(frequencyMap.entries()).sort(
    (a, b) => b[1] - a[1]
  );

  const topK = sortedFrequencies.slice(0, k).map((entry) => entry[0]);

  return topK;
};

console.log(topKFrequent([2, 2, 2, 2, 1, 1, 1, 2, 2, 3, 3, 3, 3, 3], 2));

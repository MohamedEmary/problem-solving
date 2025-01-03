/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
    if (nums.length === 0) return 0;
    const set = new Set(nums);

    const seqStart = [];
    set.forEach((num) => {
        if (!set.has(num - 1)) seqStart.push(num);
    });

    const counts = [];
    seqStart.forEach((num) => {
        let count = 1;
        while (set.has(num + 1)) {
            count += 1;
            num++;
        }
        counts.push(count);
    });

    return Math.max(...counts);

};
/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function (temperatures) {
    const stack = [];
    const res = Array.from(temperatures).fill(0);

    for (let i = 0; i < temperatures.length; i++) {
        if (
            stack.length !== 0 &&
            temperatures[stack[stack.length - 1]] < temperatures[i]
        ) {
            while (temperatures[stack[stack.length - 1]] < temperatures[i]) {
                const val = stack.pop();
                res[val] = i - val;
            }
        }
        stack.push(i);
    }
    return res;
};
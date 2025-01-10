/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function (temperatures) {
    const stack = [];
    const res = [];

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

    while (stack.length !== 0) {
        const lastItem = stack[stack.length - 1];
        const beforeLastItem = stack[stack.length - 2];
        if (temperatures[lastItem] > temperatures[beforeLastItem]) {
            const val = stack.pop();
            res[lastItem] = lastItem - val;
        } else {
            res[lastItem] = 0;
            stack.pop();
        }
    }
    return res;
};
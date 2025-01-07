/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function (tokens) {
    const stack = [];
    const operations = ["+", "-", "*", "/"];
    for (const token of tokens) {
        if (operations.includes(token)) {
            let result;
            const a = stack.pop();
            const b = stack.pop();
            switch (token) {
                case "+":
                    result = a + b;
                    break;
                case "-":
                    result = b - a;
                    break;
                case "*":
                    result = a * b;
                    break;
                case "/":
                    result = parseInt(b / a);
                    break;
            }
            stack.push(result);
        } else stack.push(parseInt(token));
    }
    return stack[0];
};
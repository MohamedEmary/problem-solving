var MinStack = function () {
  this.stack = [];
};

/**
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function (val) {
  if (this.stack.length === 0) {
    this.stack.push([val, val]);
  } else {
    const lastMin = this.stack[this.stack.length - 1][1];
    const min = lastMin < val ? lastMin : val;
    this.stack.push([val, min]);
  }
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
  return this.stack.pop()[0];
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
  return this.stack[this.stack.length - 1][0];
};

/**
 * @return {boolean}
 */
MinStack.prototype.getMin = function () {
  return this.stack[this.stack.length - 1][1];
};
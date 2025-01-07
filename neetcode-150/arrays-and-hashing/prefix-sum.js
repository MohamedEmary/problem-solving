const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];
function getPrefix(nums = []) {
  const prefix = [];
  let accumulator = 0; // 3
  for (const num of nums) {
    accumulator += num;
    prefix.push(accumulator);
  }
  return prefix;
}

console.log(getPrefix(nums));

function getRangeSum(l, r, numbers = []) {
  return l === 0
    ? getPrefix(numbers)[r]
    : getPrefix(numbers)[r] - getPrefix(numbers)[l - 1];
}

console.log(getRangeSum(1, 5, nums));
console.log(getRangeSum(0, 4, nums));

/* 

Desktop ❯ md5sum hello | awk '{print toupper($0)}'
6F5902AC237024BDD0C176CB93063DC4  HELLO

Desktop ❯ bc -l <<< "ibase=16; 6F5902AC237024BDD0C176CB93063DC4" 
148006476155565969850283075806859509188

Desktop ❯ echo "hello world" | md5sum | awk '{print toupper($0)}' 
6F5902AC237024BDD0C176CB93063DC4  -

*/

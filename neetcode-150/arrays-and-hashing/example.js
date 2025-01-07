const arr = ["Mohamed", "Ahmed", "Mohamed", "Ali", "Ahmed", "Mohamed"];

const map = new Map();

// To get the number of appearances of each element in the array
for (const element of arr) {
  console.log(map.get(element));
  if (map.get(element)) {
    // truthy any number any letter
    // falsy 0 undefined
    // O(1)  ->  O(n)
    map.set(element, map.get(element) + 1);
  } else {
    map.set(element, 1);
  }
}
console.log(map);

const s = "racecar";
const freq = new Map();
for (const char of s) {
  if (freq.get(char)) {
    // truthy any number any letter
    // falsy 0 undefined
    // O(1)  ->  O(n)
    freq.set(char, freq.get(char) + 1);
  } else {
    freq.set(char, 1);
  }
  console.log(freq);
}
console.log(freq);


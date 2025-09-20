---
title: Notes on Lec 3
date: September 20, 2025
---

To loop over array items in C++:

```cpp
vector<int> arr = {1, 2, 3, 4, 5};
for (int item : arr) {
    cout << item << endl;
}
```

---

To get the log base 2, use the `log2` function from the `<cmath>` library. There is also a `log` function for natural logarithm (base e), and a `log10` function for base 10 logarithm.

```cpp
double logValue = log2(8); // logValue will be 3
double naturalLog = log(2.71828); // naturalLog will be approximately 1
double logBase10 = log10(100); // logBase10 will be 2
```

---

- The max, min values in integer are `INT_MAX`, `INT_MIN` from the `<climits>` library.
- For floating point numbers, use `FLT_MAX`, `FLT_MIN` from the `<cfloat>` library.
- For long integers, use `LONG_MAX`, `LONG_MIN` from the `<climits>` library.
- For double precision floating point numbers, use `DBL_MAX`, `DBL_MIN` from the `<cfloat>` library.

---

Some built-in functions in C++, and their time complexities:

| Function                         | Complexity      |
| -------------------------------- | --------------- |
| `min(a, b)`                      | $O(1)$          |
| `max(a, b)`                      | $O(1)$          |
| `swap(a, b)`                     | $O(1)$          |
|                                  |                 |
| `binary_search(arr, arr + n, x)` | $O(\log(n))$    |
| `lower_bound(arr, arr + n, x)`   | $O(\log(n))$    |
| `upper_bound(arr, arr + n, x)`   | $O(\log(n))$    |
| `pow(a, n)`                      | $O(\log(n))$    |
|                                  |                 |
| `reverse(arr, arr + n)`          | $O(n)$          |
| `min_element(arr, arr + n)`      | $O(n)$          |
| `max_element(arr, arr + n)`      | $O(n)$          |
| `fill(arr, arr + n, x)`          | $O(n)$          |
| `count(arr, arr + n, x)`         | $O(n)$          |
| `find(arr, arr + n, x)`          | $O(n)$          |
|                                  |                 |
| `sort(arr, arr + n)`             | $O(n \log(n))$  |
| `next_permutation(arr, arr + n)` | $O(n \cdot n!)$ |

---

- What is amortized analysis?

---
title: Sheet 2 Solutions Session
date: September 19, 2025
---

## Notes on Problem-E

```cpp
if(a[i] > b[i] ) alice++;
else if(a[i] < b[i]) bob++;

// The code above can be rewritten as
// The expressions (a[i] > b[i]) and (a[i] < b[i])
// evaluate to 1 if true and 0 if false
alice += (a[i] > b[i]);
bob += (a[i] < b[i]);
```

## Casting in C++

```cpp
cout << (int)3.14; // Outputs 3
```

This is called a C-style cast. It converts the floating-point number `3.14` to an integer by truncating the decimal part.

```cpp
cout << int(3.14); // Outputs 3
```

This is a functional-style cast, which achieves the same result as the C-style cast.

```cpp
cout << static_cast<int>(3.14); // Outputs 3
```

This is a C++-style cast, which is more type-safe and preferred in modern C++.

## Max and Min of Array

```cpp
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in
cout << *max_element(arr, arr + n); // Outputs 5
cout << *min_element(arr, arr + n); // Outputs 1

string s = "abz";
cout << *max_element(s.begin(), s.end()); // Outputs 'z'
cout << *min_element(s.begin(), s.end()); // Outputs 'a'
```

The `max_element` and `min_element` functions from the `<algorithm>` header return iterators to the maximum and minimum elements in the specified range. The asterisk (`*`) is used to dereference the iterator to get the actual value.

## Sorting an Array

```cpp
int arr[] = {5, 3, 1, 4, 2};
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n); // Sorts the array in ascending order

for(int i = 0; i < n; i++) {
    cout << arr[i] << " "; // Outputs: 1 2 3 4 5
}
```

---
title: \begin{title}\centering\vspace*{1cm}\rule{\textwidth}{0.05cm}\linebreak\vspace{0.5cm}{\Huge\bfseries Problem Solving Sessions \par}\vspace{0.1cm}\hrule\end{title}
date: December 29, 2024
---

# Sorting Algorithms Runtime

| Sorting Algorithms | Time Complexity (Best Case) | Time Complexity (Average Case) | Time Complexity (Worst Case) | Space Complexity (Worst Case) |
| ------------------ | --------------------------- | ------------------------------ | ---------------------------- | ----------------------------- |
| Bubble Sort        | $\Omega(n)$                 | $\theta(n^2)$                  | $O(n^2)$                     | $O(1)$                        |
| Selection Sort     | $\Omega(n^2)$               | $\theta(n^2)$                  | $O(n^2)$                     | $O(1)$                        |
| Insertion Sort     | $\Omega(n)$                 | $\theta(n^2)$                  | $O(n^2)$                     | $O(1)$                        |
| Quick Sort         | $\Omega(n \log n)$          | $\theta(n \log n)$             | $O(n^2)$                     | $O(n)$                        |
| Merge Sort         | $\Omega(n \log n)$          | $\theta(n \log n)$             | $O(n \log n)$                | $O(n)$                        |
| Heap Sort          | $\Omega(n \log n)$          | $\theta(n \log n)$             | $O(n \log n)$                | $O(1)$                        |

# [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)

| Solution                    | Time Complexity                                  | Space Complexity         |
| --------------------------- | ------------------------------------------------ | ------------------------ |
| Sorted Array                | $O(n\log{n})$ Sorting Time Complexity            | $O(1)$                   |
| Using Hashing (`Map` in JS) | $O(n)$ Looping on the array                      | $O(n)$ Space of the hash |
| Brute Force                 | $O(n^2)$ Finding whether each item exists or not | $O(n)$ The extra array   |

# [Valid Anagram](https://leetcode.com/problems/valid-anagram/description/)

| Solution     | Time Complexity                       | Space Complexity |
| ------------ | ------------------------------------- | ---------------- |
| Sorted Array | $O(n\log{n})$ Sorting Time Complexity | $O(1)$           |
| Hash Table   | $O(n)$                                | $O(n)$           |

# [Two Sum](https://leetcode.com/problems/two-sum/description/)

<!-- prettier-ignore-start -->
| Solution               | Time Complexity                                                                                       | Space Complexity           |
| ------------ | -------------------------------------------- | -------------------------- |
| Two Pointers           | $O(n\log{n})$ Sorting for the two pointers technique to work                                          | $O(n)$ for the extra array |
| Hash Table             | $O(m . n\log{n})$ String array of length $m$ with strings of length $n$ being sorted in $O(n\log{n})$ | $O(n)$ for the hash table  |
| Hash Table (Optimized) | $O(n)$ looping on array items                                                                         | $O(n)$ for the hash        |

# [Group Anagram](https://leetcode.com/problems/group-anagrams/description/)

| Solution                                                           | Time Complexity                                                                                    | Space Complexity          |
| ---------------------- | -------------------------------------------- | -------------------------- |
| Hash Table                                                         | $m . n\log{n}$ String array of length $m$ with strings of length $n$ being sorted in $O(n\log{n})$ | $O(n)$ for the hash table |
| Using ASCII Values and Array for counting Apperances of Characters | $O(n . m)$ where $n$ is the length of the array and $m$ is the length of the string                | $O(n)$ for the array      |
<!-- prettier-ignore-end -->

<!-- prettier-ignore-start -->
<!-- | ------------ | -------------------------------------------- | -------------------------- | -->
<!-- prettier-ignore-end -->

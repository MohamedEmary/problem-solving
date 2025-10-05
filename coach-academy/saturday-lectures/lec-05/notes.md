# C++ STL I

## Array

**Time Complexity**

<!-- prettier-ignore-start -->
| Operation         | C++ Function        | Complexity        |
| :---------------------- | :---------------------- | :---------------------- |
| Access            | `arr[i]`            | $O(1)$            |
| Search            | Manual loop         | $O(n)$            |
| Insert (end/back) | `arr[i] = x`        | $O(1)$ (if space) |
| Insert (front)    | Manual shift        | $O(n)$            |
| Insert (middle)   | Manual shift        | $O(n)$            |
| Delete (end/back) | Manual (assignment) | $O(1)$            |
| Delete (front)    | Manual shift        | $O(n)$            |
| Delete (middle)   | Manual shift        | $O(n)$            |
<!-- prettier-ignore-end -->

**Usage:**

When you know the exact size of your data beforehand and don't need it to change. Great for fast lookups (like a constant-time lookup table) or storing small, unchanging sets of information.

Best for fixed, static data with fast random access.

**Size:** Fixed — cannot grow or shrink at runtime.

**C++ Usage**

```cpp
// Header: None (built-in language feature)

// Description: Fixed-size block of memory. Cannot grow or shrink.
int arr[5] = {10, 20, 30, 40, 50};

// Access Element: O(1)
int element = arr[2]; // Accesses 30

// Insert: (Done by assignment, requires manual shifting for true insertion)
arr[4] = 99;

// Size: Shows the number of elements in the array
size_t size = sizeof(arr) / sizeof(arr[0]);
```

> `size_t` is an unsigned integer type used for sizes and counts. It is the type returned by the sizeof operator and is defined in the `<cstddef>` header.

## Vector

**Time Complexity**

<!-- prettier-ignore-start -->
| Operation         | C++ Function               | Complexity       |
| :---------------------- | :---------------------- | :---------------------- |
| Access            | `v[i]`, `v.at(i)`          | $O(1)$           |
| Search            | Manual loop or `std::find` | $O(n)$           |
| Insert (end/back) | `v.push_back(x)`           | Amortized $O(1)$ |
| Insert (front)    | `v.insert(v.begin(), x)`   | $O(n)$           |
| Insert (middle)   | `v.insert(iterator, x)`    | $O(n)$           |
| Delete (end/back) | `v.pop_back()`             | $O(1)$           |
| Delete (front)    | `v.erase(v.begin())`       | $O(n)$           |
| Delete (middle)   | `v.erase(iterator)`        | $O(n)$           |
<!-- prettier-ignore-end -->

**Usage:**

The default choice for a list of items where you mainly add new elements to the end, but still need fast access to any item by its index (like standard Python lists or JavaScript arrays).

Best when you need dynamic size and frequent access at arbitrary indices.

**Size:** Dynamic — resizable at runtime.

**C++ Usage**

```cpp
#include <vector>

// Description: A dynamic, resizable array.
std::vector<int> v = {1, 2, 3};

// Insert (End/Back): Amortized O(1)
v.push_back(4);

// Access Element: O(1)
int element_3 = v[2]; // 3

// Remove (End/Back): O(1)
v.pop_back(); // Removes 4

// Insert (Middle): O(n) - requires shifting
v.insert(v.begin() + 1, 99); // Inserts 99 at index 1

// Remove (Middle): O(n) - requires shifting
v.erase(v.begin() + 1); // Removes 99

// Size and Checks
size_t current_size = v.size();
bool is_empty = v.empty();
```

## Deque

**Time Complexity**

<!-- prettier-ignore-start -->
| Operation         | C++ Function               | Complexity |
| :---------------------- | :---------------------- | :---------------------- |
| Access            | `dq[i]`, `dq.at(i)`        | $O(1)$     |
| Search            | Manual loop or `std::find` | $O(n)$     |
| Insert (end/back) | `dq.push_back(x)`          | $O(1)$     |
| Insert (front)    | `dq.push_front(x)`         | $O(1)$     |
| Insert (middle)   | `dq.insert(iterator, x)`   | $O(n)$     |
| Delete (end/back) | `dq.pop_back()`            | $O(1)$     |
| Delete (front)    | `dq.pop_front()`           | $O(1)$     |
| Delete (middle)   | `dq.erase(iterator)`       | $O(n)$     |
<!-- prettier-ignore-end -->

**Usage:**

When you need fast operations (insert/remove) at both the beginning and the end of the list, such as implementing a double-ended queue or managing a sliding window in an algorithm.

Best when you need fast push/pop from both ends.

**Size:** Dynamic — resizable at runtime.

**C++ Usage**

```cpp
#include <deque>

// Description: Double-Ended Queue. Efficient for front and back operations.
std::deque<int> dq = {1, 2, 3};

// Insert (Front): O(1)
dq.push_front(0); // dq is now {0, 1, 2, 3}

// Insert (Back): O(1)
dq.push_back(4); // dq is now {0, 1, 2, 3, 4}

// Remove (Front): O(1)
dq.pop_front(); // Removes 0

// Remove (Back): O(1)
dq.pop_back(); // Removes 4

// Access Element (Random Access): O(1)
int element_1 = dq[1]; // Accesses 2
```

## Stack

**Time Complexity**

<!-- prettier-ignore-start -->
| Operation     | C++ Function                   | Complexity |
| :---------------------- | :---------------------- | :---------------------- |
| Access (top)  | `st.top()`                     | $O(1)$     |
| Search        | Manual iteration (destructive) | $O(n)$     |
| Insert (push) | `st.push(x)`                   | $O(1)$     |
| Delete (pop)  | `st.pop()`                     | $O(1)$     |
<!-- prettier-ignore-end -->

**Usage:**

Modeling situations where the last thing you add is the first thing you deal with (LIFO). Think of browser history (undo/redo), simulating recursion, or checking if parentheses match in an expression.

LIFO problems like parsing, recursion, backtracking.

**Size:** Dynamic — size changes at runtime (depends on the underlying container used).

**C++ Usage**

```cpp
#include <stack>

// Description: LIFO (Last-In, First-Out) container adaptor.
std::stack<int> st;

// Insert (Push): O(1)
st.push(5);
st.push(10); // 10 is now on top

// Access Top Element: O(1)
int top_val = st.top(); // 10

// Remove Top Element: O(1) (Does not return value)
st.pop(); // Removes 10

// Checks
bool is_empty = st.empty();
```

## Queue

**Time Complexity**

<!-- prettier-ignore-start -->
| Operation           | C++ Function                   | Complexity |
| :---------------------- | :---------------------- | :---------------------- |
| Access (front/back) | `q.front()`, `q.back()`        | $O(1)$     |
| Search              | Manual iteration (destructive) | $O(n)$     |
| Insert (enqueue)    | `q.push(x)`                    | $O(1)$     |
| Delete (dequeue)    | `q.pop()`                      | $O(1)$     |
<!-- prettier-ignore-end -->

**Usage:**

Modeling situations where the first thing you add is the first thing you deal with (FIFO). Standard use cases include managing a list of tasks, scheduling jobs, or performing Breadth-First Search (BFS) in a graph.

FIFO problems like task scheduling, level-order traversal.

**Size:** Dynamic — size changes at runtime (depends on the underlying container used).

**C++ Usage**

```cpp
#include <queue>

// Description: FIFO (First-In, First-Out) container adaptor.
std::queue<int> q;

// Insert (Push to back): O(1)
q.push(7);
q.push(8); // 7 is at the front

// Access Front Element: O(1)
int front_val = q.front(); // 7

// Access Back Element: O(1)
int back_val = q.back(); // 8

// Remove Front Element (Pop): O(1) (Does not return value)
q.pop(); // Removes 7
```

## Priority Queue

**Time Complexity**

<!-- prettier-ignore-start -->
| Operation    | C++ Function                   | Complexity   |
| :---------------------- | :---------------------- | :---------------------- |
| Access (top) | `pq.top()`                     | $O(1)$       |
| Search       | Manual iteration (destructive) | $O(n)$       |
| Insert       | `pq.push(x)`                   | $O(\log{n})$ |
| Delete       | `pq.pop()`                     | $O(\log n)$  |
<!-- prettier-ignore-end -->

**Usage:**

When you need to constantly pull out the 'most important' item first, rather than the oldest or newest item. Essential for algorithms like Dijkstra's (finding the shortest path) or any task scheduling where priorities matter.

When elements must be processed in priority order, not FIFO.

**Size:** Dynamic — resizable at runtime; implemented as a heap over an underlying container.

**C++ Usage**

```cpp
#include <queue>
#include <vector>
#include <functional> // Required for std::greater

// Description: Max-heap implementation by default. Highest element is always on top.

// Max-Heap (Default)
std::priority_queue<int> pq_max;
pq_max.push(30);
pq_max.push(10);

// Access Highest Priority Element: O(1)
int max_val = pq_max.top(); // 30

// Remove Highest Priority Element: O(log n) (Does not return value)
pq_max.pop();

// Min-Heap (Custom Comparator needed)
std::priority_queue<int, std::vector<int>, std::greater<int>> pq_min;
pq_min.push(30);
pq_min.push(10);
int min_val = pq_min.top(); // 10
```

\pagebreak

## Summary

### Time Complexity

\scriptsize

<!-- prettier-ignore-start -->
| Operation             | Array  | Vector  | Deque   | Stack   | Queue   | Priority Queue |
| :-------------------- | :----- | :------ | :------ | :------ | :------ | :------------- |
| **Access (Random)**   | $O(1)$ | $O(1)$  | $O(1)$  | $O(n)$  | $O(n)$  | $O(n)$         |
|                       |        |         |         |         |         |                |
| **Access (Top/End)**  | $O(1)$ | $O(1)$  | $O(1)$  | $O(1)$  | $O(1)$  | $O(1)$         |
|                       |        |         |         |         |         |                |
| **Search**            | $O(n)$ | $O(n)$  | $O(n)$  | $O(n)$  | $O(n)$  | $O(n)$         |
|                       |        |         |         |         |         |                |
| **Insert (End/Push)** | $O(1)$ | $O(1)$  | $O(1)$  | $O(1)$  | $O(1)$  | $O(\log n)$    |
|                       |        |         |         |         |         |                |
| **Insert (Front)**    | $O(n)$ | $O(n)$  | $O(1)$  | -       | -       | -              |
|                       |        |         |         |         |         |                |
| **Insert (Middle)**   | $O(n)$ | $O(n)$  | $O(n)$  | -       | -       | -              |
|                       |        |         |         |         |         |                |
| **Delete (End/Pop)**  | $O(1)$ | $O(1)$  | $O(1)$  | $O(1)$  | -       | $O(\log n)$    |
|                       |        |         |         |         |         |                |
| **Delete (Front)**    | $O(n)$ | $O(n)$  | $O(1)$  | -       | $O(1)$  | -              |
|                       |        |         |         |         |         |                |
| **Delete (Middle)**   | $O(n)$ | $O(n)$  | $O(n)$  | -       | -       | -              |
|                       |        |         |         |         |         |                |
| **Size**              | Fixed  | Dynamic | Dynamic | Dynamic | Dynamic | Dynamic        |

<!-- prettier-ignore-end -->

\normalsize

### C++ Usage

\scriptsize

<!-- prettier-ignore-start -->
| Data Structure     | Header     | Insert                                | Access                             | Delete                            | Ordering        |
| :----------------- | :---------- | :-------------------------- | :--------------------------------- | :-------------------------- | --------------------- |
| **Array**          | -          | `arr[i] = x`                          | `arr[i]`                           | Manual shift                      | Indexed         |
|                    |            |                                       |                                    |                                   |                 |
| **Vector**         | `<vector>` | `v.push_back(x)`                      | `v[i]`, `v.back()`                 | `v.pop_back()`, `v.erase()`       | Indexed         |
|                    |            |                                       |                                    |                                   |                 |
| **Deque**          | `<deque>`  | `dq.push_front(x)`, `dq.push_back(x)` | `dq.front()`, `dq.back()`, `dq[i]` | `dq.pop_front()`, `dq.pop_back()` | Double-Ended    |
|                    |            |                                       |                                    |                                   |                 |
| **Stack**          | `<stack>`  | `st.push(x)`                          | `st.top()`                         | `st.pop()`                        | LIFO            |
|                    |            |                                       |                                    |                                   |                 |
| **Queue**          | `<queue>`  | `q.push(x)`                           | `q.front()`, `q.back()`            | `q.pop()`                         | FIFO            |
|                    |            |                                       |                                    |                                   |                 |
| **Priority Queue** | `<queue>`  | `pq.push(x)`                          | `pq.top()`                         | `pq.pop()`                        | Priority (Heap) |

<!-- prettier-ignore-end -->

\normalsize

---

## References:

- [C++ Cheat Sheet](https://hackingcpp.com/cpp/cheat_sheets.html)
- [Big O Cheat Sheet](https://www.bigocheatsheet.com/)

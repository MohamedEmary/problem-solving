# Session 1

## Data Types in C++

| Type                   | Size (bytes) | Range (Approx)                       |
| ---------------------- | ------------ | ------------------------------------ |
| **bool**               | 1            | `true` / `false`                     |
| **char**               | 1            | `-128` to `127`                      |
| **unsigned char**      | 1            | `0` to `255`                         |
| **short**              | 2            | `-32,768` to `32,767`                |
| **unsigned short**     | 2            | `0` to `65,535`                      |
| **int**                | 4            | `-2,147,483,648` to `2,147,483,647`  |
| **unsigned int**       | 4            | `0` to `4,294,967,295`               |
| **long**               | 8            | `-9.22e18` to `9.22e18`              |
| **unsigned long**      | 8            | `0` to `1.84e19`                     |
| **long long**          | 8            | `-9.22e18` to `9.22e18`              |
| **unsigned long long** | 8            | `0` to `1.84e19`                     |
| **float**              | 4            | \~±3.4e38 (7 digits precision)       |
| **double**             | 8            | \~±1.7e308 (15 digits precision)     |
| **long double**        | 16           | \~±1.2e4932 (18–19 digits precision) |

## Other notes

- Review the first 20 minutes of the session again
- `^` is used for bitwise XOR, not exponentiation.
- Use `std::pow(base, exponent)` for exponentiation, but you need to include the `<cmath>` library.
- single quotes (`' '`) are used for `char` literals, while double quotes (`" "`) are used for `string` literals.
- What is namespace std?
  - The `std` namespace is a collection of classes and functions in the C++ Standard Library. It includes features like input/output streams, string manipulation, and mathematical functions. Using `std::` before these features indicates that they belong to this namespace.
- review 3 or 4 slides before slide number 115
- `#include <bits/stdc++.h>` is a non-standard header file that includes most of the standard C++ libraries. It's commonly used in competitive programming for convenience, but it's not recommended for production code due to portability and compilation time issues.
- Error types:
  - Syntax Errors: Typing Errors
  - Semantic Errors: Logic or Meaning Errors
  - Run-time Errors: Exceptions
- [Bricks Problem](https://vjudge.net/problem/AtCoder-abc186_a)
- Review how to use vjudge part of the session or watch a video on youtube on how to use vjudge

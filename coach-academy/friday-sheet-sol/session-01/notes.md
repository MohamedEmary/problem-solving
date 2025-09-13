# Sheet 1 Notes

## Reversing a String

To reverse a string in C++, you can use the `std::reverse` function from the `<algorithm>` header. Here's a simple example:

```cpp
string str = "Hello, World!";
reverse(str.begin(), str.end());
cout << str << endl; // !dlroW ,olleH
```

## Ceil Division

Ceil division can be performed using the formula $$\lceil \frac{x}{y} \rceil = \frac{x + y - 1}{y}$$ for positive integers $x$ and $y$.

There is also a simple a `ceil` function in the `<cmath>` library:

```cpp
double x = 5.3;
double y = 2.0;
double result = ceil(x / y);
cout << result << endl; // 3
```

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, x, y, z;
  cin >> a >> b;
  x = a + b;
  y = a - b;
  z = a * b;

  cout << max({x, y, z});

  return 0;
}
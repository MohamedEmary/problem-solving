#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  short n;
  cin >> n;

  short a, b;
  int capacity = 0;
  int max_capacity = 0;
  for (short i = 0; i < n; i++)
  {
    cin >> a >> b;
    capacity -= a;
    capacity += b;
    if (capacity > max_capacity)
      max_capacity = capacity;
  }

  cout << max_capacity;

  return 0;
}
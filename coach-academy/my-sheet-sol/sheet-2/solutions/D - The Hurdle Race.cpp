#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  short n, k;
  cin >> n >> k;

  short x;
  short max = -1;
  for (short i = 0; i < n; i++)
  {
    cin >> x;
    if (x > max)
      max = x;
  }

  (max > k) ? cout << (max - k) : cout << 0;

  return 0;
}
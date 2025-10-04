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

  long num, min = LONG_MAX;
  for (short i = 0; i < n; i++)
  {
    cin >> num;
    if (num == 1)
    {
      cout << -1;
      return 0;
    }
  }

  cout << 1 << endl;

  return 0;
}

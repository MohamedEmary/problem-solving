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

  short x1;
  cin >> x1;
  short x2 = 7 - x1;

  short num;
  for (short i = 0; i < (n * 2); i++)
  {
    cin >> num;
    if (num == x1 || num == x2)
    {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}
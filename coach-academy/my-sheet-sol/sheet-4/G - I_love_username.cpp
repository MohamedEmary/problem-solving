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

  short min, max, num;
  cin >> num;
  max = num;
  min = num;

  short amazing = 0;

  for (short i = 0; i < n - 1; i++)
  {
    cin >> num;
    if (num > max)
    {
      amazing++;
      max = num;
    }
    else if (num < min)
    {
      amazing++;
      min = num;
    }
  }

  cout << amazing << endl;

  return 0;
}
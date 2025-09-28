#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  short t;
  cin >> t;

  short n[t];
  short max = SHRT_MIN;
  for (short i = 0; i < t; i++)
  {
    cin >> n[i];
    if (n[i] > max)
      max = n[i];
  }

  int results[max + 1];
  results[0] = 1;
  for (short i = 1; i <= max; i++)
  {
    if (i % 2 == 0)
      results[i] = results[i - 1] + 1;
    else
      results[i] = results[i - 1] * 2;
  }

  for (short i = 0; i < t; i++)
    cout << results[n[i]] << endl;

  return 0;
}
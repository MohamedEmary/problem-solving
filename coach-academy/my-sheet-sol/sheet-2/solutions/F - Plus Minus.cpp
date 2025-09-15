#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  float n;
  cin >> n;

  float pos = 0,
        neg = 0,
        zero = 0;

  short input;

  for (short i = 0; i < n; i++)
  {
    cin >> input;

    if (input > 0)
      pos++;
    else if (input < 0)
      neg++;
    else
      zero++;
  }

  cout << fixed << setprecision(6)
       << pos / n << endl
       << neg / n << endl
       << zero / n << endl;

  return 0;
}
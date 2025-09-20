#include <bits/stdc++.h>

using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  vector<int> v = {1, 2, 3, 4, 5, 6, 4, 2, 1};
  sort(v.begin(), v.end());
  for (int x : v)
    cout << x << " ";

  double logValue = log2(8);
  double naturalLog = log(2.71828);
  double logBase10 = log10(100);

  cout << endl
       << endl
       << logValue << " " << naturalLog << " " << logBase10 << endl;

  cout << DBL_MAX << endl;
  cout << FLT_MAX << endl;
  cout << FLT_MIN << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Theatre Square
  double n, m, a;
  long long w, h;

  cin >> n >> m >> a;

  w = ceil(n / a);
  h = ceil(m / a);

  cout << w * h;

  return 0;
}
// ceil division
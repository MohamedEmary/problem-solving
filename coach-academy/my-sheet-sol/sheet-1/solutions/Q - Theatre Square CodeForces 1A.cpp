#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;
  long long n, m;
  double a;
  cin >> n >> m >> a;

  long long result = ceil(n / a) * ceil(m / a);
  cout << result << endl;

  return 0;
}
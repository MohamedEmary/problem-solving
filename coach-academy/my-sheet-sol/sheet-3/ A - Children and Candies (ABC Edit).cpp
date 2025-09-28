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

  // Sn = n/2 [2a + (n−1)d]
  //    = n/2 (2*1 + (n-1)*1)
  int sum = (n * (n + 1)) / 2;
  cout << sum;

  return 0;
}
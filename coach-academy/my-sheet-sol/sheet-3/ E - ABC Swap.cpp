#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  short x, y, z;
  cin >> x >> y >> z;

  // one way to just print them in that order
  // cout << z << " " << x << " " << y;

  // another way is to actually swap them using swap function
  swap(x, y);
  swap(x, z);
  cout << x << " " << y << " " << z;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  float l, s1, s2;
  cin >> l >> s1 >> s2;
  float t = l / (s1 + s2);
  cout << fixed << setprecision(5) << t * s1;

  return 0;
}
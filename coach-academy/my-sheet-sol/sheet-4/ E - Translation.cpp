#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  string s, t;
  cin >> s;
  cin >> t;

  reverse(s.begin(), s.end());

  if (s == t)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
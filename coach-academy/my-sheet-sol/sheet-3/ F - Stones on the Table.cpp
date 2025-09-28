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

  string s;
  cin >> s;

  char prev = s[0];
  short removed = 0;

  for (char c : s)
  {
    if (prev == c)
      removed++;
    prev = c;
  }

  // subtract by one because the initial value of
  // prev is the first character which will always
  // match itself
  cout << removed - 1;

  return 0;
}
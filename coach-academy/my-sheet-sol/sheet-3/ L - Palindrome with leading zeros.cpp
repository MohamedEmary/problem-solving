#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  string s;
  cin >> s;

  string rev = s;
  reverse(rev.begin(), rev.end());

  if (rev == s)
    cout << "Yes" << endl;
  else
  {
    while (s[s.size() - 1] == '0')
      s.pop_back();

    rev = s;
    reverse(rev.begin(), rev.end());
    (rev == s) ? cout << "Yes" : cout << "No";
  }

  return 0;
}
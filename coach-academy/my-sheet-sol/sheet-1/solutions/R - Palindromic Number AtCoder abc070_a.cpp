#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;
  string revStr;
  cin >> revStr;
  string num = revStr;
  reverse(revStr.begin(), revStr.end());
  cout << (revStr == num ? "Yes" : "No") << endl;
  return 0;
}
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

  long long input, sum = 0;
  for (short i = 0; i < n; i++)
  {
    cin >> input;
    sum += input;
  }

  cout << sum;
  return 0;
}
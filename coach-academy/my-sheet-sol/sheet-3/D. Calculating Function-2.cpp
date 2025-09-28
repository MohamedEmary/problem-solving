#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  long n;
  cin >> n;

  long sum = 0;
  short sign = -1;

  // Right Answer but O(n) will give time limit
  // Solve using Arithmitic series
  for (long i = 1; i <= n; i++)
  {
    sum += i * sign;
    sign *= -1;
  }

  cout << sum;
  return 0;
}
// IMPORTANT This is the only accepted one
#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  long long n;
  cin >> n;

  // -1 + 2 - 3 + 4 - 5 + 6 - 7 + 8 - 9 + 10 - 11
  // -1   1  -2   2  -3   3  -4   4  -5   5    -7

  // Its always n/2 with even numbers
  // or n-1/2 with odd numbers

  (n % 2 == 0) ? cout << n / 2 : cout << (-n - 1) / 2;

  return 0;
}
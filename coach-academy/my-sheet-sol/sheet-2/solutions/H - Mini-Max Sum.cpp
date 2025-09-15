#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  long long min = 10e9 + 1, max = 0, sum = 0, input;

  for (short i = 0; i < 5; i++)
  {
    cin >> input;

    sum += input;

    if (input > max)
      max = input;
    if (input < min)
      min = input;
  }

  cout << sum - max << " " << sum - min;

  return 0;
}
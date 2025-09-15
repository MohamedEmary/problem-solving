#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  int n;
  cin >> n;

  long long input,
      max = 0,
      max_count = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> input;

    if (input > max)
    {
      max_count = 1;
      max = input;
    }
    else if (input == max)
    {
      max_count++;
    }
  }

  cout << max_count;

  return 0;
}

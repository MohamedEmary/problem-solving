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

  long long sum = 0;
  long long nums[n];
  for (long i = 0; i < n; i++)
  {
    cin >> nums[i];
    sum += nums[i];
  }

  long long target;
  cin >> target;

  if (target % sum == 0)
    cout << ((target / sum) * n) + 1;
  else
  {
    long long val = (target / sum) * sum;
    long long times = (target / sum) * n;
    for (long i = 0; i < n; i++)
    {
      val += nums[i];
      times++;
      if (val > target)
      {
        cout << times;
        break;
      }
    }
  }

  return 0;
}
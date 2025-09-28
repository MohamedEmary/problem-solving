#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  /*
  if all the numbers in the array are already less than or equal to d
  we print yes

  get the smallest two numbers and if they are less than or equal to
  d we print yes
  */

  short t;
  cin >> t;
  for (short i = 0; i < t; i++)
  {
    short n, d;
    cin >> n >> d;
    short nums[n];
    bool greaterThanDExists = false;

    // To get the least two numbers in the array
    short min_cur = SHRT_MAX, min_prev = SHRT_MAX;

    for (short i = 0; i < n; i++)
    {
      cin >> nums[i];
      if (nums[i] > d)
        greaterThanDExists = true;

      if (nums[i] < min_cur)
      {
        min_prev = min_cur;
        min_cur = nums[i];
      }
      else if (nums[i] < min_prev)
        min_prev = nums[i];
    }

    if (!greaterThanDExists)
      cout << "YES" << endl;
    else
    {
      if (min_cur + min_prev <= d)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }

  return 0;
}

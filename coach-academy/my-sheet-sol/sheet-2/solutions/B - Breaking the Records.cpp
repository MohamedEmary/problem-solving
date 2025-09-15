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
  long int arr[n];
  for (short i = 0; i < n; i++)
    cin >> arr[i];

  long int max = arr[0], min = arr[0];

  short max_break = 0, min_break = 0;
  for (short i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max_break++;
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min_break++;
      min = arr[i];
    }
  }

  cout << max_break << " " << min_break;

  return 0;
}

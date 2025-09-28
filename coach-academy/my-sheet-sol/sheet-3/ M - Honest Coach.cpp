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

  for (short i = 0; i < n; i++)
  {
    short s;
    cin >> s;
    short arr[s];
    for (short i = 0; i < s; i++)
      cin >> arr[i];

    sort(arr, arr + s);
    short minDiff = SHRT_MAX;
    for (short i = 1; i < s; i++)
      if (arr[i] - arr[i - 1] < minDiff)
        minDiff = arr[i] - arr[i - 1];

    cout << minDiff << endl;
  }

  return 0;
}
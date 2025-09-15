#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

// TODO: Review this problem and solve it again with the `reverse` built in method
// take care of Off by one errors
int main()
{
  fast_io;

  int n, d;
  cin >> n >> d;
  d = d % n;

  int arr[n], rotated[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    rotated[i] = arr[i];
  }

  if (d != 0)
  {
    for (int i = d, j = 0; i < n; i++, j++)
      rotated[j] = arr[i];

    for (int i = 0, j = n - d; i < d; i++, j++)
      rotated[j] = arr[i];
  }

  for (int i = 0; i < n; i++)
    cout << rotated[i] << " ";

  return 0;
}
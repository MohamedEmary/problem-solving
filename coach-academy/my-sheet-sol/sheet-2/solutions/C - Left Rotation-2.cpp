#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

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

  rotate(arr, arr + d, arr + n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
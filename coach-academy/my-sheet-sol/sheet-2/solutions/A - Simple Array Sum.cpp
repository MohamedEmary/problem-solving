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
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  long int result = 0;
  for (int i = 0; i < n; i++)
    result += arr[i];

  cout << result;

  return 0;
}

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

  short num,
      min = SHRT_MAX, min_index,
      max = SHRT_MIN, max_index;

  for (short i = 0; i < n; i++)
  {
    cin >> num;

    if (num > max) // here we used > not >= because we want the first maximum
    {
      max = num;
      max_index = i;
    }

    if (num <= min) // here we used <= not just < because we want the last minimum
    {
      min = num;
      min_index = i;
    }
  }

  short moves = max_index + (n - 1 - min_index);

  if (max_index > min_index)
    moves--;

  cout << moves << endl;

  return 0;
}
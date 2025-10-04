#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  short n, k, x;
  cin >> n >> k >> x;

  short chores_sum = 0,
        n_chores = 0,
        num,
        finished_chores = 0;

  for (short i = 0; i < n; i++)
  {
    if (finished_chores == n)
      break;

    cin >> num;

    // Solution without using nested loops
    // makes difference if k is a large number
    if (finished_chores < n and x < num and k != 0)
    {
      short remaining_chores = n - finished_chores;
      if (remaining_chores >= k)
      {
        finished_chores += k;
        chores_sum += k * x;
        k = 0;
      }
      else
      {
        finished_chores += remaining_chores;
        chores_sum += (remaining_chores * x);
      }
    }

    if (finished_chores < n)
    {
      chores_sum += num;
      finished_chores++;
    }
  }

  cout << chores_sum << endl;

  return 0;
}
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
        number_of_chores = 0;

  for (short i = 0; i < n; i++)
  {
    if (number_of_chores < n)
    {
      cin >> num;

      while (x < num and k != 0)
      {
        chores_sum += x;
        number_of_chores++;
        k--;

        if (number_of_chores == n)
        {
          cout << chores_sum << endl;
          return 0;
        }
      }

      // we check again because we changed the value of
      // number_of_chores inside the while loop
      if (number_of_chores < n)
      {
        chores_sum += num;
        number_of_chores++;
      }
    }
  }

  cout << chores_sum << endl;

  return 0;
}
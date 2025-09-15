#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  short a[3], b[3];

  for (short i = 0; i < 3; i++)
    cin >> a[i];

  for (short i = 0; i < 3; i++)
    cin >> b[i];

  short alice_score = 0, bob_score = 0;
  for (short i = 0; i < 3; i++)
  {
    if (a[i] > b[i])
      alice_score++;
    if (b[i] > a[i])
      bob_score++;
  }

  cout << alice_score << " " << bob_score;

  return 0;
}
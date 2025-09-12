#include <bits/stdc++.h>
using namespace std;

int main()
{
  int loc;
  cin >> loc;
  int remainder = loc % 5;

  if (remainder == 0)
  {
    cout << loc / 5;
  }
  else
  {
    cout << loc / 5 + 1;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;
  vector<int> currencies = {100, 20, 10, 5, 1};

  int amount;
  cin >> amount;

  int totalPaper = 0;

  for (auto cur : currencies)
  {
    int paper = amount / cur;
    amount -= paper * cur;
    totalPaper += paper;
  }

  cout << totalPaper << endl;

  return 0;
}

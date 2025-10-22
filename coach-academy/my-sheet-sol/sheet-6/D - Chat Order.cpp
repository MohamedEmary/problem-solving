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

  string arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  unordered_set<string> s;
  queue<string> order_q;
  for (int i = n - 1; i >= 0; i--)
  {
    if (s.find(arr[i]) == s.end())
    {
      s.insert(arr[i]);
      order_q.push(arr[i]);
    }
  }

  while (!order_q.empty())
  {
    cout << order_q.front() << endl;
    order_q.pop();
  }

  return 0;
}

/*

5
alex
ivan
roman
ivan
aaron


*/
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
  int op;
  int num;
  priority_queue<int, vector<int>, greater<int>> pq;
  queue<int> q;
  for (int i = 0; i < n; i++)
  {
    cin >> op;
    if (op == 1)
    {
      cin >> num;
      q.push(num);
    }
    else if (op == 2)
    {
      if (!pq.empty())
      {
        cout << pq.top() << endl;
        pq.pop();
      }
      else
      {
        cout << q.front() << endl;
        q.pop();
      }
    }
    else
    {
      while (!q.empty())
      {
        pq.push(q.front());
        q.pop();
      }
    }
  }

  return 0;
}
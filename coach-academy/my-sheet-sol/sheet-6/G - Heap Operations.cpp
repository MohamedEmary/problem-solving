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
  priority_queue<int, vector<int>, greater<>> pq;
  string operation;
  int num;
  vector<string> results;
  for (int i = 0; i < n; i++)
  {
    cin >> operation;
    if (operation == "insert")
    {
      cin >> num;
      pq.push(num);
      results.push_back("insert " + to_string(num));
    }
    else if (operation == "getMin")
    {
      cin >> num;
      if (pq.empty())
      {
        pq.push(num);
        results.push_back("insert " + to_string(num));
      }
      else if (pq.top() < num)
      {
        while (!pq.empty() && pq.top() < num)
        {
          results.push_back("removeMin");
          pq.pop();
        }
        if (pq.empty() || pq.top() != num)
        {
          pq.push(num);
          results.push_back("insert " + to_string(num));
        }
      }
      else if (pq.top() > num)
      {
        pq.push(num);
        results.push_back("insert " + to_string(num));
      }
      results.push_back("getMin " + to_string(num));
    }
    else if (operation == "removeMin")
    {
      if (!pq.empty())
        pq.pop();
      else
        results.push_back("insert 0");

      results.push_back("removeMin");
    }
  }

  cout << results.size() << endl;
  for (auto &&i : results)
    cout << i << endl;

  return 0;
}

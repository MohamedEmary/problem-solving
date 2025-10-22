#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

typedef long long ll;

int main()
{
  fast_io;

  int n;
  cin >> n;
  priority_queue<ll, vector<ll>, greater<>> pq;
  ll num;
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    if (num >= 0)
    {
      pq.push(num);
      sum += num;
    }
    else
    {
      if (sum + num >= 0)
      {
        pq.push(num);
        sum += num;
      }
      else
      {
        if (!pq.empty() && pq.top() < num)
        {
          sum -= pq.top();
          sum += num;
          pq.pop();
          pq.push(num);
        }
      }
    }
  }

  cout << pq.size() << endl;

  return 0;
}

// Use a min priority queue to keep track of the smallest potions consumed, and if we encounter
// a negative potion that can't be consumed without going negative, we check if replacing the
// smallest consumed potion with this one would allow us to consume it while maximizing the
// number of potions consumed.
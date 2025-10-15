#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

// this problem can be solved with deque with O(n)

int main()
{
  fast_io;

  int n, d;
  cin >> n >> d;
  deque<int> dq;
  int num;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    dq.push_back(num);
  }

  int temp;
  for (int i = 0; i < d; i++)
  {
    temp = dq.at(0);
    dq.pop_front();
    dq.push_back(temp);
  }

  for (int n : dq)
    cout << n << " ";

  return 0;
}

/*

5 4
1 2 3 4 5

*/
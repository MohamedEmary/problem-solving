#include <iostream>
#include <queue>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;
  long long q;
  cin >> q;

  deque<short> dq;
  string op;
  short num;
  bool reversed = false;
  for (long long i = 0; i < q; i++)
  {
    cin >> op;

    if (reversed)
    {
      if (op == "toFront")
        op = "push_back";
      else if (op == "push_back")
        op = "toFront";
      else if (op == "front")
        op = "back";
      else if (op == "back")
        op = "front";
    }

    if (op == "toFront")
    {
      cin >> num;
      dq.push_front(num);
    }
    else if (op == "push_back")
    {
      cin >> num;
      dq.push_back(num);
    }
    else if (op == "front" && dq.size())
    {
      cout << dq.front() << endl;
      dq.pop_front();
    }
    else if (op == "back" && dq.size())
    {
      cout << dq.back() << endl;
      dq.pop_back();
    }
    else if (op == "reverse")
      reversed = !reversed;
    else
      cout << "No job for Ada?" << endl;
  }

  return 0;
}

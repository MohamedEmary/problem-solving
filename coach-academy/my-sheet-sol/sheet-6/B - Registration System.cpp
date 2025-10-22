#include <iostream>
#include <unordered_map>

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
  unordered_map<string, int> mp;
  string name;
  for (int i = 0; i < n; i++)
  {
    cin >> name;
    if (mp.find(name) == mp.end())
    {
      mp.insert({name, 0});
      cout << "OK" << endl;
    }
    else
    {
      // instead of using a set a storing all of the alternatives, we can
      // just keep track of the count of each base name in the map
      // this will allow us to directly generate the next alternative in O(1)
      // instead of checking for each alternative in O(n)
      string alternative = name + to_string(++mp[name]);
      cout << alternative << endl;
    }
  }

  return 0;
}

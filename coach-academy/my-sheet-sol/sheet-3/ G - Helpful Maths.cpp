#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  string s;
  cin >> s;

  vector<int> nums;
  for (int i = 0; i < s.size(); i++)
    if (s[i] != '+')
      nums.push_back(int(s[i]) - int('0'));

  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size() - 1; i++)
    cout << nums[i] << "+";
  cout << nums[nums.size() - 1];

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  unordered_map<char, pair<char, char>> mp;
  string letters = "qwertyuiopasdfghjkl;zxcvbnm,./";
  mp[letters[0]] = {' ', letters[1]};
  for (int i = 1; i < letters.size() - 1; i++)
    mp[letters[i]] = {letters[i - 1], letters[i + 1]};
  mp[letters[letters.size() - 1]] = {letters[letters.size() - 2], ' '};

  char dir;
  cin >> dir;
  string text;
  cin >> text;
  string output = "";

  if (dir == 'L')
  {
    for (auto &&ch : text)
      output += mp[ch].second;
    cout << output << endl;
  }
  else
  {
    for (auto &&ch : text)
      output += mp[ch].first;
    cout << output << endl;
  }

  return 0;
}
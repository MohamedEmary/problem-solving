#include <bits/stdc++.h>
using namespace std;

int main()
{
  string vowels = "aeiou";
  char c;
  cin >> c;

  // `string::npos` is the value returned by
  // the find function if it fails
  // tolower and toupper are defined in <cctype>

  // it returns the lowercase or uppercase integer
  // that can be converted to char with cast
  // cout << static_cast<char>(tolower(c));

  // you can also store the result in a char
  // variable and it will be converted automatically
  // char lower = tolower(c);
  if (vowels.find(tolower(c)) == string::npos)
    cout << "consonant";
  else
    cout << "vowel";

  return 0;
}
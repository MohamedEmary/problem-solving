#include <bits/stdc++.h>

using namespace std;

int main()
{
  int test = 5;
  cout << "this is test = " << test << endl;

  string name = "Mohamed";
  cout << "My name is " << name << endl;

  cout << pow(2, 3) << endl;

  int age1, age2;
  cout << "enter two ages: ";
  cin >> age1 >> age2;
  cout << "you entered: " << age1 << " and " << age2;
  // format is a C++20 feature
  // cout << format("My name is {} and I am {} years old.", name, age1, age2) << endl;

  return 0;
}
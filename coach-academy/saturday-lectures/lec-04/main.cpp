#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  int arr[5] = {2, 1, 33, 2, 45};
  // using `greater<>()` to sort in descending order
  sort(arr, arr + 5, greater<>());
  cout << "arr:" << endl;
  for (auto &&i : arr)
    cout << i << endl;

  int arr2[5] = {2, 1, 33, 2, 45};
  // using lambda expression to sort in descending order
  sort(arr2, arr2 + 5, [](int a, int b)
       { return a > b; });
  cout << "arr2:" << endl;
  for (auto &&i : arr2)
    cout << i << endl;

  cout << "max = " << max({2, 1, 33, 2, 45}) << endl;
  cout << "*max_element = " << *max_element(arr, arr + 5) << endl;

  int arr3[3] = {1, 2, 3};
  cout << "arr3 permutations:" << endl;
  for (auto &&i : arr3)
    cout << i << " "; // 1 2 3

  next_permutation(arr3, arr3 + 3);
  for (auto &&i : arr3)
    cout << i << " "; // 1 3 2

  next_permutation(arr3, arr3 + 3);
  for (auto &&i : arr3)
    cout << i << " "; // 2 1 3

  next_permutation(arr3, arr3 + 3);
  for (auto &&i : arr3)
    cout << i << " "; // 2 3 1

  return 0;
}
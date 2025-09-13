#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;
  // we can use to loop variables in our loop
  for (int i = 0, j = 0; i < 10 and j < 16; i++, j += 2)
  {
    cout << i << " " << j << endl;
  }

  // When creating a fixed array in cpp we can have the compiler
  // deduce the size from the RHS
  // int arr[] = {1,2,3,4,5}
  // the compiler will automatically create an array of 5 items

  // When creating an array without giving it an initial value the
  // compiler will give it initial garbage values which are random values

  return 0;
}
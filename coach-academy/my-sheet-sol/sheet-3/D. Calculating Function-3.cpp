#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  /*
    n (1 ≤ n ≤ 10^15).
    e.g. n=5 => -1+2-3+4-5

    Sn = n/2 [2a + (n−1)d]

    where:
      a is the first term
      d is the common difference
      n is the number of terms.
  */

  long long n;
  cin >> n;

  // ceil division with (+1) because we start with a negative number
  long long neg_terms = (n + 1) / 2;
  // floor division anyway
  long long pos_terms = n / 2;

  // IMPORTANT: Add note on division
  long long sum_neg = (neg_terms * ((2 * -1) + (neg_terms - 1) * -2)) / 2;
  long long sum_pos = (pos_terms * ((2 * 2) + (pos_terms - 1) * 2)) / 2;

  cout << sum_neg + sum_pos;

  return 0;
}

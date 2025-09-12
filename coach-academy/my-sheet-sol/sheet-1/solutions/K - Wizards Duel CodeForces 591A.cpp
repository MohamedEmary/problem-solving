#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define endl '\n'

int main()
{
  fast_io;

  long double d, s1, s2;
  cin >> d >> s1 >> s2;

  // the spells will be shot twards each other, then they will return
  // again to the wizard then the wizard will shot it back and finally
  // when they meet again they will explode
  // p ->  collision  <- q
  // p <-  to wizard  -> q
  // p ->  explosion  <- q
  // So the spell go throw the distance between the 2 wizards three times 3d
  // and we have the speed of each spell s1, s2 from input
  // And since the spells will meet at the same time t1 = t2 = t
  // So we can calculate the time first
  // 3*d = s1*t + s2*t
  // 3d = t(s1 + s2)
  // t = 3d / (s1 + s2)
  // Example
  // 3*199 = 60t + 40t
  // 3*199 = t*(60 + 40)
  // t = (3*199)/(60 + 40)
  // Now we have the time and we can calculate the distance for each spell
  // d1 = t * s1
  // d2 = t * s2
  // t is the total time
  long double t = (3 * d) / (s1 + s2);
  // This is the total distance spell 1 have made after the 3 steps (collision,
  // return to wizard, explosion)
  long double d1total = s1 * t;

  // now we need to subtract the distance of first two steps which will require the
  // time for each of the first two steps
  // time for the first step (collision)
  long double tStep1 = d / (s1 + s2);
  // to calculate the time for the second step (return)
  // we need to know the distance the spells meet at in
  // the first step
  long double dStep1 = tStep1 * s1;
  long double tStep2 = dStep1 / s1;

  // Now we calculate the final result which is equal to the
  // total distance - (distance of step1 + distance of step2)
  long double result = d1total - s1 * (tStep1 + tStep2);
  cout << result << endl;

  return 0;
}
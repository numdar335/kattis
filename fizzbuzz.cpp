#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int X, Y, N, i;
  cin >> X >> Y >> N;
  for (i = 1; i <= N; ++i)
    if (!(i%X) && !(i%Y)) cout << "FizzBuzz\n";
    else if (!(i%X)) cout << "Fizz\n";
    else if (!(i%Y)) cout << "Buzz\n";
    else cout << i << "\n";
}
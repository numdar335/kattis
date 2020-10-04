#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int X, N, i, P, s;
  cin >> X >> N;
  s = X;
  for (i = 1; i <= N; ++i) {
    cin >> P;
    s += X-P;
  }
  cout << s << "\n";
}
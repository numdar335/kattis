#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, i, a, s = 0;
  cin >> N;
  for (i = 1; i <= N; ++i) {
    cin >> a;
    if (a < 0) ++s;
  }
  cout << s << "\n";
}
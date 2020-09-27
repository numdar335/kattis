#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout << fixed;
  int R, C;
  float prcntg, a;
  cin >> R >> C;
  a = M_PI*R*R;
  cout << 100-100*(a-M_PI*(R-C)*(R-C))/a << "\n";
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int x, y;
  cin >> x >> y;
  if (x > 0) cout << (y > 0 ? "1\n" : "4\n");
  else cout << (y > 0 ? "2\n" : "3\n");
}
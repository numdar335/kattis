#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int r, n, i, m;
  bool A[100];
  cin >> r >> n;
  if (r == n) cout << "too late\n";
  else {
    for (i = 1; i <= r; ++i) A[i-1] = true;
    for (i = 1; i <= n; ++i) {
      cin >> m;
      A[m-1] = false;
    }
    for (i = 1; i <= r; ++i)
      if (A[i-1]) {
        cout << i << "\n";
        i = r+1;
      }
  }
}

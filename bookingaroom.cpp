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
    for (i = 0; i < r; ++i) A[i] = true;
    for (i = 0; i < n; ++i) {
      cin >> m;
      A[m-1] = false;
    }
    for (i = 0; i < r; ++i)
      if (A[i]) {
        cout << i+1 << "\n";
        i = r+1;
      }
  }
}
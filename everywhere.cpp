#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T, i, a, s, j, k;
  string A[100];
  bool flag;
  cin >> T;
  for (i = 1; i <= T; ++i) {
    s = 0;
    cin >> a;
    for (j = 1; j <= a; ++j) {
      cin >> A[j-1];
      if (j != 1 && j != 2) {
        flag = true;
        for (k = 1; k <= j-1; ++k)
          if (A[j-1] == A[k-1]) flag = false;
        if (flag) ++s;
      }
      else if (j == 1) ++s;
      else if (A[1] != A[0]) ++s;
    }
    cout << s << "\n";
  }
}
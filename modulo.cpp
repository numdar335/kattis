#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, A[10], i, j, s = 0;
  bool flag;
  for (i = 1; i <= 10; ++i) {
    cin >> n;
    A[i-1] = n%42;
  }
  for (i = 1; i <= 10; ++i) {
    flag = true;
    for (j = i+1; j <= 10; ++j)
      if (A[i-1] == A[j-1]) flag = false;
    if (flag) ++s;
  }
  cout << s << "\n";
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, i;
  string A[20];
  bool i_flag = true, d_flag = true;
  cin >> N;
  for (i = 1; i <= N; ++i) cin >> A[i-1];
  for (i = 2; i <= N; ++i)
    if (A[i-2] > A[i-1]) i_flag = false;
    else if (A[i-2] < A[i-1]) d_flag = false;
  if (i_flag == true) cout << "INCREASING\n";
  else if (d_flag == true) cout << "DECREASING\n";
  else cout << "NEITHER\n";
}

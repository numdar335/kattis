#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int A[4], i;
  for (i = 1; i <= 4; ++i) cin >> A[i-1];
  sort(A, A+4);
  cout << A[0]*A[2] << "\n";
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string A, B;
  cin >> A >> B;
  reverse(A.begin(),A.end());
  reverse(B.begin(),B.end());
  cout << max(A,B) << "\n";
}
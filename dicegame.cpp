#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int a[4], b[4], i;
  for (i = 2; i <= 4; i += 2) {
    cin >> a[i-2] >> b[i-2] >> a[i-1] >> b[i-1];
    b[i-2] += a[i-2]-1;
    b[i-1] += a[i-1]-1;
  }
  if (b[0]+b[1] < b[2]+b[3]) cout << "Emma\n";
  else if (b[0]+b[1] == b[2]+b[3]) cout << "Tie\n";
  else cout << "Gunnar\n";
}
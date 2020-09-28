#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int H, M;
  cin >> H >> M;
  if (H > 0) {
    H = H*60+M-45;
    cout << H/60 << " " << H-(H/60)*60 << "\n";
  }
  else cout << "23" << " " << 75-M << "\n";
}
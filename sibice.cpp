#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, W, H, i, a;
  cin >> N >> W >> H;
  for (i = 1; i <= N; ++i) {
    cin >> a;
    if (a > W && a > H && a > sqrt(W*W+H*H)) cout << "NE\n";
    else cout << "DA\n";
  }
}
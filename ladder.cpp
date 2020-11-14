#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  short h, v;
  cin >> h >> v;
  cout << ceil(h/sin(M_PI*v/180)) << "\n";
}
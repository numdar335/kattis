#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string a;
  short i, val = 1;
  char b;
  cin >> a;
  for (i = 0; i < (short)a.length(); ++i) {
    b = a.at(i);
    if (b == 'A') {
      if (val == 1) val = 2;
      else if (val == 2) val = 1;
    }
    else if (b == 'B') {
      if (val == 2) val = 3;
      else if (val == 3) val = 2;
    }
    else {
      if (val == 1) val = 3;
      else if (val == 3) val = 1;
    }
  }
  cout << val << "\n";
}
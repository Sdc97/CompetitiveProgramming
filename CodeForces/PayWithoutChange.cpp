#include <bits/stdc++.h>

using namespace std;

int main() {
  int q, a, b, n, s;
  cin >> q;
  while(q--) {
    cin >> a >> b >> n >> s;
    if((a > 0 && n == s) || b >= s) {
      cout << "YES" << endl;
      continue;
    }
    int highcoin = s / n;
    int diff;
    if(highcoin > a) diff = s - a * n;
    else diff = s - highcoin * n;
    //cout << diff;

    if(diff < 0) {
      cout << "NO" << endl;
    } else if ( diff-b <= 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}

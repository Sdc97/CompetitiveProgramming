#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, m, q;
  cin >> t;
  for(int i = 0; i < t; i++) {
    set<int> torn;
    int total = 0, temp;
    cin >> n >> m >> q;
    //cout << n << m << q;
    for(int j = 0; j < m; j++) {
      cin >> temp;
      //cout << temp << endl;
      torn.insert(temp);
    }
    for(int j = 0; j < q; j++) {
      cin >> temp;
      total += n / temp;
      for(auto it = torn.begin(); it != torn.end(); ++it) {
	//cout << *it << temp << endl;
	if(*it % temp == 0) {
	  --total;
	}
      }
    }

    cout << "Case #" << i+1 << ": " << total << endl;
  }
  return 0;
}

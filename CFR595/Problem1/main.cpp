#include <bits/stdc++.h>

using namespace std;

int main() {
  int q, n;
  cin >> q;
  while(q--) {
    cin >> n;
    vector<int> vals(n);
    int temp;
    for(int i = 0; i < n; i++) {
      cin >> temp;
      vals[i] = temp;
    }

    int lists = 1;
    sort(vals.begin(),vals.end());
    for(int i = 1; i < n; i++) {
      if(abs(vals[i]-vals[i-1]) == 1) lists = 2;
    }
    cout << lists << endl;
  }
}

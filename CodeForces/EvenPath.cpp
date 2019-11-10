#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,q;
  cin >> n >> q;
  vector<vector<int>> field(n,vector<int>(n));

  vector<int> col(n);
  vector<int> row(n);

  for(int i = 0; i < n; i++) {
    cin >> col[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> row[i];
    for(int j = 0; j < n; j++) {
      field[j][i] = col[j] + row[i];
    }
  }

  while(q--) {
    
  }
}

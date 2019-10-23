#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  long long n;
  cin >> q;
  while (q--) {
    cin >> n;
    map<int,int> original;
    vector<set<int>> order;
    int temp;
    for(int i = 0; i < n; i++) {
      cin >> temp;
      original[i+1] = temp;
    }
    set<int> init;
    init.insert(original[1]);
    order.push_back(init);
    
    cout << endl;
  }
}

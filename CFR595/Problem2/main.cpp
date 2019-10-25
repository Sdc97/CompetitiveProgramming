#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  long long n;
  cin >> q;
  while (q--) {
    cin >> n;
    vector<set<int>> order(1);
    int temp;
    vector<int> original(n);
    for(int i = 0; i < n; i++) {
      cin >> temp;
      for(int j = 0; j < order.size(); j++) {
	if(order[j].find(temp) == order[j].end() && order[j].find(i+1) == order[j].end()) {
	  order[j].insert(temp);
	} else if (j == order.size()-1) {
	  set<int> curr;
	  curr.insert(temp);
	  order.push_back(curr);
	}
      }
      original[i] = temp;
    }

    for(int i = 0; i < n; i++) {
      int size;
      for(int j = 0; j < order.size(); j++) {
	auto it = order[j].find(i+1);
	if(it != order[j].end()) {
	  size = order[j].size();
	  break;
	}
      }
      cout << size << " ";
    }
    cout << endl;
  }
}

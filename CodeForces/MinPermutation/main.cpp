#include <bits/stdc++.h>

using namespace std;

int main() {
  int q,n;
  cin >> q;
  while(q--) {
    int ops = 0;
    cin >> n;
    vector<int> vals(n);
    for(int i = 0; i < n; i++) {
      cin >> vals[i];
      //cout << vals[i] << " ";
    }
    for(int i = 0; i < n && ops < n; i++) {
      int min = i;
      int j;
      for(j = i; j < n; j++) {
	if(vals[j] < vals[min]) {
	  min = j;
	  //cout << vals[min] << endl;
	}
      }
      while(min > i && ops < n-1) {
	cout << "Swapping " << vals[min-1] << " " << vals[min] << endl;
	std::swap(vals[min-1],vals[min]);
	min--;
	ops++;
      }
      cout << endl;
    }
    for(int i = 0; i < n; i++) {
      cout << vals[i] << " ";
    }
    cout << endl;
  }
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  cin >> k;
  while(k--) {
    int n;
    cin >> n;
    vector<int> plank(n);
    int temp;
    for(int i = 0; i < n; i++) {
      cin >> temp;
      plank[i] = temp;
    }

    std::sort(plank.begin(),plank.end());
    int max = 0;
    for(int i = plank.size()-1; i >= 0; i--) {
      if(plank[i] > max && max < plank.size()-i) {
	max++;
      } else {
	break;
      }
    }
    cout << max << endl;
  }
}

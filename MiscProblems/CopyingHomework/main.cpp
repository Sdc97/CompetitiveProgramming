#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int temp;
  cin >> n;
  map<int,int> mine;
  map<int,int> ret;
  for(int i = 0; i < n; i++) {
    cin >> temp;
    mine[temp] = i;
  }
  auto it = mine.begin();
  auto to = mine.end();
  to--;
  for(int i = 0; i < ceil(n/2.0); i++) {
    ret[it->second] = to->first;
    ret[to->second] = it->first;
    it++;
    to--;
  }

  for(auto it = ret.begin(); it != ret.end(); it++) {
    cout << it->second << " ";
  }

}

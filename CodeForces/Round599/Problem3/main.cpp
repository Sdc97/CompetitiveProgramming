#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> temp;
  for(int i = 2; i < sqrt(n); i++) {
    if(n%i == 0) {
      temp.push_back(i);
    }
    
  }
}

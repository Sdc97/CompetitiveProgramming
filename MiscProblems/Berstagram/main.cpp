#include <bits/stdc++.h>

using namespace std;

struct post {
  int postval;
  int max;
  int min;
  post(int i) {
    postval = i;
    max = i;
    min = i;
  }

  checkNew(int pos) {
    if(pos > max) {
      max = pos;
    }
    if(pos < min) {
      min = pos;
    }
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<post> curr;
  for(int i = 0; i < n; i++) {
    curr.push_back(new post(i+1));
  }

}

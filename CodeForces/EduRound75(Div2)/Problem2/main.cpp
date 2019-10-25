#include <bits/stdc++.h>

using namespace std;

struct ispal {
  int ones = 0;
  int zeros = 0;
  int currsize = ones + zeros;
  int currpal = 0;
  ispal(int x, int y) {
    ones = y;
    zeros = x;
    if(test_pal) currpal = 1;
  }
  int addpal(int z, int o) {
    ones += o;
    zeros += z;
  }
  bool test_pal() {
    currsize = ones + zeros;
    if(currsize%2 == 0) {
      return ones%2 == zeros%2;
    } else {
      return ones%2 != zeros%2;
    }
  }
};

int main() {
  int q, n;
  cin >> q;
  while(q--) {
    cin >> n;
    string temp;
    int ones = 0, zeros = 0;
    vector<ispal> count();
    getline(cin,temp);
    getline(cin,temp);
    for(int j = 0; j < temp.length(); j++) {
        if(temp[j] == '1')
	  ones++;
	else
	  zeros++;
    }
    ispal first(zeros,ones);
    cout.push_back(first);
    for(int i = 0; i < n; i++) {
      ones = 0; zeros = 0;
      getline(cin,temp);
      for(int j = 0; j < temp.length(); j++) {
        if(temp[j] == '1')
	  ones++;
	else
	  zeros++;
      }
      ispal mypal(zeros,ones);
      for(int j = 0; j < count.size(); j++) {
	count[j].ones += mypal.ones;
	count[j].zeros += mypal.zeros;
	if(!count[j].test_pal()) {
	  count[j].ones -= mypal.ones;
	  count[j].zeros -= mypal.zeros;
	} else if (j = count.size() -1) {
	  count.push_back(mypal);
	}
      }
    }
    
    for(int i = 0; i < count.size(); i++) {
      cout << count[i].zeros << " " << count[i].ones << endl;
    }
    cout << endl << endl << endl;
  }
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  cin >> k;
  while(k--) {
    int n;
    cin >> n;
    string first;
    string second;
    getline(cin,first);
    getline(cin,first);
    getline(cin,second);
    int problems = 0;
    char p1,p2;
    bool firstp = true;
    bool works = true;
    for(int i = 0; i < n; i++) {
      if(first[i] != second[i]) {
	problems++;
	if(firstp) {
	  p1 = first[i];
	  p2 = second[i];
	  firstp = false;
	} else {
	  if(p1 != first[i] || p2 != second[i]) {
	    works = false;
	    break;
	  }
	}
      }
    }
    if(works && problems == 2) 
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}

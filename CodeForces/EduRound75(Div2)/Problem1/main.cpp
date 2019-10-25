#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  string str;
  getline(cin,str);
  while(t--) {
    string temp;
    set<char> working;
    getline(cin,temp);
    int size = 0;
    //cout << temp << endl;
    while(size < temp.length()) {
      if(temp[size] == temp[size+1]) {
	//cout << temp[size] << endl;
	temp.erase(size,2);
      } else {
	size++;
      }
    }
    
    sort(temp.begin(),temp.end());
    for(int i = 0; i < temp.length(); i++) {
      working.insert(temp[i]);
    }

    for(auto it = working.begin(); it != working.end(); it++) {
      cout << *it;
    }
    cout << endl;
  }
}

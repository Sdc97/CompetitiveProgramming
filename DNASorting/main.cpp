//#include <bits/stdc++.h>
#include <iostream>
#include <>
#include <string>
#include <iterator>

using namespace std;

class DNACompare {
  bool 

int main() {
  multiset<int,string> con;
  string temp;
  int length, q;
  cin >> length >> q;
  getline(cin,temp);
  for(int i = 0; i < q; i++) {
    getline(cin,temp);
    //cout << temp << endl;
    int inversions = 0;
    for(int j = 0; j < temp.length(); j++) {
      char s = temp[j];
      for(int k = j+1; k < temp.length(); k++) {
	if(s > temp[k]) {
	  inversions++;
	}
      }
    }
    con[inversions] = temp;
  }
  //cout << endl;
  
  for(unordered_map<int,string>::iterator it = con.begin(); it != con.end(); it++) {
    cout << it->second << endl;
  }
}

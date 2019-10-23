#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  string line;
  unordered_map<char,int> con;
  unordered_map<int,char> sec;
  for(int i = 0; i < 4; i++) {
    getline(cin,line);
    for(int j = 0; j < line.length(); j++) {
      if (isalpha(line[j])) 
	  con[line[j]]++;
    }
  }
  
  for(auto it = con.end()-1; it != con.begin()-1; --it) {
    cout << it->first << " " << it->second << endl;
    sec[it->second] = it->first;
  }
  cout << endl;
  for(unordered_map<int,char>::iterator it = sec.end()-1; it != sec.begin()-1; --it) {
    cout << it->first << " " << it->second << endl;
  }
}

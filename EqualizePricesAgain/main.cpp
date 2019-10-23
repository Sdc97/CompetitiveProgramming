#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

int main() {

  int q, n;
  map<int,int> prices;
  int sum = 0;
  int min = 0;
  cin >> q;
  string output = "";
  int temp;
  map<int,int>::iterator it;
  
  for(int i = 0; i < q; i++) {
    cin >> n;
    for(int j = 0; j < n; j++){
      cin >> temp;
      it = prices.find(temp);
      if(it != prices.end()) {
	prices.insert(pair<int,int>(temp,temp));
      }
      sum += temp;
      prices[temp];
    }
    
    min = sum;

    for(it = prices.begin(); it != prices.end(); it++){
      if(((it->first)*n >= sum) && (it->first < min)) {
	min = it->first;
      }
    }
    //cout << min << endl;
    output += to_string(min);

    if(i+1 != q) {
      output += "\n";
    }
    
    sum = 0;
    prices.clear();
  }
  cout << output;

}
    

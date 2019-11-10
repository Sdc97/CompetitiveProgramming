#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int q, n, k;
    string temp;
    cin >> q;
    while(q--) {
      cin >> n >> k >> temp;
      long long int ops = 0;
      string an;
      //cout << n << " " << k << endl;
      bool already = false;;
      for(long long int i = 0; i < n && k > 0; i++) {
	if(temp[i] == '0') {
	  if(ops < k) {
	    k = k - ops;
	    an += '0';
	  } else {
	    string t(ops-k,'1');
	    an += t;
	    an += '0';
	    string s(k,'1');
	    an += s;
	    an += temp.substr(i+1);
	    cout << an <<endl;
	    already = true;
	    break;
	  }
	} else {
	  ops++;
	}
      }
      //cout << "here" << endl;
      if(!already) {
	an += string(ops,'1');
	cout << an <<endl;
      }
      
    }
}

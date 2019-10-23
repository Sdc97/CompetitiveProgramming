#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if(a < b) swap(a,b);
  if(b == 0) return a;
  return gcd(b,a%b);
}

int main() {
  int n, temp;
  long long sum = 0;
  vector<int> vals;
  cin >> n;
  int original = n;
  for(int i = 0; i < n; i++) {
    cin >> temp;
    vals.push_back(temp);
    sum += temp;
  }
  sort(vals.begin(),vals.end());
  //cout << " here " << endl;
  int max = vals[vals.size()-1];
  long long people = 0;
  int currgcd = max - vals[0];
  for(int i = vals.size()-2; i >= 0; i--) {
    currgcd = gcd(currgcd,max-vals[i]);
    //cout << vals[i] << endl;
  }
  people = ((long long)max * n - sum) / currgcd;
  cout << people << " " << currgcd << endl;
}

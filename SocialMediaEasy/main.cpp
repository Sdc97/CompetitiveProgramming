#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
  double average;
  double curr;
  for(int i = 0; i < 12; i++) {
    scanf("%lf", &curr);
    average += curr;
  }

  average /= 12;

  printf("$%.2lf\n",average);

}

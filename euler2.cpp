// Euler 2
#include <iostream>
using namespace std;
#define MAX 4000000

int main() {
  int temp = 0;
  int sum = 2;
  int lead = sum;
  int lag = 1;

  while(lead < MAX){
    temp = lead + lag;
    if (temp%2 == 0){
      sum += temp;
    }
    lag = lead;
    lead = temp;
  }
  cout << sum;
}

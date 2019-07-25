#include <iostream>

using namespace std;

int isPrime(int n){
  for(int i = 2; i <=n/2; ++i){
    if (n%i==0){
      return 0;
    }
  }
  return 1;
}
int main() {
 int n;
 cout << "Find the nth prime starting at two --> inf" << endl;
 cout << "Enter n:" << endl;
 cin >> n;

 int prime = 2;
 int count = 0;
 while(1){
  if(isPrime(prime)){
   count++;
  }
  if(count == n){
   cout << "The nth prime (where n = " << n << ") is: "<< prime << endl;
   return 0;
  }
 prime++;
 }

}

#include <iostream>
using namespace std;

int isPrime(long n){
  for(long i = 2; i <=n/2; ++i){
    if (n%i==0){
      return 0;
    }
  }
  return 1;
}

int main(){

  long num = 600851475143;
  long count = 2;
  int searching = 1;
  long r = num;
  while(searching){
    if(r%count == 0){
      r = r/count;
      count = 2;
    }
    else {
      if(isPrime(r)){
	cout << r << endl;
        return 0;
      }
      else{
	++count;
      }
    }
  }

}

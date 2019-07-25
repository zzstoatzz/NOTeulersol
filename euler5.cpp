#include <iostream>

using namespace std;

int main() {
 int range, count;
 cout << "Find smallest number which is evenly divisible (remainder = 0) in range (1,n) " << endl;
 cout << "Enter upper bound of range: " << endl;
 cin >> range;
 int num = range;
 while(1){
  count = 0;
  for(int i = 1; i < range+1; i++){
   if (num%i == 0){
    count++;
   }
   if (count == range){
    cout << endl;
    cout << "The smallest evenly divisible number in 1 - " << range << " is: " << num << endl;
    return 0;
   }
  }
  num++;
 }
}

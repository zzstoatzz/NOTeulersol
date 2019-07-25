#include <iostream>

using namespace std;

int main() {
 int range;
 cout << "Find difference between the sum of the squares and the square of the sum in range (1, n)" << endl;
 cout << "Enter upper bound of range:" << endl;
 cin >> range;
 long square = 0;
 long sum = 0; 

 for (int i = 1; i < range+1; i++){
  square += i;
  sum += i*i;
 }
 square = square*square;
 int diff = square - sum;
 cout << "The difference for range (1, " << range << ") is: " << diff << endl;
}

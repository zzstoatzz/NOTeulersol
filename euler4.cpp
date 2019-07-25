#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int isPal(int n){
  std::string string;
  std::stringstream ss;
  ss << n;
  string = ss.str();
  int Pal = 1;
  for(int i = 0; i < string.size(); i++){
   if (string[i] != string[string.size()-1-i]){
     Pal = 0;
   }
  }
  return Pal;

}
int main(){
 int N;
 cout << "Find largest palindrome that is the product of two n digit numbers." << endl;
 cout << "Enter n:" << endl;
 cin >> N;
 int low = pow(10, N-1);
 int high = pow(10, N);
 int big, J, I, i, j;

 for (i = high; i-- > low;){
  for (j = high; j-- > low;){
   if (isPal(i*j) && i*j > big){
    big = i*j;
    I = i;
    J = j;
   }
  }
 }
    cout << "------------------------------" << endl;
    cout << "The largest palindrome is: " << big << endl;
    cout << "The factors are: " << I << " and " << J << endl;
    cout << "------------------------------" << endl;
 
}

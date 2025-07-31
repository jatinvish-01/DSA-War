#include <iostream>
using namespace std;

int findSmallestDigit(int num){

      int smallest = INT16_MAX;
      
      while(num != 0){
            int digit = num % 10;

            if(digit < smallest){  // med 1
                  smallest = digit;
            }
            // smallest = min(digit, smallest);  med 2 both same

            num = num / 10;
      }
      return smallest;
}

int main(){
      int num;
      cin >> num;
      int result = findSmallestDigit(num);
      cout << result;
}     
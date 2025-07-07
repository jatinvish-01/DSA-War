#include <iostream>
using namespace std;

int SumofNNumber(int num){
      int sum = 0;
      while(num != 0){
            // find digit
            int digit = num % 10;

            // sum digit
            sum = sum + digit;

            // Update n
            num = num / 10;
      }
      return sum;
}

int main(){
      int num;
      cin >> num;
      int result = SumofNNumber(num);
      cout << result;
}

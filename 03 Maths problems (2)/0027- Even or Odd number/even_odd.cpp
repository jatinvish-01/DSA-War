#include <iostream>
using namespace std;

string CheckEvenOdd(int num){
      // Using Bitwise 
      if(num & 1){
            //num &  --> 1
            return "Odd";
      }else{
            //num &  --> 0
            return "Even";
      }

      // if(num % 2==0){
      //       return "Even";
      // }else {
      //       return "Odd";
      // }
}

int main(){
      int num;
      cin >> num;
      string result = CheckEvenOdd(num);
      cout << result;
}
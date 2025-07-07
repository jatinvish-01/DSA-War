#include <iostream>
using namespace std;

int reverseNum(int num){
      int ans = 0;
      while(num != 0){
            int digit = num % 10;
            ans = ans * 10 + digit;
            num = num / 10;
      }
      return ans;

      //Using For loop
      // for(num != 0; num=num/10;){
      //       int digit = num%10;
      //       ans = ans * 10 +  digit;
      // }
      // return ans;
}

int main(){
      int num;
      cin >> num;
      int result = reverseNum(num);
      cout << result;
}
#include <iostream>
using namespace std;

int reverseNum(int num){
      int ans = 0;
      while(num != 0){
            int digit = num % 10;

            // reverse the digit
            ans = ans * 10 + digit;

            // Update the num
            num = num / 10;
      }
      return ans;
}

string isPalindrome (int num){
      int original = num;
      int rev = reverseNum(num);

      if(original == rev){
            return "Yes";
      }
      else{
            return "No";
      }
}

int main(){
      int num;
      cout << "Enter the number: ";
      cin >> num;
      cout << "It is a Palindrome: " << isPalindrome(num) << endl;
      return 0;
}
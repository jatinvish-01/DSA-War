#include <iostream>
using namespace std;

string isPrime (int num){
      if(num == 1){
            return "No";
      }
      if(num == 2 || num == 3){
            return "Yes";
      }

      int start = 2;
      int end = num - 1;
      for(int i = start; i<=end; i++){
            if(num % i == 0){
                  return "No";
            }
      }
      return "Yes";
}

int main(){
      int num;
      cout << "Enter the number: ";
      cin >> num;
      cout << isPrime(num) << endl;
      return 0;
}
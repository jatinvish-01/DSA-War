#include <iostream>
using namespace std;

string isPowerOfTwo (int num){
      if(num == 0){
            return "No";
      }
      
      // Below code is based on assumption that input would be > 0
      if((num & (num - 1)) == 0){
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
      cout << isPowerOfTwo(num) << endl;
      return 0;
}
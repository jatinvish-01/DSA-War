#include <iostream>
using namespace std;

void printRhombus(int n){
      //Outer loop
      for(int row = 1; row<=n; row++){

            // Stars
            for(int col = 1; col<=n-row; col++){
                  cout << " ";
            }
            for(int col = 1; col<=n; col++){
                  cout << "*";
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printRhombus(n);
}
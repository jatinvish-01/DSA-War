#include <iostream>
using namespace std;

void printHollowPyramid(int n){
      // Outer loop
      for(int row = 1; row<=n; row++){
            // Inner loop
            // Taking care of Space
            for(int col = 1; col<=(n-row); col++){
                  cout << "  ";
            }

            if(row == 1){
                  cout << "* ";
            }
            else if(row == n){
                  for(int col = 1; col<=(2*n-1); col++){
                        cout << "* ";
                  }
            }
            else{
                  // Middle rows
                  // step1- print one *
                  cout << "* ";

                  // step2- print some space
                  for(int col = 1; col<=(2*row-3); col++){
                        cout << "  ";
                  }
                  cout << "* ";
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printHollowPyramid(n);
}
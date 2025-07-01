#include <iostream>
using namespace std;

void printSolidPyramid(int n) {
      // Outer loop
      
      for(int row = 1; row<=n; row++){
            // inner loop

            // for space
            for(int col = 1; col<=(n-row); col++){
                cout << "  ";
            }
            // for stars
            for(int col = 1; col<=(2*row-1); col++){
                cout <<  "* ";
            }
            cout << endl;
      }
}

int main(){
      int n;
      // cout << "Enter the number: ";
      cin >> n;
      printSolidPyramid(n);
}
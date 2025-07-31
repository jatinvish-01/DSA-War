#include <iostream>
using namespace std;

int printInvertedPyramid(int n){
      // Outer loop
      for(int row = 1; row<=n; row++){
            // Inner loop
            for(int col = 1; col<=row-1; col++){
                  cout << " ";
            }
            // stars
            for(int col = 1; col<=(2*n-(2*row-1)); col++){
                  cout << "*";
            }
            cout << endl;
      }
}

int main(){
      int n;
      cout << "Enter n: ";
      cin >> n;
      printInvertedPyramid(n);
}
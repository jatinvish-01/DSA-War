#include <iostream>
using namespace std;

void printNumberPyramid(int n){
      // Outer loop
      for(int i = 1; i<=n; i++){

            // Inner loop
            // Space
            for(int j = 1; j<=n-i; j++){
                  cout << " ";
            }

            // for number      
            for(int j = 1; j<=i; j++){
                  cout << j << " ";
            }
            cout << endl;
      }
} 

int main(){
      int n;
      cin >> n;
      printNumberPyramid(n);
}
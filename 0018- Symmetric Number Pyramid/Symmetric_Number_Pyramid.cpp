#include <iostream>
using namespace std;

void printSymmeticPyramid(int n){
      // Outer loop
      for(int i = 1; i<=n; i++){
            //Inner loop
            for(int j = 1; j<=i; j++){
                  cout << j;
            }

            // Space
            for(int j = 1; j<=2*(n-i); j++){
                  cout << " ";
            }

            // for number
            for(int j = i; j>=1; j--){
                  cout << j;
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printSymmeticPyramid(n);
}

// 1      1
// 12    21
// 123  321
// 12344321
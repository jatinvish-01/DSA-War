#include <iostream>
using namespace std;

void printFloydsTriangle(int n){
      int count = 1;
      //Outer loop
      for(int  i = 2; i<=n; i++){
            //Inner loop
            for(int j = 1; j<=i; j++){
                  cout << count;
                  count++;
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printFloydsTriangle(n);
}
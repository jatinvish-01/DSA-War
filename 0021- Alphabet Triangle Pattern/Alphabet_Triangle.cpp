#include <iostream>
using namespace std;


void printAlphabetTriangle(int n){
      //Outer loop
      for(int i = 1; i<=n; i++){

            char ch = 'A';
            for(int j = 1; j<=i; j++){
                  cout << ch;
                  ch++;
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printAlphabetTriangle(n);
}
#include <iostream>
using namespace std;

void printSymmetricAlphabetPyramid(int n){
      for(int i = 1; i<=n; i++){

            //Space
            for(int j = 1; j<=(n-i); j++){
                  cout << " ";
            }
            char ch = 'A';
            for( int j = 1; j<=i; j++){
                  cout << ch;
                  ch++;
            }

            ch = ch - 2;
            while(ch >= 'A'){
                  cout << ch;
                  ch--;
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printSymmetricAlphabetPyramid(n);
}
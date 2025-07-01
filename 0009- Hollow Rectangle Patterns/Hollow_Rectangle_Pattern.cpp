#include <iostream>
using namespace std;

void printHllowRectangle(int n){
      for(int row = 1; row<=n; row++){
            if(row == 1 || row == 2 || row == n){
                  for(int col = 1; col<=row; col++){
                        cout << "* ";
                  }
            }
            else{
                  cout << "* ";
                  for(int col = 1; col<=(row-2); col++){
                        cout << "  ";
                  }
                  cout << "* ";
            }
            cout << endl;
      }
}

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
      printHllowRectangle(n);
}
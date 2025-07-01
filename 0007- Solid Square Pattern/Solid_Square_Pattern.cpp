#include <iostream>
using namespace std;

void printSquare(int n){
      for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                cout << "* ";
            }
            cout << endl;
      }
}

int main(){
      int n;
      // cout << "Enter the numbers of stars you want: ";
      cin >> n;
      printSquare(n);
}
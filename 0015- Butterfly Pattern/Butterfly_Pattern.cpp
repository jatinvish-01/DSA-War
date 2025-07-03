#include <iostream>
using namespace std;

void printBatterflyPattern(int n){
      for(int i = 0; i<2*n; i++){ // row

            int cond = i < n ? i : n+(n-i-1);
            int space_count = i < n ? 2*(n-cond-1) : i-cond-1;

            for(int j = 0; j<2*n; j++){ // col
                  if(j<=cond){
                        cout << "* ";
                  }
                  else if(space_count > 0){
                        cout << "  ";
                        space_count--;
                  }
                  else{
                        cout << "* ";
                  }
            }
            cout << endl;
      }
}

int main(){
      int n;
      cin >> n;
      printBatterflyPattern(n);
}
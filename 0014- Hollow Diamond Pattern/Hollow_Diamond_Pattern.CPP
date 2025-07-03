#include <iostream>
using namespace std;

void printHollowDiamond(int n){

      int part1 = n-1;
      int part2 = n;
      int part3 = n-1;
      if(n == 1){
            cout << "*" << endl;
            return;
      }
      
      // Outer loop
      // Part 1
      for(int row = 1; row<=part1; row++){
            //Space
            for(int col = 1; col<=n-row; col++){
                  cout << " ";
            }
            //Star
            if(row == 1){
                  cout << "*";
            }
            else{
                  cout << "*";
                  for(int col = 1; col<=2*row-3; col++){
                        cout << " ";
                  }
                  cout << "*";
            }
            cout << endl;
      }

            // Part 2
            cout << "*";

            //space
            for(int col = 1; col<=2*part2-3; col++){
                  cout << " ";
            }
            int totalSapces = 2*part2-3;
            cout << "*";
            cout << endl;
            // Part 3
            for(int row = 1; row<=part3; row++){
                  // Space
                  for(int col = 1; col<=row; col++){
                        cout << " ";
                  }
                  //  Star
                  if(row == part3){
                        cout << "*";
                  }
                  else{
                        cout << "*";
                        //space
                        totalSapces = totalSapces - 2;         
                        for(int col = 1; col<=totalSapces; col++){
                              cout << " ";
                        }
                        cout << "*";
                  }
                  cout << endl;
            }
}

int main(){
      int n;
      cin >> n;
      printHollowDiamond(n);
}

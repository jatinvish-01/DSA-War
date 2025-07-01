#include <iostream>
using namespace std;

void printSolidDiamond(int n){
    // 1st Part - Upper Half
    for(int row = 1; row<=n; row++){
        // Space
        for(int col = 1; col<=(n-row); col++){
            cout << " ";
        }

        // Stars
        for(int col = 1; col<=(2*row-1); col++){
            cout << "*";
        }
        cout << endl;
    }

    // 2nd Part - Lower Half  
    n--; // To avoid repeating the middle line
    for(int row = 1; row<=n; row++){
        // Space
        for(int col = 1; col<=row; col++){
            cout << " ";
        }

        // Stars
        for(int col = 1; col<=(2*(n-row)+1); col++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printSolidDiamond(n);
}

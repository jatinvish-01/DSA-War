#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findMaxValue(vector<int>& arr){
      int size = arr.size();
      int maxi = INT_MIN;

      for(int i = 0; i<size; i++){
            maxi = max(maxi, arr[i]);
      }     
      return maxi;
}

int main(){
      std::vector<int> arr = {10,20,30,40,50};
      cout << findMaxValue(arr) << endl;
      return 0;
}
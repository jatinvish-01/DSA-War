#include <iostream>
#include <vector>
using namespace std;

double findAverage (const vector<int>& arr){
      int ans = 0;
      int totalSum = 0;
      int size = arr.size();
      for(int i = 0; i<size; i++){
            int value = arr[i];
            totalSum = totalSum + value;
      }
      ans = totalSum / size;
      return ans;
}

int main(){
      std::vector<int> arr = {1,2,3,4,5};
      cout << findAverage(arr) << endl;
}
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> multiplyByTen (const vector<int>& arr){
      std::vector<int> arrCopy = arr;
      int size = arrCopy.size();
      for(int i = 0; i<size; i++){
            arrCopy[i] = arrCopy[i] * 10;
      }
      return arrCopy;
}

int main(){
      std::vector<int> arr = {10, 20, 30, 40, 50};
      std::vector<int> result = multiplyByTen(arr);
      for(int val : result){
            cout << val << " ";
      }
      cout << endl;
      return 0;
}
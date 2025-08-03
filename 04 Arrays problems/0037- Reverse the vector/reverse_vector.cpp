#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray (const std::vector<int>& arr){
      vector<int> num = arr;
      int n = num.size();
      int i = 0;
      int j = n-1;
       while(i <= j){
            swap(num[i], num[j]);
            i++;
            j--;
      }
      return num;
}

int main(){
      vector<int> num = {3,8,6,9,5,1};
      vector<int> result = reverseArray(num);
      for(int val : result){
            cout << val << " ";
      }
      return 0;
}
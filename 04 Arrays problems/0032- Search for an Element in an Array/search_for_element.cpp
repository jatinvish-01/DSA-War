#include <iostream>
#include <vector>
using namespace std;


int searchElementInArray(vector<int>& nums, int target) {
    int size = nums.size();

    for(int i = 0; i<size; i++){
        int value = nums[i];
        if(value == target){
            return i; // index of the error
        }
    }
    return -1; 
}

int main(){
      int target = 3;
      std::vector<int> nums = {1,2,3,4,5};
      cout << searchElementInArray(nums, target) << endl;
      return 0;
}
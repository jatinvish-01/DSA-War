#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countZeroesOnes(const vector<int>& nums) {
    int totalZeroes = 0;
    int totalOnes = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            totalZeroes++;
        }
        if(nums[i] == 1) {
            totalOnes++;
        }
    }
    return {totalZeroes, totalOnes}; // return after loop finishes
}

int main() {
    vector<int> nums = {1, 1, 1, 0, 0, 1, 0, 0, 1};
    pair<int, int> result = countZeroesOnes(nums);
    cout << "Zeroes: " << result.first << ", Ones: " << result.second << endl;
    return 0;
}

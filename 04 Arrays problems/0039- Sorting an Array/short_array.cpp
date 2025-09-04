#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
    vector<int> arr = nums;
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    vector<int> nums = {0,1,0,1,0,1,0};
    vector<int> result = sortArray(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

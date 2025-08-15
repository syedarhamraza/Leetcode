//
// Created by Syed Arham Raza on 15/08/2025.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxSum = INT_MIN, currSum = 0;
        for (int value: nums) {
            currSum += nums[value];
            maxSum = max(currSum, maxSum);
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum subarray largest sum: " << sol.maxSubArray(vec);
    return 0;
}
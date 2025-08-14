//
// Created by arham on 14/08/2025.
//
//Question
/*Given a non-empty array of integers nums, every element appears twice except for one.
Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.*/

//Sol
// Using bitwise XOR where n is any number
// n ^ n = 0
// n ^ 0 = n

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_number = 0;
        for(int value: nums) {
            single_number = single_number ^ value;
        }
        return single_number;

    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,1,2,1,2};
    cout<< "The single number is: " << sol.singleNumber(nums); //Output: 4
}


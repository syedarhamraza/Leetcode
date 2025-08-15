#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else {
                freq--;
            }
        }


        //checking if the candidate is actually the majority if the array doesnt always have majority element like [1,2,3,4]
        int count = 0;
        for(int val: nums){
            if(val == ans){
                count++;
            }
        }
        if(count > nums.size() / 2) {
            return ans;
        }else {
            return -1;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,3};
    cout<< "The Majority Element is: " << sol.majorityElement(nums);
}


//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            x = x ^ i+1;
            sum = sum ^ nums[i];
        }
        return sum ^ x;
    }
};
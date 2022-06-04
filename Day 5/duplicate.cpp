//Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                i++;
            }
        }
        return ans;
    }
};
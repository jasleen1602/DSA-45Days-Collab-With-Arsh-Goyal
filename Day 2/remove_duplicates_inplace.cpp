//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]!=nums[i+1])
              v.push_back(nums[i]); 
        }
        v.push_back(nums[nums.size()-1]);
        nums = v;
        return v.size();
    }
};
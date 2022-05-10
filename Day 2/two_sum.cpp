//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice

//Approach 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff=0, j;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            diff = target - nums[i];
            j=i+1;
            while(j!=nums.size()){
                if(nums[j]==diff){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                j++;
            }
        }
        return result;
    }
};
//Approach 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(target-nums[i])!=mp.end()){
                v.push_back(i);
                v.push_back(mp[target-nums[i]]);
                return v;
            }  
            else
                mp[nums[i]] = i;
        }
        return v;
    }
};
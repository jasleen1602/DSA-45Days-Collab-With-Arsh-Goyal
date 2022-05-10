//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.

//Approach 1
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x = 0, minm = INT_MAX, maxm = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            minm = min(minm, nums[i]);
            maxm = max(maxm, nums[i]);
            x = x ^ nums[i];
        }
        for(int i=minm; i<=maxm; i++)
            x = x ^ i;
        return x;
    }
};
//Approach 2
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int temp[nums.size()];
        for(int i=0; i<nums.size(); i++)
            temp[i]=0;
        
        for(int i=0; i<nums.size(); i++){
            if(temp[nums[i]]!=0)
                return nums[i];
            temp[nums[i]]+=1;
        }
        
        return 0;
    }
};
//Approach 3
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1, csum=0;
        int sum = n*(n+1)/2;
        for(int i=0; i<=n; i++)
            csum+=nums[i];
        return csum-sum;
    }
};
//Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxp=0;
        
        if(nums.size()==3)
            return (nums[0]*nums[1]*nums[2]);
        
        sort(nums.begin(), nums.end());
        
        int a,b,c,d,e,f;
        
        a=nums[0];
        b=nums[1];
        c=nums[nums.size()-1];
        d=nums[nums.size()-2];
        e=nums[nums.size()-3];
        
        maxp=max(a*b*c, c*d*e);
        return maxp;
    }
};

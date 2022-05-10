//Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

//Approach 1
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, h=height.size()-1, maxm = 0, curr=0;
        while(l<=h){
            curr = (h-l)*min(height[l], height[h]);
            maxm = max(curr, maxm);
            if(height[l]<height[h])
                l++;
            else
                h--;
        }
        return maxm;
    }
};

//Approach 2
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int curr, votes = 0;
    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            curr = nums[i];
            votes = 1;
        }
        else {
            if (nums[i] == curr)
                votes++;
            else
                votes--;
        }
    }
        
    int ct = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == curr)
            ct++;
        if (ct > n / 2)
            return curr;
    }
    return -1;
    }
};
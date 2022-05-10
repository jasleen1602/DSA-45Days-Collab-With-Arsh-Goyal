//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0, mid=0, h=nums.size()-1;
        while(mid<=h){
            if(nums[mid]==0){
                swap(nums[mid], nums[l]);
                l++;
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[h]);
                h--;
            }
            else
                mid++;
        }
    }
};
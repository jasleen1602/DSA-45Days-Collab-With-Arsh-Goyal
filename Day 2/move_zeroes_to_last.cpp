//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j, n=nums.size(), ct=0;
        while(i<n-ct){
            j=i+1;
            if(nums[i]==0){
                ct++;
                while(j<n-ct+1){
                    nums[j-1]=nums[j];
                    j++;
                }
                nums[n-ct]=0;
                if(i==n-ct-1)
                    break;
            }
            else
                i++;
    
        }
    }
};
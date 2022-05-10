//Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    
        unordered_map<int, int> mp; 
        int sum = 0, ct = 0;
        mp[0]=1;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum%k>=0){
                mp[sum%k]+=1;
                if(mp[sum%k]>1)
                    ct+=mp[sum%k]-1;
            }
            else{
                mp[sum%k + k]+=1;
                if(mp[sum%k + k]>1)
                    ct+=mp[sum%k + k]-1;
            }
        }
        return ct;
    }
};
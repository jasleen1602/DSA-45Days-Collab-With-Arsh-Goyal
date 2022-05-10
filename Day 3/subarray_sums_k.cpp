//BRUTE FORCE APPROACH
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum =0, ct=0;
        for(int i=0; i<nums.size(); i++){
            sum=0;
            for(int j=i; j<nums.size(); j++){
                sum+=nums[j];
                if(sum==k)
                    ct++;
            }
        }
        return ct;
    }
};

//EFFECIENT APPROACH USING HASHMAPS
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp; 
        int sum =0, ct=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum==k)
                ct++;
            if(mp.find(sum-k)!=mp.end())
                ct+=mp[sum-k];
            mp[sum]+=1;
        }
        return ct;
    }
};

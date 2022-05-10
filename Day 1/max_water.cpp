//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//Find two lines that together with the x-axis form a container, such that the container contains the most water.
//Return the maximum amount of water a container can store.

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
//There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
//In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.
//Your score is the sum of the points of the cards you have taken.
//Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size(), l=0, r=n-k, sum=0, maxsum=0;
        for(int i=0; i<n; i++)
            sum+=arr[i];
        if(n==k)
            return sum;
        for(int i=l; i<r; i++)
            sum-=arr[i];
        maxsum = sum;
        while(r<n){
            sum+=arr[l++];
            sum-=arr[r++];
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};
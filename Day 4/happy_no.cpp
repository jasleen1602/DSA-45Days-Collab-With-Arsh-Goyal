/* Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not. */

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(n){
            int temp=0;
            if(n==1)
                return true;
            if(mp[n]==0)
                mp[n]++;
            else
                return false;
            while(n){
                temp+=(n%10)*(n%10);
                n/=10;
            }
            n=temp;
        }
        return true;
    }
};
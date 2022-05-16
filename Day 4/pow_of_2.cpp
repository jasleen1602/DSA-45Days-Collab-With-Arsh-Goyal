//Given an integer n, return true if it is a power of two. Otherwise, return false.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return 0;
        n-=(n&-n);
        return n==0;
    }
};
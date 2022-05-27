//Given an integer x, return true if x is palindrome integer.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else if(x<10)
            return true;
        int arr[10], count=0;
        for(int i=0; i<=11; i++){
            if(x==0)
                break;
            arr[i]=x%10;
            x/=10;
            count++;
        }
        for(int i=0; i<count/2; i++){
            if(arr[i]!=arr[count-1-i])
                return false;
        }
        return true;
    }
};
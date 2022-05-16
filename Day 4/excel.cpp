//Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n){
            if(n%26==0){
                ans += 'Z';
                if(n>0)
                    n-=26;
            }
            else
                ans += n%26 + 'A' - 1;
            n/=26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int longestCommonSubstr(string s1, string s2, int n, int m)
{
    // your code here
    if (n == 0 || m == 0)
        return 0;

    int ans = 0;
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(dp[i][j], ans);
            }
            else
                dp[i][j] = 0;
        }
    }
    return ans;
}
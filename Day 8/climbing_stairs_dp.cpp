// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// RECURSIVE APPROACH
class Solution
{
public:
    int help(int n, vector<int> &dp)
    {
        if (n == 1 || n == 2)
            dp[n] = n;
        if (dp[n] == -1)
            dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        return help(n, dp);
    }
};

// ITERATIVE APPROACH
class Solution
{
public:
    int help(int n, vector<int> &dp)
    {
        if (n < 1)
            return -1;
        if (n == 1 || n == 2)
            return n;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        return help(n, dp);
    }
};
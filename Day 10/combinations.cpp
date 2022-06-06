//Given two integers n and k, return all possible combinations of k numbers out of the range [1, n].

class Solution
{
public:
    vector<vector<int> > result;
    void solve(int num, int n, vector<int> &v, int k)
    {
        if (k == 0)
        {
            result.push_back(v);
            return;
        }
        if (num > n)
            return;

        for (int i = num; i <= n; i++)
        {
            v.push_back(i);
            solve(1 + i, n, v, k - 1);
            v.pop_back();
        }
    }
    vector<vector<int> > combine(int n, int k)
    {
        vector<int> v;
        solve(1, n, v, k);
        return result;
    }
};
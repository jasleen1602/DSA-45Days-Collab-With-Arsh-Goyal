/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
Each number in candidates may only be used once in the combination.
Note: The solution set must not contain duplicate combinations.
*/

class Solution
{
public:

    vector<vector<int> > result;

    void solve(vector<int> &arr, int pos, int sum, int key, vector<int> &comb)
    {

        if (sum == key)
        {
            result.push_back(comb);
            return;
        }
        if (sum > key || pos == arr.size())
            return;

        for (int i = pos; i < arr.size(); i++)
        {
            if (i > pos && arr[i] == arr[i - 1])
                continue;
            int x = arr[i];
            comb.push_back(x);
            solve(arr, i + 1, sum + x, key, comb);
            comb.pop_back();
        }
    }

    vector<vector<int> > combinationSum2(vector<int> &arr, int key)
    {
        vector<int> comb;
        sort(arr.begin(), arr.end());
        solve(arr, 0, 0, key, comb);
        return result;
    }
};
// GREEDY APPROACH
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int pos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (pos < i)
                return 0;
            pos = max(pos, i + nums[i]);
        }
        return 1;
    }
};
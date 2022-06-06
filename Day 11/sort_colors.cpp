class Solution
{
public:

    //DUTCH NATIONAL FLAG SORT
    void sortColors(vector<int> &nums)
    {
        int l = 0, h = nums.size() - 1, mid = 0;
        while (mid <= h)
        {
            if (nums[mid] == 1)
                mid++;
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[h]);
                h--;
            }
            else
            {
                swap(nums[mid], nums[l]);
                l++;
                mid++;
            }
        }
    }
};
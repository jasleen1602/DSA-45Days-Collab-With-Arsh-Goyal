/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nums1.pop_back();
        }
        int i = 0, j = 0;
        while (i < nums1.size() and j < n)
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                nums1.insert(nums1.begin() + i, nums2[j]);
                j++;
            }
        }
        while (j < n)
        {
            nums1.insert(nums1.begin() + i, nums2[j]);
            j++;
            i++;
        }
    }
};
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle == "")
            return 0;
        int ct = 0;
        for (int i = 0; i < haystack.size(); i++)
        {
            if (needle[ct] == haystack[i])
                ct++;
            else if (ct > 0)
            {
                i = i - ct;
                ct = 0;
            }
            if (ct == needle.size())
                return i - ct + 1;
        }
        return -1;
    }
};
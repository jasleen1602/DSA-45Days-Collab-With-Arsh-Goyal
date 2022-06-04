class Solution
{
public:
    string addBinary(string a, string b)
    {
        string s = "";

        int m = a.size(), n = b.size(), carry = 0;

        while (m > 0 || n > 0 || carry > 0)
        {
            int num = carry;
            if (m >= 1)
            {
                num += a[m - 1] - '0';
                m--;
            }
            if (n >= 1)
            {
                num += b[n - 1] - '0';
                n--;
            }

            carry = num / 2;
            s += (num % 2) + '0';
        }

        reverse(s.begin(), s.end());
        return s;
    }
};
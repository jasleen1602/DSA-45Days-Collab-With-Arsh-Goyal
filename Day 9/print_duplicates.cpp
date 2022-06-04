void printDups(string s)
{
    unordered_map<char, int> count;

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }

    for (auto it : count)
    {
        if (it.second > 1)
            cout << it.first << " count = " << it.second << endl;
    }
}
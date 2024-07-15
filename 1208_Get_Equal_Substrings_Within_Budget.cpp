class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int n = s.length();
        int i = 0, j = 0;
        int currentCost = 0;
        int maxLen = 0;

        while (j < n)
        {
            currentCost += abs(s[j] - t[j]);
            while (currentCost > maxCost)
            {
                currentCost -= abs(s[i] - t[i]);
                i++;
            }
            maxLen = max(maxLen, j - i + 1);
            j++;
        }
        return maxLen;
    }
};
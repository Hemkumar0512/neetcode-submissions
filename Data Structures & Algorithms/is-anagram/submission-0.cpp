class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
        {
            return false;
        }

        vector<int> character(26, 0);
        for (int i = 0; s[i] != '\0'; i++)
        {
            character[s[i] - 'a']++;
            character[t[i] - 'a']--;
        }

        for (int val : character)
        {
            if (val != 0)
            {
                return false;
            }
        }
        return true;
    }
};

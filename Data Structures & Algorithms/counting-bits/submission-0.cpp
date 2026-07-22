class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> answer;
        for (int i = 0; i <= n; i++)
        {
            int count = 0, num = i;
            while (num > 0)
            {
                num = num & (num - 1);
                count++;
            }
            answer.push_back(count);
        }
        return answer;
    }
};

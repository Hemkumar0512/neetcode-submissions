class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int res = 0, size = nums.size();
        for (int i = 0; i <= size; i++)
        {
            res = res ^ i;
        }
        for (int i = 0; i < size; i++)
        {
            res = res ^ nums[i];
        }
        return res;
    }
};

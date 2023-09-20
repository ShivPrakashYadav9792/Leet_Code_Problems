class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int start = 0;
        int end = 0;
        int sum_to_find = accumulate(nums.begin(), nums.end(), 0);
        int sum1 = sum_to_find - x;
        if (sum_to_find == x)
            return nums.size();
        int ans = 0;
        int sum = 0;
        while (end < nums.size())
        {
            sum += nums[end];
            while (start < end && sum > sum1)
            {
                sum -= nums[start++];
            }
            if (sum == sum1)
            {
                ans = max(ans, end - start + 1);
            }
            end++;
        }
        if (ans == 0)
            return -1;
        return nums.size() - ans;
    }
};
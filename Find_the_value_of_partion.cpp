class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum=nums[i+1]-nums[i];
            mini=min(mini,sum);
        }
        return mini;
    }
};
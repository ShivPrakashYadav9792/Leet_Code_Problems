class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int i=0,ans=0;
        for (i=0;i<nums.size();i+=2) {
            while (i+1<nums.size()&&nums[i]==nums[i+1]){
                ++i;
                ++ans; 
            }
            if (i+1==nums.size())
                ++ans;
        }
        return ans;
    }
};
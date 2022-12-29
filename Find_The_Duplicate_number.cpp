class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag=0;
        int k;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                k=nums[i];
                break;
            }
        }
        
       return k; 
    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
     {
        vector<int>ans; 
        int count=0;
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size()-1;i=i+2)
        {
            if(nums[i]!=nums[i+1])
            {
                 ans.push_back(nums[i]); 
                 count++;
                 i=i-1;
            }
        }
        if(count!=2)
           ans.push_back( nums[nums.size()-1]);
        return ans;   
    }
};

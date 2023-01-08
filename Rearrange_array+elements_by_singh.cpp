class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n,0);
            int pi=0,i2=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pi]=nums[i];
                pi=pi+2;
            }
             else {
                 ans[i2]=nums[i];
                 i2=i2+2;
             }
        }
        return ans;
    }
};

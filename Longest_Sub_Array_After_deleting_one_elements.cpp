class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int count=0;
        int ans=0,en=0;
        for(int i=0;i<nums.size();i++){
                if(nums[i]==0)
                    count++;
            while(count>1){
                if(nums[en]==0){ 
                    count--;
                }
                en++;
            }
            ans=max(ans,i-en);
        }
        return ans;
    }
};
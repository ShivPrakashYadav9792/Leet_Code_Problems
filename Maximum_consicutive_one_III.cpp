class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int ans=0,count=0,si=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                count++;
            while(count>k){
                if(nums[si]==0)
                    count--;
                     si++;
            }
            ans=max(i-si+1,ans);
        }
        return ans;         
    }
};
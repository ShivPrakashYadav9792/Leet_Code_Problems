class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
        }
        if(count>0){
            return n-count;
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            for(int j=i+1;j<nums.size();j++){
                a=__gcd(a,nums[j]);
                if(a==1){
                    ans=min(ans,n-1+j-i);
                }
            }
        }
        if(ans==INT_MAX)
            return -1;
            else 
                return ans;
    }
};
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<n;i++){
            int left=i+1;
            int  right=n-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(abs(target-sum)<diff){
                    ans=sum;
                    diff=abs(target-sum);
                }
                 if(target==sum){
                    return sum;
                }
                 else if(sum>target){
                    right--;
                }
                 else 
                    left++;
            }
        }
        return ans;
    }
};
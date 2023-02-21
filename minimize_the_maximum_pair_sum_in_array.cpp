class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
             int left=0,right=nums.size()-1;
            int  max=0;
             while(left<=right){
                 int sum=nums[left]+nums[right];
                 if(sum>max)
                     max=sum;
                 left++;
                 right--;  
             }
             return max;
    }
};
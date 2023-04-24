class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid;
        int n=nums.size();
        int sum=0;
        if(n%2==0){
            int mid=(nums[n/2-1]+nums[n/2])/2;
            cout<<mid<<" ";
            for(int i=0;i<n;i++){
                sum=sum+abs(nums[i]-mid);
            }
            return sum;
        }
        else {
            mid=nums[n/2];
            for(int i=0;i<n;i++){
                sum=sum+abs(nums[i]-mid);
            }
            return sum;
        }
        return 0;
    }
};
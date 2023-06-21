class Solution {
public:
    long long res(vector<int>&nums,vector<int>&cost,long long median){

        long long ans=0;
         for(int i=0;i<nums.size();i++)
           ans += abs(1ll*nums[i]-median)*(1ll*cost[i]);
           return ans;  
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long tot=0;
        long long sum=0;
        int n=nums.size();

        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++)
            ans.push_back({nums[i],cost[i]});
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++)
        sum +=ans[i].second;

        long long median=0;
        int i=0;

        while(tot<(sum+1)/2&&i<n){
             tot+=1ll*ans[i].second;
             median=ans[i].first;
             i++;
        }    
        return res(nums,cost,median);
    }

};
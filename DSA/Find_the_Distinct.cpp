class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n= nums.size();
       vector<int>ans(n,0);
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            map<int ,int>p;
            for(int j=i+1;j<nums.size();j++){
                
                p[nums[j]]++;
            }
            ans[i]=mp.size()-p.size();
        }
        
        return ans;
    }
};
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
       int si=0;
        int ei=0;
        vector<int>ans;
        map<int,int>mp;

        while(ei<nums.size()){
                if(nums[ei]<0)
                    mp[nums[ei]]++;
            if(ei-si+1==k){
                 int count=0;
                int flag=0;
                for(auto it:mp){
                    count+=it.second;
                    if(count>=x){
                        ans.push_back(it.first);
                        mp[nums[si]]--;
                        flag=1;
                        si++;
                        break;
                    }
                }
                if(flag==0){
                    ans.push_back(0);
                    mp[nums[si]]--;
                    si++;
                }
            }
            ei++;
            }
        return ans;
    }
};
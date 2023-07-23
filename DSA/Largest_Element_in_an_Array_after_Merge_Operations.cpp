class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        stack<long long>st;
        for(int i=nums.size()-1;i>=0;i--){
            if(st.empty()){
                st.push((long long)nums[i]);
            }else if(st.top()>=nums[i]){
                long long tp=st.top();
                st.pop();
                st.push((long long)nums[i]+tp);
            }else{
                st.push((long long)nums[i]);
            }
        }
        long long maxi=st.top();
        while(!st.empty()){
            if(st.top()>maxi){
                maxi=st.top();
            }
            st.pop();
        }
           return maxi;
    }
};
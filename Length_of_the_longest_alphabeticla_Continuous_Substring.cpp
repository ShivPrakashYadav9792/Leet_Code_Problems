class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size()==1)
            return 1;
        int maxa=0;
        int count=1;
        vector<int>ans;
        for(int i=0;i<s.size()-1;i++){
            if((s[i+1]-s[i])==1){
                count++;
                str=str+s[i];
            }
            else {
                count=1;
                str="";
            }
            maxa=max(count,maxa);
        }
        return maxa;
    }
};
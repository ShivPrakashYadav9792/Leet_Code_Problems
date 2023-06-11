class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int prev=0;
        int count=1;
        bool flag=false;
        int maxi=0;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                count++;
            }
            else if(s[i]==s[i-1]&&!flag){
                count++;
                flag=true;
                prev=i;
            }
            else{
                maxi=max(maxi,count);
                count=i-prev+1;
                prev=i;
            }
        }
            maxi=max(count,maxi);
            return maxi;
    }
};
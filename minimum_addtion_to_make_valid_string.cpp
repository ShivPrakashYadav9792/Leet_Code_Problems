class Solution {
public:
    int addMinimum(string word) {
        int n=word.size();
        int ans=0,count=0;
        int i=0;
        while(i<n){
            count=0;
            if((word[i]=='a')&&i<n){
                count++;
                i++;
            }
            if((word[i]=='b')&&i<n){
                count++;
                i++;
            }
            if((word[i]=='c')&&i<n){
                count++;
                i++;
            }
            ans=ans+(3-count);
        }
        return ans;        
    }
};
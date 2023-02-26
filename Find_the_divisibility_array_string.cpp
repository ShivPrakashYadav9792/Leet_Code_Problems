class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans;
        long long sum=0;
        for(int i=0;i<word.size();i++){
            sum=sum*10+word[i]-'0';
            if(sum%m==0){
                ans.push_back(1);
                sum=0;
            }
            else {
                ans.push_back(0);
            sum=sum%m;
            }
        }
        
        return ans;
    }
};
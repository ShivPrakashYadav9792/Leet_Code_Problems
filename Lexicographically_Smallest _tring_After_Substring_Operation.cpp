class Solution {
public:
    string smallestString(string s) {
        int start=0;
        while(s[start]=='a')
            start++;    
        if(start==s.size()){
            s[s.size()-1]='z';              
        }
        for(int i=start;i<s.size();i++){
            if(s[i]=='a')
                return s;
            else
                s[i]=s[i]-1;
        }
        return s;
    }
};
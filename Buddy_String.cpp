class Solution {
public:
    bool buddyStrings(string s, string goal) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(s.size()!=goal.size())
            return false;
        if(s==goal){
            if(mp.size()!=s.size())
                return true;
            else 
                return false;
        }
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i])
                ans.push_back(i);
        }
        if(ans.size()!=2)
            return false;
        swap(s[ans[0]],s[ans[1]]);
        return s==goal;
    }
};
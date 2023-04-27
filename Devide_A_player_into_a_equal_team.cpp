class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
    long long ans=0,teamSize=skill[0]+skill.back();
        int n=skill.size();
    for(int i=0;i<skill.size()/2;++i){ 
        if(skill[i]+skill[n-i-1]==teamSize)
            ans+=skill[i]*(teamSize-skill[i]);
        else 
            return -1;
    }
    return ans;

    }
};
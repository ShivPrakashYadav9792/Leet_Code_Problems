class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      if(s1.size()>s2.size())
          return false;
      vector<int>ans1(26,0);
      vector<int>ans2(26,0);
      for(auto ch: s1)
      {
          ans1[ch-'a']++;
      }
      int i = 0 , j = 0;
      while(j<s2.size()){
         ans2[s2[j]-'a']++;
         if(j-i + 1 == s1.size()){
             if(ans1 == ans2)
                 return true;
         }
         if(j-i+1 < s1.size())
             j++;
         else{
             ans2[s2[i]-'a']--;
             i++;
             j++;
         }
      }
      return false;
    }
};
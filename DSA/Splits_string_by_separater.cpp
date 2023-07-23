class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
             string str="";
            for(int j=0;j<=words[i].size();j++){
               if(words[i][j]==separator||j==words[i].size()){
                   if(str!="")
                   ans.push_back(str);
                   str="";
               }
                else 
                    str=str+words[i][j];
            }
        }
        return ans;
    }
};
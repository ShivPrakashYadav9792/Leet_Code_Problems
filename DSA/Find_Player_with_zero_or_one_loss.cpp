map<int,int>mp;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
        }
        vector<int>loser;
        vector<int>winner;
        for(int i=0;i<matches.size();i++){
            if(mp[matches[i][1]] == 1){
                loser.push_back(matches[i][1]);
                mp[matches[i][1]]=0;
            }
            if(mp.find(matches[i][0])==mp.end()){
                winner.push_back(matches[i][0]);
                mp[matches[i][0]]=0;
            }
        }
        sort(loser.begin(),loser.end());
        sort(winner.begin(),winner.end());
        return {winner,loser};
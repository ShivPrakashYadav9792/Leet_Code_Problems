class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans=0,count=0,si=0;
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]=='F')
                count++;
            while(count>k){
                if(answerKey[si]=='F')
                    count--;
                     si++;
            }
            ans=max(i-si+1,ans);
        }
      count=0;si=0;
      for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]=='T')
                count++;
            while(count>k){
                if(answerKey[si]=='T')
                    count--;
                    si++;
            }
            ans=max(i-si+1,ans);
        }
        return ans;         
    }
};
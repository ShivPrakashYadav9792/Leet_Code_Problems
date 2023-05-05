class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int vcount=0;
        for(int j=0;j<k;j++){
              if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                    vcount++;
                }
        }
        int mvcount=vcount;
        int l=0,r=k-1;
            while(r<s.size()-1){
                if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'){
                    vcount--;
                }
                l++;
                r++;
                if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'){
                    vcount++;
                }
                mvcount=max(mvcount,vcount);
            }
        return mvcount;
    }
};
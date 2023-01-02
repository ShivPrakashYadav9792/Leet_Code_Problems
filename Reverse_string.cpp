class Solution {
public:
    void reverseString(vector<char>& s) {
        
    int i=0;
    int end=s.size();
        
        while(i<=end-1)
        {
            char temp=s[i];
            s[i]=s[end-1];
            s[end-1]=temp;
            i++;
            end--;
        }
    }
};
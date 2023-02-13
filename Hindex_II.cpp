class Solution {
public:
    int hIndex(vector<int>& citations){  
        int l=0,r=citations.size()-1;
        int n=citations.size();
        while(l<=r){
            int mid=(l+r)/2;
            if(citations[mid]==n-mid)
                return n-mid;
            else if(citations[mid]<n-mid)
                l=mid+1;
            else
                r=mid-1;
        }
        return n-l;
    }
};
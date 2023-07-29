class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int low=1,high=m*n;
        while(low<high){
            int mid=low+(high-low)/2;
            int count=0;
            int j=m;
            for(int i=1;i<=n;i++){
                while(j>=1&&i*j>mid)
                    j--;
                count=count+j;
            }
            if(count<k)
                low=mid+1;
            else 
                high=mid;
        }
        return low;
    }
};
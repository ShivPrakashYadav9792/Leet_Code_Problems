class Solution {
public:
    int minOperations(int n) {
        vector<int>ans;
        int mid=0;
        for(int i=0;i<n;i++){
            ans.push_back(2*i+1);
        }
        int sum=0;
        if(n%2==0){
            mid=(ans[n/2]+ans[n/2-1])/2;
        for(int i=0;i<n/2;i++){
            sum=sum+(2*i+1);
        }
            return sum;
        }
        else{
            mid=ans[n/2];
            for(int i=0;i<n/2+1;i++){
            sum=sum+(2*i);
        }
            return sum;
        }
       return 0; 
    }
};
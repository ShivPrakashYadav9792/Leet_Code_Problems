class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int count=0;
        int sum=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<n;i++){
            
            sum=sum+costs[i];
            count++;
            if(sum>=coins)
            {
                break;
            }
        }
        if(sum>coins)
        {
            return count-1;
        }
        else 
            return count;
    }
};
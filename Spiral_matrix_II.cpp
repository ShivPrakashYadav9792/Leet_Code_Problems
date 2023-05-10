class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n));;
        int i=0;
        int l=1;
        int top=0,down=n-1,left=0,right=n-1,d=1;
        while(top<=down&&left<=right){
            vector<int>ans;
            if(d==1){
            for(int i=left;i<=right;i++){
               res[top][i]=l++;
            }
                d=2;
                top++;
            }
            else if(d==2){
                for(int i=top;i<=down;i++){
                  res[i][right]=l++;
                }
                right--;
                d=3;
                }
            else if(d==3){
                for(int i=right;i>=left;i--){
                    res[down][i]=l++;
                }
                d=4;
                down--;
            }
            else if(d==4){
                for(int i=down;i>=top;i--){
                    res[i][left]=l++;
                }
                d=1;
                left++;
            }
        }
        return res;
    }
};
 
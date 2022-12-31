class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        
        int start=0,end=height.size()-1;
        
        while(start<end)
        {
            int h=min(height[start],height[end]);
            int area=(end-start)*h;
            if(area>ans)
                ans=area;
            if(height[start] <= height[end]) 
                
             {
                start++;
            }
                  else
                  {
                      end--;
                  }
        }
        return ans;
    }
};
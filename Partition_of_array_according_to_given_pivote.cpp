class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>ans;
        int i=0;
            while(i<n){
                if(nums[i]<pivot){
                ans.push_back(nums[i]);
                i++;
                }
                 else
                    i++;
              }
        i=0;
            while(i<n){
                if(nums[i]==pivot){
                    ans.push_back(nums[i]);
                    i++;
                    }
                        else
                            i++;
            }
        
        i=0;
             while(i<n){
                     if(nums[i]>pivot){
                            ans.push_back(nums[i]);
                            i++;
                            }   
                        else
                            i++;
                }
      return ans;  
    }
};
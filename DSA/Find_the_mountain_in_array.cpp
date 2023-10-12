/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int size= mountainArr.length();
        int left=0,right=size-1,peak;
        while(left<right){
            int mid=(left+right)/2;
            if( (mountainArr.get(mid)>=mountainArr.get(mid+1))){
                right=mid;
            }
            else 
                left=mid+1;
           peak=left;
        }
        
        left=0,right=peak;
        while(left<=right){
            int mid=(left+right)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)<target){
                left=mid+1;
            }
            else {
                right=mid-1;
            }
        }
        
        left=peak+1,right=size-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)>target){
                left=mid+1;
            }
            else {
                right=mid-1;
            }
        }
       return -1; 
    }
};
/*

        various Approch to solve this problems;
    
    1=>    The idea is to mark the elements which are present 
            in the array then traverse over the marked array 
            and return the first element which is not marked.

                Time Complexity: O(N), Only two traversals are needed.
                Auxiliary Space: O(N), using the list will require extra space


    2=>   The idea is to use array elements as an index. To mark the presence of an element x,
           change the value at the index x to negative. But this approach doesn’t work if there
            are non-positive (-ve and 0) numbers. 
            So segregate positive from negative numbers as the first step and then apply the approach.

            Follow the steps below to solve the problem:

                Segregate positive numbers from others i.e., move all non-positive numbers to the left side.
                Now ignore non-positive elements and consider only the part of the array which contains all positive elements. 
                Traverse the array containing all positive numbers and to mark the presence of an element x, change the sign of value at index x to negative. 
                Traverse the array again and print the first index which has a positive value. 


                        Time Complexity: O(N), Traversing the array of size N.
                        Auxiliary Space: O(1)



    3=>
            The idea is to mark the elements in the array which are greater than N and less than 1 with 1.
        Follow the steps below to solve the problem:

                    The smallest positive integer is 1. First, we will check if 1 is present in the array or not. If it is not present then 1 is the answer.
                    If present then, again traverse the array. The largest possible answer is N+1 where N is the size of the array. 
                    When traversing the array, if we find any number less than 1 or greater than N, change it to 1. 
                    This will not change anything as the answer will always be between 1 to N+1. Now our array has elements from 1 to N.
                    Now, for every ith number, increase arr[ (arr[i]-1) ] by N. But this will increase the value more than N. 
                            So, we will access the array by arr[(arr[i]-1)%N].
                    We will find now which index has a value less than N+1. Then i+1 will be our answer. 
                    
                    Time Complexity: O(N), Traversing over the array
                    Auxiliary Space:  O(1) 


    4=>
            Smallest positive number missing from an unsorted array by Swapping:
                    The idea is to swap the elements which are in the range 1 to N should
                     be placed at their respective indexes.

                    Follow the steps below to solve the problem:

                                    Traverse the array, Ignore the elements which are greater than N and less than 1.
                                    While traversing, check if a[i] ≠ a[a[i]-1] holds true or not .
                                    If the above condition is true then swap a[i] and a[a[i] – 1]  and swap until (a[i] ≠ a[a[i] – 1]) condition fails.
                                    Traverse the array and check whether a[i] ≠ i + 1 then return i + 1.
                                    If all are equal to its index then return N+1.


                                            Time Complexity: O(N), Only two traversals are needed.
                                            Auxiliary Space: O(1), No extra space is needed



*/


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    
      int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count=1;
                break;
            }
        }
        if(count==0){
            return 1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=1||nums[i]>nums.size())
                nums[i]=1;
        }
        for(int i=0;i<nums.size();i++){
            nums[(nums[i]-1)%nums.size()]+=nums.size();
        }
        for (int i=0;i<nums.size();i++){
        if (nums[i]<=nums.size())
            return i+1;
        }
        return nums.size()+1;
    }
};
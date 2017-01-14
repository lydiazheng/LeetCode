/*
Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, 
the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res(nums);
        int size = nums.size();

        if(k <= 0 || size ==0) return;
        if(k == size) return;
        k = k%size;

        for(int i = 0; i < size; i++)
            nums[(i + k)%size] = res[i];
           
    }

};
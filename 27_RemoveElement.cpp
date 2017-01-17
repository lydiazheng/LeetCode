/*
Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.

Hint:

Try two pointers.
Did you use the property of "the order of elements can be changed"?
What happens when the elements to remove are rare?
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*
        if(nums.size() == 0)  return 0;
        int left = 0, right = nums.size()-1;
        while(left <= right){
            if(nums[right] == val) {right--; left--;}
            left++;
            if(nums[left] == val && nums[right] != val){
                nums[left] = nums[right];
                right--;
            }
        }
        cout << right<< endl;
        return right+1;
        */
        int cur = 0;
        for(int i = 0 ; i < nums.size() ; ++i) {
            if(nums[i] == val)  cur++;
            else  nums[i-cur] = nums[i];
        }
        return nums.size()-cur;
    }
};
//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

//Do not allocate extra space for another array, you must do this in place with constant memory.

//For example,
//Given input array nums = [1,1,2],

//Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. 
//It doesn't matter what you leave beyond the new length.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        
        int temp = 1;
        cout << nums.size()-1 << endl;
        
        for (int i = 1; i < nums.size(); i++){
            if (nums[temp-1] != nums[i]){
                temp++;  
                nums[temp-1] = nums[i];
            }
        }
       
        return temp;
      

    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        if(nums.size() == 0){
            return 0;
        }
        int size = nums.size()-1;
        for(int i = 0; i < size; i++){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
                size--;
            }
        }
        return nums.size();
      */
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) count++;
            else nums[i-count] = nums[i];
        }
        return nums.size()-count;
    }
};
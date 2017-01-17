/*
Given an array of size n, find the majority element. 
The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++) hash[nums[i]]++;
        for(int i = 0; i < nums.size();i++){
            if(hash[nums[i]] > nums.size()/2) return nums[i];
        }
        return -1;
    }
};
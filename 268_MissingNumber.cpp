/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, 
find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.

Note:
Your algorithm should run in linear runtime complexity. 
Could you implement it using only constant extra space complexity?

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
        // my solution 
        unordered_map<int, int> hash;
        vector<int> res;
        if(nums.size() == 0) return -1;
        for(int i = 0; i < nums.size(); i++) hash[nums[i]]++;
        for(int i = 0; i <= hash.size(); i++){
            if(hash[i] == 0) return i;
        }
        return -1;
        */
        /*
        long n = nums.size();
        cout << n*(n+1)/2 << endl;
        cout << accumulate(begin(nums), end(nums), 0);
        return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);
        */
        //improved solution
        int sum = 0;
        for(int i = 0; i <= nums.size();i++) sum = sum+i;
        return sum-accumulate(begin(nums), end(nums), 0);
    }
};
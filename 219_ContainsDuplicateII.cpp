/*
Given an array of integers and an integer k, 
find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] 
and the absolute difference between i and j is at most k.

*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k <= 0 || nums.size() == 0) return false;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++) map[nums[i]]++;
        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] > 1){
                for (int j = i - 1; j >= 0 && abs(j-i) <= k; j--){
                    if (nums[j] == nums[i]) return true;
                }
            }
        }
        return false;
        
        /*
        set<int> cand;//Sets are containers that store unique elements following a specific order.
        for(int i = 0; i < nums.size(); i++) {
            if (i > k) cand.erase(nums[i-k-1]);
            if (!cand.insert(nums[i]).second) return true;
        }
        return false;
        */
    }
};
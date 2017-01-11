/*
You are a product manager and currently leading a team to develop a new product. 
Unfortunately, the latest version of your product fails the quality check. 
Since each version is developed based on the previous version, 
all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and 
you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which will return whether version is bad. 
Implement a function to find the first bad version. You should minimize the number of calls to the API.\
*/


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        /*  will have overflow
        for(int i = 1; i <= n; i++){
            if(isBadVersion(i) == true) return i;
        }
        return 0;
        */
        
        int left = 1, right = n, mid;
        while(left < right){
            mid = left + (right - left)/2; //(left+right)/2 overflow
            if(!isBadVersion(mid))  left = mid+1;
            else  right = mid;
        }
        return left;
    }
};
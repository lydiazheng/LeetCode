//Given an integer, write a function to determine if it is a power of two.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem = 0, div = 0;
        if(n == 0 || n < 0)  return false;
        if(n == 1)  return true;

        while(n != 1){
            if(n%2 == 0)  rem++;
            n = n/2;
            div++;
        }

        if(div == rem) return true;
        return false;

        
        //return n > 0 && !(n&(n-1));    //another method
        
    }
};
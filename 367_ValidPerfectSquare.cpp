/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Returns: True
Example 2:

Input: 14
Returns: False
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long res = num;
        if(num < 0)  return false;
        
        long sqr = 0;
        while(sqr*sqr <= num){
            if(sqr*sqr == num) return true;
            sqr++;
        }
        
        return false;
        
        /*  solution
        long r = x;
        while (r*r > x)
            r = (r + x/r) / 2;
        return r*r == x;
        */
    }
};
/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Have you thought about this?
Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

class Solution {
public:
    int reverse(int x) {
        /*
        vector<int> num;
        int rem = 0, res = 0;
        int i = 1;
        if(x > -10 && x < 10)  return x;
        do{
            rem = x%10;
            num.push_back(rem);
            x /= 10;
        }while(x != 0);
        int count = num.size();
        cout << num[2];
        for(int i = 0; i < num.size(); i++){
            res += num[i]*pow(10, count-1);
            count--;
        }
        return res;
        */
        int ans = 0;
        while (x) {
            int temp = ans * 10 + x % 10;
            if (temp / 10 != ans)
                return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
        
    }
};
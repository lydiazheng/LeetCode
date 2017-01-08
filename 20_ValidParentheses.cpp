//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', 
//determine if the input string is valid.

//The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() % 2 != 0)  return false;

        for (int i = 0; i < s.size(); i ++) {
            if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                st.push(s[i]); // add to the stack
            } 
            else {
                if (st.size() == 0) return false;
                char top = st.top();
                if (s[i] == ')' && top != '(')   return false;
                else if (s[i] == ']' && top != '[')  return false;
                else if (s[i] == '}' && top != '{') return false;
            
                st.pop(); // remove a top element from the stack
            }
        }
        return st.size() == 0;
    }
};
//Given two strings s and t, write a function to determine if t is an anagram of s.

//For example,
//s = "anagram", t = "nagaram", return true.
//s = "rat", t = "car", return false.

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq1(26);
        vector<int> freq2(26);
        int count = 0;
        
        for(int i = 0; i < s.size(); i++){
            freq1[s[i]-'a']++;
        }
        
        for(int i = 0; i < t.size(); i++){
            freq2[t[i]-'a']++;
        }
        
        for(int i = 0; i < 26; i++){
            if(freq2[i] == freq1[i]){
                count++;
            }
        }
        
        if(count == 26){
            return true;
        }
        return false;
    }
};
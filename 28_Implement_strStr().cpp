//Implement strStr().

//Returns the index of the first occurrence of needle in haystack
//or -1 if needle is not part of haystack.

class Solution {
public:
    int strStr(string haystack, string needle) {
        int sequence = haystack.length();
        int sub = needle.length();
        
        if(sub != 0 && sequence == 0){   //base case
            return -1;
        }
        else if(sub == 0 && sequence == 0){
            return 0;
        }
        else if(sub == 0 && sequence != 0){
            return 0;
        }
        
        for(int i = 0; i <= sequence-sub; i++){
            int j = 0;
            for(j; j < sub; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == sub){
                    return i;
            }
            
        }
        return -1;
    }
};
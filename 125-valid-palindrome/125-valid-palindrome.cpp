class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z')
                result+=s[i];
            else if(s[i]>='A' && s[i]<='Z')
                result+=tolower(s[i]);
            else if(s[i]>='0'&& s[i]<='9')
                result+=s[i];
            }
        for(int i=0;i<result.length()/2;i++){
            if(result[i]!=result[result.length()-i-1])
                return false;
        }
        return true;
    }
};
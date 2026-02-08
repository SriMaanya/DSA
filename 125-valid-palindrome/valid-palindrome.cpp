class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans = "";

        for(int i=0;i<s.size();i++){
            char ch = tolower(s[i]);
            if(ch == ' ' || !isalnum(ch) )continue;

            ans +=ch;
        }

        s = ans;

        for(int i=0;i<(s.size()/2);i++){
            if(s[i]!=s[s.size()-i-1]) return false;
        }
        return true;
    }
};
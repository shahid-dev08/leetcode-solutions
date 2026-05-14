class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0;i<s.length();i++)
        {

            if(isalnum(s[i]))
            {
                s[i] = tolower(s[i]);
                str.push_back(s[i]);
            }
        }
        string copy;
        for(int i = 0; i < str.size();i++)
        {
            copy.push_back(str[str.size()-i-1]);
        }

        if(copy == str) return true;
        else return false;
    }
};
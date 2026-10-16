class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "";
        for(char c: s)
        {
            char ch = tolower(c);
            if((ch >= 'a' && ch <= 'z') || 
                (ch >= '0' && ch <= '9'))
                str += ch;
        }
        int fIdx = 0;
        int lIdx = str.length() -1 ;
        while(lIdx > fIdx)
        {
            if(str[lIdx] != str[fIdx])
                return false;
            fIdx++;
            lIdx--;
        }
        return true;
    }
};

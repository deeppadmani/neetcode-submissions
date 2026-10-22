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

        char *left = &str[0];
        char *right = &str[str.length()-1];
        cout << *left << " : " << *right << endl;
        while(left < right)
        {
            cout << *left << " : " << *right << endl;
            if(*left != *right) return false;
            left++;
            right--;
        }
        return true;
    }
};

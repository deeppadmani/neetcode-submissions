class Solution {
public:
    bool isValid(string s) 
    {
        stack<int> stk;

        for(char c:s)
        {
            if('(' == c||'{' == c || '[' == c)
                stk.push(c);
            else
            {
                if(stk.empty()) return false;

                if((')' == c && ('(' != stk.top()))|| 
                (']' == c && ('[' != stk.top()))||
                ('}' == c && ('{' != stk.top())))
                {
                    break;
                }
                stk.pop();
            }

        }
        return stk.empty();
    }
};

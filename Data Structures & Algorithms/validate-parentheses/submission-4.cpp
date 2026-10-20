class Solution {
public:
    bool isValid(string s) {
        stack<char> Valid;
        unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c: s)
        {
            if (closeToOpen.count(c)) {
                if(!Valid.empty() && (Valid.top() == closeToOpen[c]))
                    Valid.pop();
                else return false;
            }
            else
                Valid.push(c);
            
        }
        return Valid.empty();
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> RPN;
        int val1,val2;
        for(string c : tokens)
        {
            if (c == "+")
            {
                    val2 = RPN.top(); RPN.pop();
                    val1 = RPN.top(); RPN.pop();
                    RPN.push(val1+val2);
            } else if (c == "-") {
                    val2 = RPN.top(); RPN.pop();
                    val1 = RPN.top(); RPN.pop();
                    RPN.push(val1-val2);
            } else if (c == "*") {
                    val2 = RPN.top(); RPN.pop();
                    val1 = RPN.top(); RPN.pop();
                    RPN.push(val1*val2);
            } else if (c == "/") {
                    val2 = RPN.top(); RPN.pop();
                    val1 = RPN.top(); RPN.pop();
                    RPN.push(val1/val2);
            } else {
                    RPN.push(stoi(c));
             
            }
        }
        return RPN.top();
    }
};

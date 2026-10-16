class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        
        for(string t: tokens)
        {
            if(t != "+" && t != "-" && t != "*" && t != "/")
            {
                int num = stoi(t);
                stk.push(num);
            }
            else
            {
                char charT = t[0];
                int op2 = stk.top();
                stk.pop();
                int op1 = stk.top();
                stk.pop();
                int exAns;
                switch(charT){
                    case '+':
                        exAns = op1 + op2;
                        stk.push(exAns);
                    break;

                    case '-':
                        exAns = op1 - op2;
                        stk.push(exAns);
                    break;

                    case '/':
                        exAns = op1 / op2;
                        stk.push(exAns);
                    break;

                    case '*':
                        exAns = op1 * op2;
                        stk.push(exAns);
                    break;
                }
            }
        }
        return stk.top();
    }
};

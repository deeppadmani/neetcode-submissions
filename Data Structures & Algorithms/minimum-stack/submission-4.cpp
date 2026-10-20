class MinStack {
    stack<int> main;
    stack<int> minStack;
public:
    MinStack() {
    }
    
    void push(int val) {
        main.push(val);
        val = min(val,minStack.empty()? val:minStack.top());
        minStack.push(val);

    }
    
    void pop() {
        main.pop();
        minStack.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
       return minStack.top();
    }
};

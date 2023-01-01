class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
    for (string token : tokens) {
        if (token == "+") {
            int y = stk.top(); stk.pop();
            int x = stk.top(); stk.pop();
            stk.push(x + y);
        } else if (token == "-") {
            int y = stk.top(); stk.pop();
            int x = stk.top(); stk.pop();
            stk.push(x - y);
        } else if (token == "*") {
            int y = stk.top(); stk.pop();
            int x = stk.top(); stk.pop();
            stk.push(x * y);
        } else if (token == "/") {
            int y = stk.top(); stk.pop();
            int x = stk.top(); stk.pop();
            stk.push(x / y);
        } else {
            stk.push(stoi(token));
        }
    }
    return stk.top();
    }
};

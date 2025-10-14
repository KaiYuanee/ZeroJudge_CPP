#include <iostream>
#include <sstream>
#include <vector>
#include <stack>

using namespace std;

bool isNumber(string &s) {
    if (s.empty()) {
        return false;
    }
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int precedence(char op) {
    if (op == '*' || op == '/' || op == '%') {
        return 2;
    }
    if (op == '+' || op == '-') {
        return 1;
    }
    return 0;
}

vector<string> infixToPostfix(vector<string> input) {
    vector<string> output;
    stack<char> op_stk;
    for (string s : input) {
        if (isNumber(s)) {
            output.push_back(s);
        }
        else if (s == "(") {
            op_stk.push('(');
        }
        else if (s == ")") {
            while (!op_stk.empty() && op_stk.top() != '(') {
                output.push_back(string(1, op_stk.top()));
                op_stk.pop();
            }
            if (!op_stk.empty()) {
                op_stk.pop();
            }
        }
        else {
            char op = s[0];
            while (!op_stk.empty() && precedence(op_stk.top()) >= precedence(op)) {
                output.push_back(string(1, op_stk.top()));
                op_stk.pop();
            }
            op_stk.push(op);
        }
    }
    while (!op_stk.empty()) {
        output.push_back(string(1, op_stk.top()));
        op_stk.pop();
    }
    return output;
}

int evaluatePostfix(vector<string> input) {
    int output, num1, num2, result;
    stack<int> num_stk;
    for (string s : input) {
        if (isdigit(s[0]) || (s[0] == '-' && s.size() > 1)) {
            num_stk.push(stoi(s));
        }
        else {
            num1 = num_stk.top();
            num_stk.pop();
            num2 = num_stk.top();
            num_stk.pop();
            if (s == "+") {
                result = num1 + num2;
            }
            if (s == "-") {
                result = num2 - num1;
            }
            if (s == "*") {
                result = num1 * num2;
            }
            if (s == "/") {
                result = num2 / num1;
            }
            if (s == "%") {
                result = num2 % num1;
            }
            num_stk.push(result);
        }
    }
    return num_stk.top();
}

int main() {
    string expr_str;
    string expr_elm;
    while (getline(cin, expr_str)) {
        stringstream ss(expr_str);
        vector<string> expr_vec;
        while (ss >> expr_elm) {
            expr_vec.push_back(expr_elm);
        }
        vector<string> postfix_expr_vec = infixToPostfix(expr_vec);
        cout << evaluatePostfix(postfix_expr_vec) << endl;
    }
    return 0;
}

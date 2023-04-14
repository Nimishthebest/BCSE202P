#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int evaluatePostfix(string exp) {
    stack<int> stack;
    for (char c : exp) {
        if (isdigit(c)) {
            stack.push(c - '0');
        } else {
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            switch (c) {
                case '+':
                    stack.push(operand1 + operand2);
                    break;
                case '-':
                    stack.push(operand1 - operand2);
                    break;
                case '*':
                    stack.push(operand1 * operand2);
                    break;
                case '/':
                    stack.push(operand1 / operand2);
                    break;
                default:
                    cout << "Invalid operator: " << c << endl;
                    return -1;
            }
        }
    }
    return stack.top();
}

int main() {
    string exp = "6523+8*+3+*";
    int result = evaluatePostfix(exp);
    cout << "Result: " << result << endl;
    return 0;
}

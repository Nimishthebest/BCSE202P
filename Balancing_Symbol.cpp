#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string expr)
{
    stack<char> s;
    for (int i = 0; i < expr.length(); i++) {
        char c = expr[i];
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return false;
            } else if ((c == ')' && s.top() == '(') || 
                       (c == ']' && s.top() == '[') ||
                       (c == '}' && s.top() == '{')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string expr = "{()}[()]{([])}";
    if (isBalanced(expr)) {
        cout << "Expression is balanced" << endl;
    } else {
        cout << "Expression is not balanced" << endl;
    }
    return 0;
}

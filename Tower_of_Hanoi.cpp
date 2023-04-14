#include <iostream>
#include <stack>

using namespace std;

void move(stack<int>& A, stack<int>& B, char from, char to) {
    int top = A.top();
    A.pop();
    B.push(top);
    cout << "Move disk " << top << " from " << from << " to " << to << endl;
}

void towersOfHanoi(int n, stack<int>& A, stack<int>& B, stack<int>& C) {
    if (n == 1) {
        move(A, C, 'A', 'C');
    } else {
        towersOfHanoi(n - 1, A, C, B);
        move(A, C, 'A', 'C');
        towersOfHanoi(n - 1, B, A, C);
    }
}

int main() {
    int n = 3;
    stack<int> A, B, C;

    for (int i = n; i >= 1; i--) {
        A.push(i);
    }

    towersOfHanoi(n, A, B, C);

    return 0;
}

#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Queue {
private:
    int front, rear;
    int arr[MAX_SIZE];
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isFull() {
        if (rear == MAX_SIZE - 1) {
            return true;
        }
        return false;
    }
    bool isEmpty() {
        if (front == -1 || front > rear) {
            return true;
        }
        return false;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        front++;
    }
    void display() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit" <<endl;
    int option;
    cin >> option;
    while(option != 4){
        if(option == 1) {
            int element;
            cout << "Type in element here:  ";
            cin >> element;
            q.enqueue(element);
            cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit" <<endl;
            q.display();
            cin >> option;
        }
        else if (option == 2){
            if (q.isEmpty()) {
                cout << "queue is empty" << endl;
            }
            else {
                q.dequeue();
                q.display();
                cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit" <<endl;
                q.display();
                cin >> option;
            }
            
        }
        else if (option == 3) {
            q.display();
            cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit" <<endl;
                q.display();
                cin >> option;
        }
    }
    return 0;
}

#include <iostream>
#define MAX_SIZE 5

using namespace std;

class CircularQueue {
private:
    int front, rear;
    int arr[MAX_SIZE];
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
    bool isFull() {
        if ((front == 0 && rear == MAX_SIZE - 1) || front == rear + 1) {
            return true;
        }
        return false;
    }
    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Circular Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        arr[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Circular Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Error: Circular Queue is empty" << endl;
            return;
        }
        int i;
        if (front <= rear) {
            for (i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        } else {
            for (i = front; i < MAX_SIZE; i++) {
                cout << arr[i] << " ";
            }
            for (i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
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

    return 0;
}

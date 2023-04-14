#include <iostream>
#define MAX_SIZE 5

using namespace std;

class Deque {
private:
    int front, rear;
    int arr[MAX_SIZE];
public:
    Deque() {
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }
    void insertFront(int x) {
        if ((front == 0 && rear == MAX_SIZE - 1) || front == rear + 1) {
            cout << "Error: Deque is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = MAX_SIZE - 1;
        } else {
            front--;
        }
        arr[front] = x;
    }
    void insertRear(int x) {
        if ((front == 0 && rear == MAX_SIZE - 1) || front == rear + 1) {
            cout << "Error: Deque is full" << endl;
            return;
        }
        if (rear == -1) {
            front = 0;
            rear = 0;
        } else if (rear == MAX_SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }
    void deleteFront() {
        if (isEmpty()) {
            cout << "Error: Deque is empty" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == MAX_SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }
    void deleteRear() {
        if (isEmpty()) {
            cout << "Error: Deque is empty" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = MAX_SIZE - 1;
        } else {
            rear--;
        }
    }
    void displayFront() {
        if (isEmpty()) {
            cout << "Error: Deque is empty" << endl;
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }
    void displayRear() {
        if (isEmpty()) {
            cout << "Error: Deque is empty" << endl;
            return;
        }
        cout << "Rear element is: " << arr[rear] << endl;
    }
};

int main() {
    Deque dq;
    int option;
    do {
        cout << "\n1. Insert at Rear\n2. Insert at Front\n3. Display Rear\n4. Display Front\n5. Delete Rear\n6. Delete Front\n7. Exit\nEnter your choice: ";
        cin >> option;
        switch (option) {
            case 1: {
                int element;
                cout << "Enter element: ";
                cin >> element;
                dq.insertRear(element);
                break;
            }
            case 2: {
                int element;
                cout << "Enter element: ";
                cin >> element;
                dq.insertFront(element);
                break;
            }
            case 3: {
                dq.displayRear();
                break; 
            }
            case 4: {
                dq.displayFront();
                break; 
            }
            case 5: {
                dq.deleteRear();
                break;
            }
            case 6: {
                dq.deleteFront();
                break;
            }
            case 7: {
                break;
            }
        }
    }
    while(option != 7);
}
                

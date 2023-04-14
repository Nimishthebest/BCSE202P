#include <iostream>
using namespace std;
int n;
int arr[50];
void display() {
        for(int j = 0 ; j < n; j++) {
            cout << arr[j] << " ";
        }
    }
void push() {
        int item;
        cout << "Type in what do you want to push:  " << endl;
        cin >> item;
        arr[n]=item;
        n++;
    }
void pop() {
        arr[n-1] = 0;
        n--;
    }
void peek(){
        cout << "The last element is:  " << arr[n-1] << endl;
    }
 void main_function(){
    cout << "\nChoose you what do you want do: \n 1.Push \n 2.Pop \n 3.Peek \n 4.Display" << endl;
    int oopt;
    cin >> oopt;
    if (oopt == 1) {
        push();
        main_function();
    }
    else if (oopt == 2) {
        pop();
        main_function();
    }
    else if (oopt == 3) {
        peek();
        main_function();
    }
    else {
        display();
        main_function();
    }
    }
int main() {
    
    cout << "Type in the number of elements you want to add in the stack:  " << endl;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    main_function();
}

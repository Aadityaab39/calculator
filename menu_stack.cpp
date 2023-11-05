// AADITYA  KUMAR
// b.SC PHYSICAL SICENCE WIth
// 22/13017
#include <iostream>
using namespace std;

#define MAX_SIZE 10

class Stack {
 
    int top;

public:
    int arr[MAX_SIZE];
    Stack() { top = -1; }

    void push(int x) {
        if (top >= MAX_SIZE - 1) {
            cout << "Error: Stack overflow!" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack." << endl;
    }

    void pop() {
        if (top < 0) {
            cout << "Error: Stack underflow!" << endl;
            return;
        }
        int x = arr[top--]; 
        cout << x << " popped from stack." << endl;
    }

    int numElements() {
        return top + 1;
    }

    void print() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Elements of the stack are: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void topElement() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Top element in stack is: " << arr[top] << endl;
    }
};

int main() {
    Stack s;

    int choice;
    int element;

    do {
        cout << "Menu:" << endl;
        cout << "1) Push" << endl;
        cout << "2) Pop" << endl;
        cout << "3) Number of elements" << endl;
        cout << "4) Print stack" << endl;
        cout << "5) Check top element" << endl;
        cout << "6) Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                s.push(element);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout << "Number of elements in stack: " << s.numElements() << endl;
                break;
            case 4:
                s.print();
                break;
            case 5:
                s.topElement();
                break;
            case 6:
                cout << "Exiting program" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }

        cout << endl;

    } while (choice != 6);

    return 0;
}

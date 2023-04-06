#include <iostream>
#define MAX_SIZE 100

using namespace std;
class Stack {
private:
    int top;
    int arr[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == MAX_SIZE - 1;
    }
    void push(int x) {
        if (isFull()) {
            cout << "Error: Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Error: Stack underflow" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Error: Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl; // Output: 3
    s.pop();
    cout << s.peek() << endl; // Output: 2
    s.pop();
    s.pop();
    s.pop(); // Output: Error: Stack underflow
    return 0;
}


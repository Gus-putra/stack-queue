#include <iostream>
using namespace std;

#define MAX 100

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            cout << x << " berhasil dimasukkan ke stack\n";
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack kosong\n";
            return 0;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Elemen teratas: " << s.peek() << endl;

    cout << "Pop: " << s.pop() << endl;
    cout << "Pop: " << s.pop() << endl;

    return 0;
}
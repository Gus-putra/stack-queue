#include <iostream>
using namespace std;

#define MAX 100

class Queue {
private:
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool enqueue(int x) {
        if (rear >= MAX - 1) {
            cout << "Queue Overflow\n";
            return false;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            cout << x << " masuk ke queue\n";
            return true;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return 0;
        } else {
            int x = arr[front++];
            return x;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue kosong\n";
            return 0;
        }
        return arr[front];
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Elemen depan: " << q.peek() << endl;

    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;

    return 0;
}
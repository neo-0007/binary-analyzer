#include <iostream>
using namespace std;

class Queue {
    int arr[5], front, rear;
public:
    Queue(): front(-1), rear(-1) {}
    void enqueue(int x) {
        if (rear == 4) { cout << "Full\n"; return; }
        if (front == -1) front = 0;
        arr[++rear] = x;
    }
    void dequeue() {
        if (front == -1 || front > rear) { cout << "Empty\n"; return; }
        front++;
    }
    void display() {
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.display();
}

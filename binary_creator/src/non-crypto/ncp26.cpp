#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    printList(head);
}

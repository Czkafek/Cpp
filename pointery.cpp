#include <iostream>

class Node {
    public:
        int data;
        Node* next;
};

void remove(Node** headPtr, int value) {
    Node* current = *headPtr;
    if(current->data == NULL) {
        return;
    }

    if(current->data == value) {
        *headPtr = current->next;
        delete current;
        return;
    }
    
    Node* previous;
    while(current != nullptr) {
        if(current->data = value) {
            previous->next = current->next;
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

int main() {
    
    Node* head = new Node();
    head->data = 12;
    head->next = nullptr;

    remove(&head, 12);

    return 0;
}
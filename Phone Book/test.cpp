// LINKED LIST

#include <iostream>

class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* current) {
    while(current != NULL) { // Przechodzę przez każdy element, po przez wyświetlanie go, a następnie przechodzenie do następnego
        std::cout << "Data: " << current->data << std::endl;    // Wyobraź sobie, że są podchody i każda wskazówka posiada nagrodę. Tutaj tą nagrodą jest wartość tego elementu czyli int data, a informacją gdzie się znajduje kolejna wskazówka pointer Node* next
        current = current->next;
    }
}

void insertAtTheFront(Node **headPtr, int value) {
    Node* newNode = new Node();    
    newNode->data = value;         
    newNode->next = *headPtr;         

    *headPtr = newNode;               
}


int main() {

    Node* head = new Node();
    head->data = 15;
    head->next = nullptr;

    Node** headPtr = &head;

    std::cout << "head: " << head << std::endl;
    std::cout << "head->data: " << head->data << std::endl;
    std::cout << "&head: " << &head << std::endl;
    std::cout << "headPtr: " << headPtr << std::endl;
    std::cout << "*headPtr: " << *headPtr << std::endl;
    std::cout << "&headPtr: " << &headPtr << std::endl;


    insertAtTheFront(&head, 20);

    printList(head);


    return 0;
}
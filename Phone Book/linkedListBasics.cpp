// LINKED LIST

#include <iostream>

class Node { // Tak wygląda każdy element w liście
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
    Node* newNode = new Node();     // Tworzę nowy element linked listy
    newNode->data = value;          // Przypisuje wartość temu elementowi
    newNode->next = *headPtr;          // Przypisuje adres heada do pointera next, ponieważ newNode zostaje teraz nowym headem

    *headPtr = newNode;                // Przypisuje 
}

void insertAtTheBack(Node** head, int value) {
    Node* newNode = new Node();       
    newNode->data = value;            
    newNode->next = nullptr;         

    Node* current = *head;
    std::cout << (*head)->data;
    
    if(current->data == NULL) {           
        *head = newNode;
        return;
    }

    while(current->next != nullptr) {      
        current = current->next;
    }

    current->next = newNode;               
}

int main() {

    Node* head = new Node(); // tworzę pointer head, czyli pierwszy element linked listy
    /*Node* second = new Node();
    Node* third = new Node();
 
    head->data = 1;         // przypisuje wartość zmiennej "data". Używam operatora "->", ponieważ mam doczynienia z pointerem
    head->next = second;    // Ta "->" działa jak pointer, pointer head wskazuje miejsce w pamięcie gdzie znajduje się zmienna data oraz next. Więc za pomocą strzałki pointer head wskazuje nam miejsce zmiennych w pamięcie
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;*/

    //std::cout << &head << std::endl;

    //printList(head);        // przekazuje zmienną head, ponieważ wskazuje ona początek listy
    //std::cout << "\n\n";
    //insertAtTheFront(&head, 4); //przekazuje adres zmiennej head, ponieważ wskazuje ona początek listy
    //insertAtTheBack(&head, 5);
    //insertAtTheBack(&head, 6);
    //printList(head);

    insertAtTheBack(&head, 4);
    printList(head);


    return 0;
}
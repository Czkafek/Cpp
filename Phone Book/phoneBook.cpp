// WITH LINKED LIST

#include <iostream>
#include <string>

class Node {
    public:
        std::string phone;
        std::string name;
        Node* next;
};

void printList(Node* current);
void insert(Node** current);
void deleteNumber(Node** head);

int main() {

    int answer;
    Node* head = new Node();

    while(true) {
        std::cout << "\n1# Check the book\n";
        std::cout << "2# Insert new phone number\n";
        std::cout << "3# Delete a phone number\n";
        std::cout << "4# Leave\n";

        std::cin >> answer;
        std::cin.ignore();

        if(answer == 4) {
            break;
        }   

        switch(answer) {
            case 1:
                printList(head);
                break;
            case 2:
                insert(&head);
                break;  
            case 3:
                deleteNumber(&head);
                break;
            default:
                std::cout << "\nERROR: NO SUCH OPTION\n";
        }   
    }

    return 0;
}

void printList(Node* current) {
    std::cout << '\n';
    if(current->phone == "") {
        std::cout << "NO AVAILABLE RECORDS\n";
        return;
    }
    while(current != NULL) {
        std::cout << current->name << "   " << current->phone << '\n';
        current = current->next;
    }
}

void insert(Node** head) {
    std::cout << '\n';
    std::string userName;
    std::string phoneNumber;
    std::cout << "Enter name: ";
    getline(std::cin, userName);
    std::cout << "Enter phone number: ";
    getline(std::cin, phoneNumber);

    Node* newNode = new Node();
    newNode->phone = phoneNumber;
    newNode->name = userName;

    Node* current = *head;

    if(current->phone == "") {
        *head = newNode;
        return;
    }

    while(current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

}

void deleteNumber(Node** head) {
    std::cout << '\n';
    Node* current = *head;
    if(current->phone == "") {
        std::cout << "NO RECORDS TO DELETE\n";
        return;
    }
    std::string argument;
    Node* previous = new Node();

    std::cout << "Enter name or phone number: ";
    getline(std::cin, argument);
    std::cout << '\n';

    if(argument[0] > 57) {
        if(current->next == NULL) {
            if(current->name == argument) {
                current->phone = "";
                current->name = "";
                std::cout << "Record successfully deleted\n";
                return;
            }
        }
        while(current != NULL) {
            if(current->name == argument) {
                previous->next = current->next;
                delete current;
                std::cout << "Record successfully deleted\n";
                return;
            }
            previous = current;
            current = current->next;
        }
    }
    else {
        if(current->next == NULL) {
            if(current->phone == argument) {
                current->phone = "";
                current->name = "";
                std::cout << "Record successfully deleted\n";
                return;
            }
        }
        while(current != NULL) {
            if(current->phone == argument) {
                previous->next = current->next;
                delete current;
                std::cout << "Record successfully deleted\n";
                return;
            }
            previous = current;
            current = current->next;
        }
    }

    std::cout << "NO RECORDS TO DELETE\n";

}
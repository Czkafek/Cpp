// without linked list

#include <iostream>

int main() {

    std::string numbers[10000];
    std::string names[10000];
    int answer;
    int j = 0;

    while(true) {
        std::cout << "\n#1 Show all phone numbers\n";
        std::cout << "#2 Insert new phone Number\n";
        std::cout << "#3 Leave\n";
        std::cout << "Enter: ";
        std::cin >> answer;

        if(answer == 1) {
            int i = 0;
            if(j != 0) {
                std::cout << "\n=======================\n";
            }
            while(i < j) {
                std::cout << names[i] << "   " << numbers[i] << '\n';
                i++;
            }
            if(j != 0) {
                std::cout << "=======================\n";
            }
        }
        else if(answer == 2) {
            std::cout << "\n=======================";
            std::cout << "\nInsert name: ";
            std::cin >> names[j];
            std::cin.ignore();
            std::cout << "Insert phone number: ";
            getline(std::cin, numbers[j]);
            std::cout << "=======================\n";
            j++;
        } 
        else if(answer == 3) {
            break;
        }
        else {
            std::cout << "\n=======================\n";
            std::cout << "Wrong input!";
            std::cout << "\n=======================\n";
    }
    }

    return 0;
}
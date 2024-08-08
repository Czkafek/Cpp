#include <iostream>
#include <fstream>
#include <filesystem> 

namespace fs = std::filesystem;


void zmienKonto() {

    std::cout << "Dostepne konta:" << std::endl;

    
}


int main() {

    int a = 0;

    while(a!=5) {

        std::cout << "1. Konto" << std::endl << std::endl;
        std::cout << "2. Przeczytaj książkę" << std::endl << std::endl;
        std::cout << "3. Dodaj książkę" << std::endl << std::endl;
        std::cout << "4. Zmień konto" << std::endl << std::endl;
        std::cout << "5. Wyjdź" << std::endl << std::endl;

        char AnyKey;
        std::string ObecneKonto;
        std::string StatystykiKonta;

        std::cin >> a;

        if (a == 1) {
            
            std::ifstream MyReadFileObecneKonto("Konta/Obecne.txt");

            if (!MyReadFileObecneKonto.is_open()) {
                std::cerr << "Błąd: Nie można otworzyć pliku Konta/Obecne.txt" << std::endl;
                return 1;
            }

            getline(MyReadFileObecneKonto, ObecneKonto);

            ObecneKonto = "Konta/" + ObecneKonto + ".txt";

            std::ifstream MyReadFileStatystykiKonta(ObecneKonto);

            if (!MyReadFileStatystykiKonta.is_open()) {
                std::cerr << "Błąd: Nie można otworzyć pliku " << ObecneKonto << std::endl;
                return 1;
            }

            while (getline(MyReadFileStatystykiKonta, StatystykiKonta)) {
                std::cout << StatystykiKonta << std::endl;
            }


            std::cout << "Naciśnij dowolny klawisz, aby kontynuować..." << std::endl;
            std::cin.ignore();
            std::cin.get();
        }


        if (a == 2) {


        }


        if (a == 3) {


        }


        if (a == 4) {
            zmienKonto();
        }

    }

    return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;

class Product {
private:
    double price;
    int amount;
public:
    Product() { price = 0; amount = 1; }
    Product(double price) : Product() { SetP(price); }
    Product(double price, int amount) : Product() { SetP(price); SetA(amount); }

    void SetP(double price) { if (price >= 0) this->price = price; }
    void SetA(double amount) { if (amount > 0) this->amount = amount; }
    double P() { return price; }
    double A() { return amount; }

    double GetValue() { return price * amount; }

    void Show() {
        cout << "\nProduct: [ Price: " << price << ", Amount: " << amount << ", Value: " << GetValue() << " ]";
    }
};

int main()
{
    Product p1, p2(12, 99), p3(2, 5), p4(-2, -9);
    p1.Show();
    p2.Show();
    p3.Show();
    p4.Show();


    _getch();
}
#include <iostream>
#include <conio.h>
using namespace std;

class BMI {
private:
    double weight, height;
public:
    double static GetBMI(double weight, double height);
};

double BMI::GetBMI(double weight, double height) {
    return weight / (height * height);
};

int main()
{

    cout << BMI::GetBMI(75, 1.9);

    _getch();
}

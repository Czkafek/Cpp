#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	double a, b;
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	cout << "Podaj drugą liczbę: ";
	cin >> b;

	a > b ? cout << "Pierwsza liczba jest większa\n" : cout << "Druga liczba jest większa\n";

	if (b != 0)
		cout << "Wynik z dzielenia: " << a / b;
	else
		cout << "Nie dzieli się przez 0 idiot jebany!";

	_getch();
}
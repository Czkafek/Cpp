#include <iostream>
#include <conio.h>
using namespace std;

class Triangle {
public:
	bool static isTriangle(double a, double b, double c);
	double static Perimeter(double a, double b, double c);
	double static P(double a, double b, double c);
	double static Area(double a, double b, double c);
};

bool Triangle::isTriangle(double a, double b, double c) { return (a + b > c && a + c > b && b + c > a); }
double Triangle::Perimeter(double a, double b, double c) { return isTriangle(a, b, c) ? a + b + c : -1; }
double Triangle::P(double a, double b, double c) { if (!isTriangle(a, b, c)) return -1;  return Perimeter(a, b, c) / 2; }
double Triangle::Area(double a, double b, double c) {
	if (!isTriangle(a, b, c)) return -1;
	double p = P(a, b, c);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	cout << Triangle::isTriangle(3, 4, 5) << endl;
	cout << Triangle::isTriangle(1, 1, 5) << endl;
	cout << Triangle::Perimeter(3, 4, 5) << endl;
	cout << Triangle::P(3, 4, 5) << endl;
	cout << Triangle::Area(3, 4, 5) << endl;



	_getch();
}
#include <iostream>
#include <conio.h>
using namespace std;

class BMI {
private:
	double weight, height;
public:

	BMI() { weight = 1; height = 1; }
	BMI(double weight, double height) : BMI() {
		SetW(weight);
		SetH(height);
	}

	void Show() { cout << "\nBMI [ weight: " << weight << ", height: " << height << ", BMI: " << GetBMI() << " ]"; }

	double GetBMI() { return weight / (height * height); }
		 
	void SetW(double weight) { 
		if (weight > 0)
			this->weight = weight;
	}
	void SetH(double height) {
		if (height > 0)
			this->height = height;
	}
	double W() { return weight; }
	double H() { return height; }
};

int main()
{
	BMI b1, b2(75, 1.9), b3(-2178, -324);
	b1.Show();
	b2.Show();
	b3.Show();
	int a;


	_getch();
}
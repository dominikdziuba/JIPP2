#include <iostream>

using namespace std;


int pole(int a)
{
	return a * a;
}

int pole(int a, int b)
{
	return a * b;
}

double pole(int a, int b, int h)
{
	return 0.5 * (a + b) * h;
}
int main()
{
	cout << "Pole kwadratu o boku 6 to: " << pole(6) << endl;
	cout << "Pole prostokąta o bokach 3 i 8 to: " << pole(3, 8) << endl;
	cout << "Pole trapezu o podstawach 4 i 6 oraz wysokosci 5 to: " << pole(4, 6, 5) << endl;

}

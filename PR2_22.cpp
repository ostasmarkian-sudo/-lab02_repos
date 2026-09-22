#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a); // обчислення 1-го виразу
	z2 = 2 * sqrt(2) * cos(a) * sin(Pi / 4 + 2 * a); // обчислення 2-го виразу
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cout << "Difference = " << z1 - z2 << endl; // виведення результатів
	cin.get(); // очікування натискання клавіші
	return 0;
}
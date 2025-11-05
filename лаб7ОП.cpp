// лаб7ОП.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"
using namespace std;
int main()
{
	double x, y;
	double start = 1.0;
	double end = 2.0;
	double h = 0.1;
	cout << "Табулювання функції Y = sin(sqrt(x)) + e^x-3" << endl;
	cout << "Використано цикл while" << endl;
	cout << setw(10) << "x" << setw(20) << "Y" << endl;
	cout << "----------------------------------------" << endl;
	x = start;
	while (x <= end)
	{
		y = sin(sqrt(x)) + exp(x) - 3;
		cout << setw(10) << fixed << setprecision(2) << x << setw(20) << setprecision(6) << y << endl;
		x += h;

	}
	cout << endl << "----------------------------------------" << endl;
	cout << "Табулювання тієї ж функції за допомогою циклу DO...While" << endl;
	cout << "----------------------------------------" << endl;
	cout << setw(10) << "x" << setw(20) << "Y" << endl;
	cout << "----------------------------------------" << endl;
	x = start;
	do
	{
		y = sin(sqrt(x)) + exp(x) - 3;
		cout << setw(10) << fixed << setprecision(2) << x << setw(20) << setprecision(6) << y << endl;
		x += h;

	} while (x <= end);
	system("pause");
	return 0;
}
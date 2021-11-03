// Lab_6_3.cpp
// Козубенко Андрій
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 10
// Ітераційний спосіб, шаблони
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

template <typename R>
void CreateArray(R *a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i];
	}
}

template <typename R>
void PrintArray(R *a, const int size)
{
	cout << "a = " << "{";

	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << a[i];
		if (i != size - 1)
			cout << ",";
	}

	cout << " }\n";
}

template <typename R>
R MinElem(R *a, const int size)
{
	R min = a[0];

	for (int i = 1; i < size; i++)
	{
		if (a[i] < min)
			min = a[i];
	}

	return min;
}

int main()
{
	int n;

	cout << "How many elements should a new array consist of?\n";
	cout << "n = "; cin >> n;

	if (n <= 0)
	{
		std::cerr << "Number of elements in an array should be > 0";
		return -1;
	}

	double *a = new double[n];

	CreateArray<double>(a, n);
	PrintArray<double>(a, n);

	cout << "Minimal element = " << MinElem<double>(a, n) << endl;

	delete[] a;
	return 0;
}
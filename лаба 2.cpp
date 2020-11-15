#include <iostream>

using namespace std;

int main()
{
	// Обчислити y = f(x), де функція f(x) задана графіком

	double A, x, y;

	cout << "Enter A: "; cin >> A;
	cout << "Enter x: "; cin >> x;

	if (x >= 0)
	{
		y = A;
	}
	else y = x;

	cout << "y = " << y << endl;
	system("pause");
}
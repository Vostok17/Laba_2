#include <iostream>

using namespace std;

int main()
{
	// ��������� y = f(x), �� ������� f(x) ������ ��������

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
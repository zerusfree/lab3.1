// Lab_03_1.cpp
//  �������� ������
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 8.1 + x*x*x ;
	// ����� 1: ������������ � ��������� ����
	if (x < -3.5)
		B = 1-1/(x*x*x*x*x);
	if (-3.5 <= x && x < 1)
		B = 1/tan(abs(x+1));
	if (x >= 1)
		B = atan(2*x)-log10(x/2);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < -3.5)
		B = 1 - 1 / (x * x * x * x * x);
	else
		if ( -3.5<=x && x < 1)
			B = 1 / tan(abs(x + 1));
		else
			B = atan(2 * x)-log10(x/2);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
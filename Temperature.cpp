#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double celsius;
	double fahrenheit;

	cout << "���� ��� ����������� �� ������� �������: ";
	cin >> celsius;
	
	fahrenheit = celsius*9/5 + 32; 
	
	cout << "� ����������� �� ������� fahrenheit �����:" << fahrenheit <<endl;
	
return 0;
}


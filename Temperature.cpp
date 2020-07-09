#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double celsius;
	double fahrenheit;

	cout << "δώσε την θερμοκρασία σε κλίμακα κελσίου: ";
	cin >> celsius;
	
	fahrenheit = celsius*9/5 + 32; 
	
	cout << "η αντιστοιχία σε βαθμούς fahrenheit είναι:" << fahrenheit <<endl;
	
return 0;
}


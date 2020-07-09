#include <iostream>
using namespace std;

int main()
{
double n[4]={5.5,2.2,3.3,6.0};
double numbers[10] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};

double *Ptr = &numbers[0];
double *nPtr = &n[0];

	if(nPtr<Ptr)
	cout << "true" << endl;
	else
	cout << "false";



return 0;
}


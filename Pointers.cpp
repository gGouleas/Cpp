#include <iostream>
using namespace std;

int main()
{
double n=5.5;
double numbers[10] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
double *nPtr = &n;
double *Ptr = &numbers[0];

for(int i=0;i<10;i++){
	cout << *Ptr << endl;
	++Ptr;	
}

return 0;
}


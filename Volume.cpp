#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double radius;
double sphereVolume(double);

cout << "dwse thn aktina ths sfairas" << endl;
while (true){
cin  >> radius;
if (radius>=0){
cout << "o ogkos ths sfairas me aktina " << radius << " einai: " << sphereVolume(radius);
break;
}
else
cout << "h aktina prepei na einai arithmos megaluteros h isos tou 0. Ksanadwse thn aktina" <<endl;
}
return 0;
}

double sphereVolume(double rad)
{
	return (4.0/3.0)*3.14159*pow(rad,3);
}


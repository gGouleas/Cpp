#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int x;
int y;
int counter;
unsigned long power;
double neg_power;
cout << "Dwse tis times tou arithmou x kai th dunamh y antistoixa:";
cin >> x >> y;

counter = 0;
power = 1;
while(counter < y){
	power = power * x;
	counter++;
}
while(counter > y){
	power = power * x;
	counter = counter - 1;
}

if(y>=0){
cout << power << endl;
}
else{
neg_power = static_cast < double > (power);
cout << "To apotelesma einai:";
cout << setprecision(3) << fixed << 1/neg_power << endl;
}
return 0;
}


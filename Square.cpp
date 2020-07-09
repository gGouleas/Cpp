#include <iostream>
using namespace std;

int main()
{
int side;
void drawSquare(int);

cout << "dwse thn pleura tou tetragwnou"<<endl;
cin >> side;
drawSquare(side);
return 0;
}

void drawSquare(int side)
{
	int i;
	int j;
	
	for(j=0; j<side; j++){
	for(i=0; i<side; i++){
		cout << "*";
	}
	cout << endl;
	}
	return; 
}

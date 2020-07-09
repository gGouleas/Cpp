#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char keimeno[100];
	ifstream in("test.txt");
	if(!in){
		cout << "Cannot open file."<<endl;
		return 1;
	}
	while(!in.eof()){
	in.getline(keimeno,99);
	cout << keimeno <<endl;
	}
	in.close();
return 0;
}


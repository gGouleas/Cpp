#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class account{
	int costnum;
	char name[80];
	double balance;
public:
	account(int c, char *n, double b){
		costnum = c;
		strcpy(name,n);
		balance = b;
	}
		
	int insertToFile(){	
	ofstream out("test.txt",ios::out|ios::binary);
	if(!out){
		cout << "Cannot open file."<<endl;
		return 1;
	}
		out.write((char*) &costnum,sizeof(int));
		out.write(name,strlen(name));
		out.write((char*) &balance,sizeof(double));
		out.close();
		return 0;
}
};



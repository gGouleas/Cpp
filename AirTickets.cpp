#include <iostream>
using namespace std;

int input;
int const arraysize=10;
int pinakas[arraysize]={0};
void firstClass(int[],int);
void economyClass(int[],int);

int main()
{
int i=0;
int j=5;
do{
	cout << "Please press 1 for first class or 2 for economy class" << endl;
	cin >> input;
	while (input!=1 && input!=2){
	cout << "Wrong number! Please press 1 for first class or 2 for economy class" << endl;
	cin >> input;
	}
	switch(input){
		case 1: if(pinakas[arraysize/2-1]==1){
					cout << "Seats in first class are full"<<endl<<endl<<"Press 2 for a seat in economy class or any number to exit"<<endl;
					cin >> input;
					if(input!=2){ 
					cout << "The next flight leaves in 3 hours"<<endl<<endl;
					}
					else{
					economyClass(pinakas,arraysize);
					j++;
					}
				}
				else{
					firstClass(pinakas,arraysize);
					i++;
			}
		break;
		
		case 2:  if(pinakas[arraysize-1]==1){
					cout << "Seats in economy class are full"<<endl<<endl<<"Press 1 for a seat in first class or any number to exit"<<endl;
					cin >> input;
					if(input!=1){
					cout << "The next flight leaves in 3 hours"<<endl<<endl;
					}
					else{
					firstClass(pinakas,arraysize);
					i++;
					}
				}
				else{
					economyClass(pinakas,arraysize);
					j++;
				}
		break;
	}
}while(i<arraysize/2 || j<arraysize);
cout << "The plane is full!";
return 0;
}

void firstClass(int pinakas[],int arraysize){
	for(int i=0;i<arraysize;i++){
				if(pinakas[i]==0){ 
				pinakas[i]=1;
				cout << "* * * * * * * * * * * * * *  "<<endl;
				cout << "*     BOARDING PASS       *"<<endl;
				cout << "* Seat type: First Class  *" <<endl<<"* Seat number: "<<(i+1)<<"          *"<<endl;;
				cout << "* * * * * * * * * * * * * *  "<<endl<<endl;
				break;
				}
	}
}

void economyClass(int pinakas[],int arraysize){
	for(int j=arraysize/2;j<arraysize;j++){
				if(pinakas[j]==0){
				pinakas[j]=1;
				cout << "* * * * * * * * * * * * * *  "<<endl;
				cout << "*     BOARDING PASS       *"<<endl;
				cout << "* Seat type: Economy Class*" <<endl<<"* Seat number: "<<(j+1)<<"          *"<<endl;;
				cout << "* * * * * * * * * * * * * *  "<<endl<<endl;
				break;	
				}
	}
}

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
int numbers[20];

cout << "Dwse 20 arithmous metaksu 10 kai 100:" << endl;

for(int i=0;i<20;i++){ //εισαγωγή στοιχείων σε πίνακα
	bool same = false; //μεταβλητή που είναι false αν το στοιχείο είναι μοναδικο.
	
	cin >> numbers[i];
	//έλεγχος του αριθμού για το αν είναι εντός του ζητούμενου ορίου
	while (numbers[i]<10 || numbers[i]>100){
		cout << endl << "O arithmos den einai metaksu 10 kai 100! Dwse pali arithmo:" << endl;
		cin >> numbers[i];
	}
	//έλεγχος για το αν το στοιχείο που πληκτρολογήθηκε είναι μοναδικό
	for(int j=0;j<i;j++){ 
		if(numbers[j] == numbers[i])
		same = true; 
	}
	//αν ο αριθμός είναι μοναδικός τότε η μεταβλητή same παραμένει false και τυπώνεται ο αριθμός
	if(same == false)
	cout << setw(7) << numbers[i] << endl;
	}

return 0;
}


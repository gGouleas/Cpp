#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
int numbers[20];

cout << "Dwse 20 arithmous metaksu 10 kai 100:" << endl;

for(int i=0;i<20;i++){ //�������� ��������� �� ������
	bool same = false; //��������� ��� ����� false �� �� �������� ����� ��������.
	
	cin >> numbers[i];
	//������� ��� ������� ��� �� �� ����� ����� ��� ���������� �����
	while (numbers[i]<10 || numbers[i]>100){
		cout << endl << "O arithmos den einai metaksu 10 kai 100! Dwse pali arithmo:" << endl;
		cin >> numbers[i];
	}
	//������� ��� �� �� �� �������� ��� ��������������� ����� ��������
	for(int j=0;j<i;j++){ 
		if(numbers[j] == numbers[i])
		same = true; 
	}
	//�� � ������� ����� ��������� ���� � ��������� same ��������� false ��� ��������� � �������
	if(same == false)
	cout << setw(7) << numbers[i] << endl;
	}

return 0;
}


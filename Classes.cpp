#include <iostream>
using namespace std;

class SavingsAccount{
	public:
		SavingsAccount(double);
		double getSavingsBalance() const;
		double calculateMonthlyInterest();
		static void modifyInterestRate(double);
	private:
		double savingsBalance;
		static double annualInterestRate;
};
SavingsAccount::SavingsAccount(double balance){
	if (balance>=0)
	savingsBalance=balance;
	else{
		savingsBalance=0;
		cout << "invalid number, balance set to 0.\n";
	}
}
double SavingsAccount::annualInterestRate = 0;

double SavingsAccount::getSavingsBalance() const{
	return savingsBalance;
}
double SavingsAccount::calculateMonthlyInterest(){
	double monthlyInterest=savingsBalance*annualInterestRate/12;
	savingsBalance=monthlyInterest+savingsBalance;
		return monthlyInterest; 
}
void SavingsAccount::modifyInterestRate(double newAnnualInterestRate){
	annualInterestRate=newAnnualInterestRate;
}

int main(){
	SavingsAccount saver1(2000);
	SavingsAccount saver2(3000);
	SavingsAccount::modifyInterestRate(3.00/100); 
	cout << "The monthly interest for saver1 is: "<<saver1.calculateMonthlyInterest()<<endl;
	cout << "The new account balance for saver1 is: "<<saver1.getSavingsBalance()<<endl;
	cout << "The monthly interest for saver2 is: "<<saver2.calculateMonthlyInterest()<<endl;
	cout << "The new account balance for saver2 is: "<<saver2.getSavingsBalance()<<endl<<endl;
	SavingsAccount::modifyInterestRate(4.00/100);
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	cout << "Next months balance for saver1 is estimated to be: "<<saver1.getSavingsBalance()<<endl;
	cout << "Next months balance for saver2 is estimated to be: "<<saver2.getSavingsBalance()<<endl;
	
	return 0;
}

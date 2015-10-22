#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
	string depos_name;
	string account_num;
	double balance;
public:
	void set_Name(string a){
		depos_name = a;

	}
	string get_Name(){
		return depos_name;

	}
	void withdraw(double amount){
		balance = balance - amount;
	}
	void deposit(double amount){
		balance = balance + amount;

	}
};

int main(){

	BankAccount a;
	a.set_Name("Ahmed");
	cout << a.get_Name() << endl;
	a.deposit(100);
	a.withdraw(100);
	return 0;
}
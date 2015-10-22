#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
	string depos_name;
	string account_num;
	double balance;
public:
	BankAccount(string depos_name){
		set_Name(depos_name);
	}
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

	BankAccount b("Ismail");
			cout << b.get_Name();
	return 0;
}

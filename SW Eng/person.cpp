#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() { lname = " "; fname[0] = '\0'; } // #1
	Person(const string & ln, const char * fn = "Heyyou"){
		lname = ln;
		strcpy_s(fname, fn);
	} // #2
	// the following methods display lname and fname
		void Show() const{
		cout << fname << " " << lname;
	}
	// firstname lastname format
	void FormalShow() const{
		cout << lname << ", " << fname;
	} // lastname, firstname format
};
int main(){
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();
}
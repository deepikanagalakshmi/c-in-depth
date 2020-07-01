#include <iostream>
#include <string>
using namespace std;

class Phone {
	string _name = "";
	string _os = "";
	int _price = 0;
	Phone();//default constructor

public:
	Phone(const string& name, const string& os, const int& price);//parameter constructor
	Phone(const Phone&);//copy constructor
	string getOS() {
	   return _os;
	}
	~Phone();
};

//default constructor definition
//	puts("Default constructor");
//}

//parameter constructor definition
Phone::Phone(const string& name, const string& os, const int& price) : _name(name), _os(os), _price(price) {
	puts("Parameter constructor");
}

//copy constructor definition
Phone::Phone(const Phone& values) {
	puts("Copy constructor");
	_name = "copied" + values._name;
	_os = "skinned_copy " + values._os;
	_price = values._price;
}

//destructor definition
Phone::~Phone() {
	printf("DESTRUCTOR called for %s\n", _name.c_str());
}

int main()
{
	//Phone samsung;
	//cout << samsung.getOS() << endl;

	Phone OnePlus8("OnePlus8", "oxy_Android", 799);
	cout << OnePlus8.getOS() << endl;

	//we can also copy object like copying one variable to other
	Phone OnePlusS = OnePlus8;
	cout << OnePlusS.getOS() << endl;
  
  return 0;
}

//DISABLE THE CONSTRUCTOR

//Some times there may be ambiguity in the code. Ambiguity can be avoided by some sneaky trick.
//Move the default constructor Phone(); to private area of class and command the definition of it.
//So objects will not have access to default constructor.
//In case of any lack of information of name, os, price is now not allowed just by moving constructor to private sector and thereby disabling it.
//Hence, now the class is ambiguity free.




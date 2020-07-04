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
		printf("The value of object pointer in getOS is %p\n", this);
		return _os;
	}
	int getPrice() {

		printf("The value of object pointer in getPrice is %p\n",this);
		return _price;
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
	printf("The value of object pointer is %p\n", &OnePlus8);

	//we can also copy object like copying one variable to other
	Phone OnePlusS = OnePlus8;
	cout << OnePlusS.getOS() << endl;

	return 0;
}
//The value of pointer in line no 55 15 and 20 is same

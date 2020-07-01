#include <iostream>
#include <string>
using namespace std;

class Phone {
	string _name = "";
	string _os = "";
	int _price = 0;

public:
	Phone();//default constructor
	Phone(const string& name, const string& os, const int& price);//parameter constructor
	Phone(const Phone&);//copy constructor
	string getName() {
		return _os;
	}
	~Phone();
};

//default constructor definition
Phone::Phone() :_name("Default name"), _os("Andy"), _price() {
	puts("Default constructor");
}

//parameter constructor definition
Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price) {
	puts("Parameter constructor");
}

//copy constructor definition
Phone::Phone(const Phone& values) {
	puts("Copy constructor");
	_name = "copied"+values._name;
	_os = "skinned_copy "+values._os;
	_price = values._price;
}

//destructor definition
Phone::~Phone() {
	printf("DESTRUCTOR called for %s\n", _name.c_str());
}

int main()
{
	Phone samsung;
	cout<<samsung.getName()<<endl;

	Phone OnePlus8("OnePlus8", "oxy_Android", 799);
	cout<<OnePlus8.getName()<<endl;
  
	//we can also copy object like copying one variable to other
	Phone OnePlusS = OnePlus8;
	cout<<OnePlusS.getName()<<endl;
}

//CONSTRUCTORA
//constructors  is a method which is called automatically when object is created
//it just reserves memory
//https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three#:~:text=You%20allocated%20memory%20in%20your,pointer%20to%20the%20new%20object.&text=If%20one%20object%20deletes%20this,trying%20to%20use%20it%20%2D%20eek.

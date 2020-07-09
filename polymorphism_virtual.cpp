#include <iostream>
using namespace std;

class One {
public:
	virtual void intro() { puts("Iam One"); }
};

class Two :public One {
public:
	void intro() { puts("Iam Two"); }
};

class Three :public One {
public:
	void intro() { puts("Iam Three"); }
};
int main()
{
	One *a;
	Two b;
	Three c;

	//a.intro();
	//b.intro();
	//c.intro();

	//when refering using object pointer use "virtual" keyword in base class function
  // else it will point to the pointer object all time (a=&b; a->intro();----->outpus as Iam one)(a=&c; a->intro();----->outpus as Iam one)
	a = &b;
	a->intro();

	a = &c;
	a->intro();

	return 0;
}

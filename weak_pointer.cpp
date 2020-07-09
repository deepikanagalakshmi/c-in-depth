//weak pointer keep count on how many pointer are referance towards same memory
//as soon as count goes zero,then the memory is freed up.
#include <iostream>
#include<memory>
using namespace std;

class User {
public:
	User() {
		puts("User constructed");
	}
	~User() {
		puts("------------User destroyed-----------");
	}
	void testfunc() {
		puts("Iam a test function");
	}
};
int main()
{

	{
		//unique_ptr<User> sam (new User()); //Not a fav. one for developers because of using new keyword
		unique_ptr<User> sam = make_unique<User>();
		sam->testfunc();

		//unique_ptr<User> sam = samm; //NOT ALLOWED
	}

	{
		//shared_ptr<User> tim (new User()); //Not good way
		shared_ptr<User> tim = make_shared<User>();
		//weak pointer keeping count-refering to shared pointer(same memory)
		weak_ptr<User>wtim = tim;
		shared_ptr<User> timm = tim;

		tim->testfunc();
		timm->testfunc();
		
	}

	cout << "Outside the scope\n";
}


//unique pointers
//1. It is one of the type of smart pointers
//2. In unique pointer memory gets free when the scope ends(it can be any scope like for loop,if or even empty scope {........})
//3. You cannot copy the unique pointers

//What issue unique pointer is addressing ?
//In traditional pointer there are some issues,
//1. Consider 2 pointers say ptr1 and ptr2 are pointing to the same memory location
//2. When ptr1 gets deleted it free up the memory but ptr2 is still pointing to the deleted memory location
//3. This can lead to an serious security issue
//Hence these Unique pointer automatically create and destroy memory within a scope

#include <iostream>
#include<memory>
using namespace std;

class User {
public:
	User() {
		puts("User constructed");
	}
	~User() {
		puts("User destroyed");
	}
	void testfunc() {
		puts("Iam a test function");
	}
};
int main()
{
	//scope can be with in if block ,for block etc..,
	//below is the empty scope eg:({   })
  
	{
	  	//unique_ptr<User> sam (new User()); //Not a fav. one for developers because of using new keyword
                 unique_ptr<User> sam = make_unique<User>();
                 //now it can be used as normal pointer and perform whatever needed to be performed
		 sam->testfunc();
                 //unique_ptr<User> sam = samm; //NOT ALLOWED

	}
  
	cout << "Outside the scope\n";
  return 0;
}
//output
//User created
//Iam a test function
//User Destroyed
//Outside the scope

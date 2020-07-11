#include <iostream>
#include <string>
using namespace std;

int main()
{
	//lambda syntax
	[] {cout << "Hello LAMBDA\n"; }();
	[]() {return 100; };

	auto sum= [](auto a, auto b) {return a + b; };
    
	cout << "Sum of 2 and 3 is :" << sum(2, 3)<<endl;
	cout << "Sum of 2.5 and 3.5 is :" << sum(2.5, 3.5)<<endl;
	
	string a = "abc";
	string b = "def";
	cout << "Sum of string a and string b is: " << sum(a, b)<<endl;

	return 0;
}

/*C++ 11 introduced lambda expression to allow us write an inline function which can be used 
for short snippets of code that are not going to be reuse and not worth naming.
Generally return-type in lambda expression are evaluated by compiler itself and we don’t
need to specify that explicitly and -> return-type part can be ignored but in some complex
case as in conditional statement, compiler can’t make out the return type and we need to specify that.*/

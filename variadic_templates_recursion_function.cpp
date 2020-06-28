#include <iostream>
#include <string>
using namespace std;

template<typename T>
void func(T t) {
	cout <<"Func one: "<< t << endl;
}

template<typename T,typename... Args>
void func(T t, Args... args) {
	cout <<"func two: " <<t << endl;
    //recursion is important
	func(args...);
}

int main()
{
	string name = "Deepika";
	func(name);
  //calling the variadic function
  func(1, 1.5, 9, name, 10.0000, true);

	return 0;
}

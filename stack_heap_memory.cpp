#include <iostream>
struct User {
	const int id;
	int age;
	User() : id(001), age(22) {};
};
int main()
{
	using namespace std;

	//stack
	int stack_score = 200;
	User mike;

	//heap
	int* heap_score = new int;
	*heap_score = 200;

	//good practice to add parentheses after User but not compulsory
	User* nike = new User();

	//don't forget to deallocate memory 
	//whenever using new keyword must use delete keyword
	delete heap_score;
	delete nike;

	return 0;
}

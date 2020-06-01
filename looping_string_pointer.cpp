#include <iostream>
using namespace std;
int main()
{
	//string or char array always ends with 0
	char my_string[] = "deepika";
	char my_name[] = { 'd','e','e','p','i','k','a',0 };

	printf("my name is: %s\n", my_string);
	cout << "my name is " << my_name << endl;
  
	//diff ways of looping through string or char array
  for (int i = 0; my_name[i] != 0; i++) {
		cout << "character is: " << my_name[i]<<endl;
	}

	for (int i = 0; my_string[i] != 0; i++) {
		cout << "character is: " << my_string[i]<<endl;

	}

	//this condition part grab the value of my_string[i], ones it grab 0 it becomes false 
	for (int i = 0; my_string[i]; i++) {
		cout << "character is: " << my_string[i]<<endl;
	}

	cout << "take a break part 2 using pointers\n";

	for (char * cp = my_name;*cp!=0;cp++) {
		cout << "character is: " << *cp << endl;
	}

	cout << "take a break part 3 using for each\n";
  
	//also trys to print the element 0 so handel with if
	for (char i : my_name) {
		if (i == 0) break;
		cout << "char is: " << i<<endl;
	}
}


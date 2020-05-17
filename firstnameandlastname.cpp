#include<iostream>
#include<string>
using namespace std;
int main() {
	string first_name, last_name;
	cout << "Enter first name: ";
	getline(cin, first_name);
	cout << "Enter last name: ";
	getline(cin, last_name);

	cout << "Welcome " << first_name << " " << last_name;

}

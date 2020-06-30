#include <iostream>
#include <string>
using namespace std;

//assume class are in separate file and methods needed for class are also in separate file
class User {
	int _secret_no = 12233;

public:
	string name = "default";
	void classMessage();

	void set(const int& new_secret) {
		_secret_no = new_secret;
	}
    
	int get()const;
};
//Good practice is to put methods needed for the class in separate file
//assume the below methods are in separate file
//to make these standalone methods as methods belonging to class use classname:: in front of method name
//Eg: User::

void User::classMessage() {
	cout << "Class is great, " << name << endl;
}
 
int User::get()const {
	return _secret_no;
}

int main() {

	User sam;
	sam.name = "sam";
	sam.classMessage();
	sam.set(333);
	cout << "private member changed using setter & getter : " << sam.get() << endl;

	User mane;
	mane.name = "Mane";
	mane.classMessage();

	User deepika;
	deepika.classMessage();
	deepika.name = "Deepika";
	deepika.classMessage();

	//const qualified object can olny access const methods the cannon access other methods inside class
	//non const object can access both const qualified methods and non const methods
	const User hazel;
	cout << hazel.get() << endl;
	return 0;
}

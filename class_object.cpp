#include <iostream>
#include <string>
using namespace std;

class User
{
	string secret = "This is secret message";
	int secret_no = 12233;

public:
	string name = "default";
	void classMessage() {
		cout << "Class is great, " << name << endl;
	}
};

int main(){
	//We can create many object for the same class.
	//Each object can perform their own operations independent of other object.

	User sam;
	sam.name = "sam";
	sam.classMessage();
	//sould not access secret variable because as default state is private 
	//sam.secret = "hello";

	User mane;
	mane.name = "Mane";
	mane.classMessage();

	User deepika;
	deepika.classMessage();
	deepika.name = "Deepika";
	deepika.classMessage();

	return 0;
}

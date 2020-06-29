#include <iostream>
#include <string>
using namespace std;

class User {
	//it is good practice to name private data members with starting "_" in it. Eg: int _secret
	int _secret_no = 12233;

public:
	string name = "default";
	void classMessage() {
		cout << "Class is great, " << name << endl;
	}
  
	//to access and change values of private members of class we will use getter and setter
	//getter and setter are not for public members because we can directly change or use them outside using objects 
         void set(const int& new_secret) {
         _secret_no = new_secret; 
         }
	
         int get() {
         return _secret_no; 
         }
};
int main() {
	
	User sam;
	sam.name = "sam";
	sam.classMessage();
	sam.set(333);
	cout <<"private member changed using setter & getter : " << sam.get() << endl;

	User mane;
	mane.name = "Mane";
	mane.classMessage();

	User deepika;
	deepika.classMessage();
	deepika.name = "Deepika";
	deepika.classMessage();

	return 0;
}

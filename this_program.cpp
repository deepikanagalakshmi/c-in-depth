#include <iostream>
using namespace std;
class Rectangle {
	int _length;
	int _breath;

public:
	Rectangle(int l=5.0,int b=2.0) {
		_length = l;
		_breath = b;
	}
  
	double Area() {
		return _length * _breath;
	  }
    
	//this refers to the object it recently created
	int compare(Rectangle rectangle) {
		return this->Area() > rectangle.Area();
	}
  
};
int main()
{
	Rectangle h1(3.0, 3.0);
	Rectangle h2(4.0, 4.0);
  
	cout <<"Area of object h1: "<< h1.Area() << endl;
	cout <<"Area of object h2: "<< h2.Area() << endl;

	cout <<"Compare result: "<< h1.compare(h2) << endl;
  
  //in if h1.compare(h2) returns 0 or 1 after the function call. 0 for false, 1 for true.
	if (h1.compare(h2)) {
		puts("H2 is small");
       }
	else {
		puts("H2 is big");
	}
  
	return 0;
}


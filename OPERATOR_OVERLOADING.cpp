#include <iostream>
using namespace std;
class Complex {
	int real, imag;
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(int r, int i) {
		real = r;
		imag = i;
	}
	void print() {
		cout << real << " + " << imag << "i\n";
	}
	//operator overloading
	Complex operator + (Complex c) {
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
};
int main()
{
	Complex c1(4, 5);
	Complex c2(2, 3);
	Complex c3(1, 1);
	Complex c4, c5;

	c4 = c1 + c2; //similar to c1.add(c2)
	c5 = c2 + c3;
	c4.print();
	c5.print();
	
}

//OPERATOR OVERLOADING
//we can redefine an operator by overloading to add our one functionality
//almost any operator can be overloaded expext ::, sizeof(), member selector (.)
//member pointer selector (*) and ternary operator (:?)

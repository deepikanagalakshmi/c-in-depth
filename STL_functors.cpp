#include <iostream>
using namespace std;
class Myfloat {
	float ft;
public:
	Myfloat() {
		ft = 0.1;
	}
	void getValue() {
		cout << ft << endl;
	}

	//functor or functional operator -overloading of parenthesis ()
	void operator()(float v) {
		ft += v;
	}
};
int main()
{
	Myfloat floaty;
	floaty.getValue();
  
	//below code cannot be achieved by constructor by passing values becasue constructors runs for very first time only.
         //so we make it work by using functors
	floaty(1.1); //same as floaty.addvalue(1.1)
	floaty.getValue();

	floaty(1.9);//same as floaty.addvalue(1.1)
	floaty.getValue();

	return 0;
}


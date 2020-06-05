//Linkers and Qualifiers and pre & post increment
//2 Qualifiers ---1)modification qualifiers-(const,volatile,mutable)
//            ----2)Life duration qualifiers-(static,register,extern)
#include <iostream>
using namespace std;
int lifeUp() {

	//int life = 3;
	//if we are using the above code, every time the function is called life value will not update
	//because the scope of life variable is only within lifeUp() function so use the "static" keyword 
	static int life = 3;
	//return life++;
	//post increment will first use the value and then update
	return ++life;
	//pre increment will first update and then use the value

}
int main()
{
	int life = 3;
	cout << "your starting game life is: " << life<<endl;

	life = lifeUp();
	printf("Your updated game life is %d\n", life);

	life = lifeUp();
	printf("Your updated game life is %d\n", life);
}


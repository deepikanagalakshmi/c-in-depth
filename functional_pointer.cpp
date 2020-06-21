#include <iostream>
using namespace std;

int getTwo() {
	return 2;
}

void intersting(){
	puts("I'am intersting");
}

float addme() {
	return 4.4;
}

int add(int a, int b) {
	return a + b;
}

int main()
{
	int whatIgot = getTwo();
	cout << whatIgot << endl;
  
	//as this pointer is created for void function intersting() we are creating void pointer

	//about syntax
        //as this pointer is pointing to function we should include "()" parentheses near the pointer
	//we are not including parentheses "()" near intersting function because
	//we dont want to run that now
  
	void (*pointsToIntersting)() = intersting;

	//can use de-referencing and run it where ever needed
	pointsToIntersting();
	//other syntax
	(*pointsToIntersting)();
	
	float (*poinsToadd)() = addme;
	float ans=poinsToadd();
	cout << ans<<endl;

	int a = 3;
	int b = 4;
	int (*pointstoadd)(int a,int b) = add;
        int integerAdd = pointstoadd(a,b);
	cout << integerAdd<<endl;
}

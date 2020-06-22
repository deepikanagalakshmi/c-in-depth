#include <iostream>
//#define NULL 0

void printval(int a) {
	printf("Integer value is : %d\n", a);
}

void printval(double a) {
	printf("double value is : %f\n", a);
}

void printval(int *a) {
	printf("Pointer value is : %p\n", a);
}

int main()
{
	int a = 3;
	printval(a);
	//printval(NULL);

	//nullptr is the pointer which points to the real null 
	printval(nullptr);

	return 0;
}


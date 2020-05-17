#include <iostream>
using namespace std;

int main()
{
	int integer_array[4] = { 1,2,3,4 };
	cout << integer_array << endl;
	cout << integer_array[0] << endl;

	int another_array[4];
	another_array[0] = 9;
	another_array[1] = 29;

	cout << another_array[3] << endl;

	cout << another_array[0] << endl;
	*another_array = 19;
	cout << "Array at index 0 changed using pointer: "<<another_array[0] << endl;

	int* ap = another_array;
	ap++;
	cout << another_array[1] << endl;
	*ap = 39;
	cout << "Array at index 1 changed using pointer by incrementing:"<<another_array[1] << endl;
  
}

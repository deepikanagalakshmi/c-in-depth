#include <iostream>
using namespace std;

//call by reference
//using the pointer itself 
//it is not necessary to name it as life keep any other name as wanted(abc,x or y)
void lifeup(int *life)
{
	++(*life);
}
int main()
{
	int life = 3;
	//passing the reference of variable
	lifeup(&life);
	cout << life << endl;

}

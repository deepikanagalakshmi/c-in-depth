#include <iostream>
using namespace std;

//creating template
template<typename T>

//using T or any other name instead of return type (int ,float etc,.)
T addme(T a, T b) 
{
	return a + b;
}
int main()
{
	int v1 = 5;
	int v2 = 5;
	float v3 = 4.6;
	float v4 = 6.3;
	cout << addme(v1, v2) << endl;
	cout << addme(v3, v4) << endl;
}


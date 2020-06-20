#include <iostream>
using namespace std;

int addme(int a, int b)
{
	return a + b;
}
float addme(float a, float b)
{
	return a + b;
}
int main()
{
	int v1 = 5;
	int v2 = 5;
	float v3 = 4.5;
	float v4 = 6.3;
	cout << addme(v1, v2) << endl;
	cout << addme(v3, v4) << endl;

	return 0;
}


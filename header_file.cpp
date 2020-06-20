#include <iostream>
#include "Header.h"
using namespace std;

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

//this is the separate file Header.h

//#pragma once
//#define Header_h

int addme(int a, int b)
{
	return a + b;
}
float addme(float a, float b)
{
	return a + b;
}

//using template and template function  

#include <iostream>
using namespace std;

//template declaration (also its function)is outside int main() !important
//This part is known as generic programming
template<typename T>

T getBigger(T a, T b) {
	return (a > b) ? a : b;
}

int main()
{
	cout << getBigger(3, 6) << endl;
	cout << getBigger(5.5, 7.6) << endl;
	cout << getBigger('a', 'b')<<endl;  //checks for greater ASCII value

}


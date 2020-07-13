#include <iostream>
#include<algorithm> //include this header
using namespace std;
int main()
{
	int num[5] = {7,5,3,9,1 };
	float numbers[5] = { 7.3,5.3,3.5,9.1,1.9 };

	cout << "Unsorted array" << endl;
	for (int i : num) {
		cout << i << " ";
	}
	cout << endl;

	sort(num, num + 5);  //takes begining value and ending value as parameters
	sort(numbers, numbers + 5); //can also take float

	cout << "SORTED array" << endl;
	for (int i : num) {
		cout << i << " ";
	}
	cout << endl;
	//1 3 5 7 9
	cout << "SORTED float array" << endl;
	for (float i : numbers) {
		cout << i << " ";
	}
	cout << endl;
	//1.9 3.5 5.3 7.3 9.1
}


#include <iostream>
using namespace std;
int main()
{  
	int ratings;
	cout << "Enter ratings";
	cin >> ratings;

	switch (ratings) {
	case 1:
		puts("Rated as 1");
		break;
	case 2:
		puts("Rated as 2");
		break;
	case 3:
		puts("Rated as 3");
		break;
	case 4:
		puts("Rated as 4");
		break;
	case 5:
		puts("Rated as 5");
		break;
	default:
		puts("Please enter your ratings between 1 and 5");

	}
}

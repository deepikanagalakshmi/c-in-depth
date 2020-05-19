#include <iostream>
using namespace std;
int main()
{
	int rating;
	cout << "Enter rating 1-5 :";
	cin >> rating;
	if (rating == 1)
	{
		puts("Bad rating");
	}
	else if (rating == 2) {
		puts("improve on your rating");
	}
	else if (rating == 3) {
		puts("do better");
	}
	else if (rating == 4) {
		puts("good rating");

	}
	else if (rating == 5) {
		puts("Excellent ratings");

	}
	else {
		puts("Enter rating from 1-5");
	}


	puts("TERNARY");
	printf("Your rating feedback is %s\n", rating >= 4 ? "Awesome rating" : "Improve on rating");

}

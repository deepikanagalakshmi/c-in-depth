#include <iostream>
using namespace std;

int main()
{
	int score = 200;
	int* myp = &score;
	printf("Value of score: %d\n", score);
	printf("Value of pointer: %p\n", myp);

	int& another_score = score;
	another_score = 800;

	printf("Value of score: %d\n", score);
	printf("Value of pointer: %p\n", myp);
	return 0;

}


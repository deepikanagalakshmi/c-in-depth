#include <iostream>
using namespace std;
int main()
{
  int life = 3;
	int points = 4;
	int score = 2;
	int scr=2;
  
	score = score + points;
	cout << "score: " << score << endl;

	//score = score + points;
	//score = score - points;
	//score = score * points;
	//score = score / points;
	//score = score % points;

	//to optimize the code use short hand notation 
	//when writing system level code, things get stored in register 
	//so short-hand notation optimize
  
	scr += points;
	cout << "scr: " << scr << endl;

	//scr -= scr;
	//scr *= scr;
	//scr /= scr;
	//scr %= scr;

	//comparison
	//  >  <  >=  <=  ==  !=
  
	if (life != 0) {
		puts("into the if block");
	}

}

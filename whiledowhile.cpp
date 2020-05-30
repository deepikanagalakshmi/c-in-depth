#include <iostream>
using namespace std;
int main()
{
	int numbers[] = { 1,2,3,4,5,6,7 };
	int i = 0;

	while (i < 7) {
		if (i == 3)
		{
			break;
		}
		cout << "Current number is " << numbers[i] << endl;
		i++;
	}
  
	cout << "outside loop" << endl;
  
	int j = 0;
	while (j < 7) {
		if (j == 3)
		{ 
			j++;
			cout << "skip this one" << endl; 
			continue;
		}
		cout << "Current number is " << numbers[j] << endl;
		j++;
	}
  
	cout << "DO WHILE" << endl;
	//do while execute the code atleast once even if the condition is wrong
	int k = 8;
	 do {
		cout <<"Current number is " << numbers[k] << endl;
		k++;
	 } while (k < 7);

	 cout << "outside loop";
}

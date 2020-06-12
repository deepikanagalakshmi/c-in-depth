#include <iostream>
using namespace std;
int main()
{
        int* myp;

        try {
            //alocation of memort
            myp = new int[1000];
            cout << "Memory space allocated\n";
        }
        catch (...) {
            cout << "failed in allocating memory\n";
        }
        //dont forget to delete the allocated memory
        //delete[] myp;


        int x = 6;
      	x << 2;
	printf("shift value :%d", x);

	return 0;

}

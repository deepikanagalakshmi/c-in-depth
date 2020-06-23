#include <iostream>
#include<string>

//macros are replacement of some code that we want to change 
#define END return 0
#define ENDMESSAGE cout<<"Program ends here"<<endl

//macro at line 9 is very efficient in reducing huge space.
#define MYINT int16_t
#define CCPC const char* const 

#define console_log(variable)  cout<<variable<<endl

using namespace std;
int main()
{
        MYINT a = 4;
	cout << a << endl;

	int score = 400;
	console_log(score);
	string name = "Deepika";
	console_log(name);
	
	ENDMESSAGE;
   
	//return 0;
	END;
}


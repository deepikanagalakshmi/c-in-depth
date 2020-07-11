#include <iostream>
#include <string>
using namespace std;
constexpr int maxbuffer = 1024;
int main()
{
	const char* myfile = "myfile.txt";
	const char* information = "Hey! this is the text file";

	//WRITING FILE

	FILE* fh = fopen(myfile, "a");//it append the content with previously present content
        //FILE* fh = fopen(myfile, "w"); //clears up the file every time it gets executed
	
	for(int i = 0; i <= 50; i++) {
		fputs(information, fh);
	}
        fclose(fh);

	//READING FILE
	char buf[maxbuffer];
	FILE* fh = fopen(myfile, "r");
    
	while (fgets(buf, maxbuffer, fh)) {
		fputs(buf, stdout);
	}
	fclose(fh);
}


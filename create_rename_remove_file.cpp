#include <iostream>
using namespace std;
int main()
{
	static const char* originalfile = "originalfile.txt";
	static const char* editedfile = "editdfile.txt";

	//if file not exists it create and write
	FILE* fh = fopen(originalfile, "w");
	fclose(fh);
	//rename(originalfile, editedfile);
	//remove(editedfile);
}


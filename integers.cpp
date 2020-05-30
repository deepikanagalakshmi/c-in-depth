#include <iostream>
#include <cstdint>
//<cstdint>header used when programmer need to write a program or drive to handle with
//system directly so the size of data types should not change in different platforms like windows or linux
using namespace std;
int main()
{
	//1 byte is equal to 8 bits
	printf("The size of char data type is %ld bits\n", sizeof(char) * 8);

	printf("The size of short int data type is %ld bits\n", sizeof(short int) * 8);
	printf("The size of int data type is %ld bits\n", sizeof(int) * 8);
	printf("The size of long int data type is %ld bits\n", sizeof(long int) * 8);
	printf("The size of long long int data type is %ld bits\n", sizeof(long long int) * 8);

	//using <cstdint>
	printf("The size of int data type is %ld bits\n", sizeof(int16_t) * 8);
	printf("The size of int data type is %ld bits\n", sizeof(int32_t) * 8);
	printf("The size of int data type is %ld bits\n", sizeof(int64_t) * 8);

	//this is in new update of c++ to convert between binary decimal hexadecimal
	//10110 in integer is 22
	//16 in integer is 22
	int fun = 0b10110; //binary to decimal(to write binary no include "0b" in front of binary no)
	int more_fun = 0x16;//hexadecimal to decimal(to write hexadecimal no include "0x" in front it)
	printf("fun value for binary to decimal: %d\n", fun);
	printf("more fun value for hexadecimal to decimal: %d\n", more_fun);
}

#include <iostream>
using namespace std;

//preprocessor constant
#define BOLD 4

//to reduce the memory we are casting else just use enum style{};
//enum auto increment by itself
enum style:uint8_t{
    FONT=5,
    ITALICS=7,
    UNDERLINE=8,
    CROSSED
};
int main()
{
    int my_attribute = ITALICS;
    int my_attribute_2 = CROSSED;

    cout << my_attribute << endl;
    cout << my_attribute_2 << endl;
    return 0;
}


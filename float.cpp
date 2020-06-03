#include <iostream>
using namespace std;
int main()
{
    printf("size of float is : %ld bits\n", sizeof(float) * 8);
    printf("size of double is : %ld bits\n", sizeof(double) * 8);
    printf("size of long double is : %ld bits\n", sizeof(long double) * 8);
    
    //always be caution with float
    float my_p_value = 20.2+20.2;
    
    if (my_p_value == 40.4) puts("got it right");
    else puts("something went wrong");
    
    printf("my precision value is %f in float\n", my_p_value);
    printf("my precision value is %1.30f in float", my_p_value);

}


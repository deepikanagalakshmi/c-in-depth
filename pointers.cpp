#include <iostream>
using namespace std;
int main()
{
    const int life=4;
   // life = 5; const should not be modified
    int card;
    card = 40;
    int my_card;
    my_card = card;

    int* myp;
    myp = &card;
    printf("Value of my_card %d\n", my_card);
    printf("Value of card %d\n", card);

    printf("MEMORY LOCATION of card variable %p\n", myp);
     int car = 10;
     car = *myp; //pointer dereferencing

    printf("Value of car %d\n",car );//output will be 40 ,now car is having value that 
                                      //contained in the memory location *myp which is 
                                      //refering to location of my_card;



}


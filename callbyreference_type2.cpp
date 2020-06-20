#include <iostream>
using namespace std;

//call by reference type 2
//in this function whatever the variable is passed, it is taking the reference of it
//changes made to the reference will also affect the original variable
void lifeup(int& life) {
    ++life;
}
int main()
{
    int life = 3;
    //main function is just passing the original variable
    lifeup(life);
    //output will be 4
    cout << life << endl;
}


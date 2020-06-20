#include <iostream>
using namespace std;

//call by value
//only the copy of the variable is sent and copy is only changed

void lifeup(int life) {
    ++life;
}
int main()
{
    int life = 3;
    lifeup(life);
    //life value will be 3 as the change is made only in the copy of the life variable
    cout<<life<< endl;
    return 0;
}


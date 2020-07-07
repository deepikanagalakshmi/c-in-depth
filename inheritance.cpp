#include <iostream>
#include<string>
using namespace std;

class Man {
    string _name;
    int  _age;
    Man(){}
protected:
    Man(const string& name, const int& age) :_name(name),_age(age)
    {
    }
    void run() {
        puts("I can run");
    }
public:
    void sayName() const;
};
void Man::sayName()const {
    cout << "My name is " << _name <<" and age is "<<_age<< endl;
}

//Superman
class Superman :public Man {
    bool flight;
public:
    //calling Man() hardcodeing it
    Superman(string name) :Man(name, 26) {
    }
    void run() {
        puts("I can run at light speed");
    }
};

//Spiderman
class Spiderman :public Man {
    bool webbing;
public:
    Spiderman(string name) :Man(name, 19) {
    }
    void run() {
        puts("I can run at normal speed");
    }
};

int main()
{
    Superman clerk("Kent");
    clerk.sayName();
    clerk.run();

    Spiderman peter("Peter");
    peter.sayName();
    peter.run();
    return 0;
}


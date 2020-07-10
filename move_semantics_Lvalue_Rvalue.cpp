//MOVE SEMANTICS is for memory optimization
//insted of copying data we are moving data

#include <iostream>
using namespace std;

//Incase, when swaping value from calss which composed of 500 data members, we need to reserve more memory 
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "A is:" << a<<endl;
    cout << "B is:" << b<<endl;
}
void anotherswap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("A is: %d\n", a);
    printf("B is: %d\n", b);
}

//memory optimization not copying just moving
void swap_semantics(int a, int b) {
    int temp;
    temp = move(a);
    a = move(b);
    b = move(a);
    cout << "A :" << a << endl;
    cout << "B :" << b << endl;

}
string printme() {
    return "Iam print";
}
int main()
{
    // Lvalue on left which can be used on other line
    // Rvalue on right hand side of "=" which cannot be used on next line
    int a = 10;
    int b = 20;
    swap(a, b);
    anotherswap(a, b);
    swap_semantics(a, b);

    //double referance ,copy of value so memory might be doubly occupied
    string s = printme();

    //In move semantic, only one referance, not copying things we are moving things 
    string&& ss = printme(); //use double "&&"
}


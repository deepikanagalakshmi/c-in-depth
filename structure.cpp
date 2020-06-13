#include <iostream>
using namespace std;
struct User {
    const int uId;
    const char *name;
    const char* email;
    int course_count;
};

int main()
{
    User mickey = {01,"mickey","mickey@cartoon.com",3};
    User donald = { 02,"donald","donald@cartoon.com",4 };

    cout << mickey.name << endl;
    cout << donald.email << endl;
    //important! email can be changed because the const was only for the pointer
    //only the memory location cannot be changed
    donald.email = "d@d.com";
    cout << donald.email << endl;

    //uId cannot be changed because it is const
    // donald.uId = 010;

    //creating referance 
    User* d = &donald;

    //accessing the created referance
    d->course_count = 12;
    cout << d->course_count << endl;
    cout << donald.course_count << endl;

    return 0;
}

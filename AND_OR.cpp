#include <iostream>
using namespace std;
int main()
{
    bool isSignedIn = true;
    bool isAdmin = true;
    bool isFbUser = true;
    bool isGoogleUser = false;

    cout << "Using AND\n";
    if (isSignedIn && isAdmin) {
        puts("Welcome Admin!");
    }
    cout << "Using AND and OR\n";

    if ((isGoogleUser || isFbUser) && isAdmin)
    {
        puts("Welcome Admin!!");
    }
}

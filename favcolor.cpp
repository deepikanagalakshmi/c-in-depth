#include<string>
using namespace std;
int main()
{
    //std::cout << "Hello there" << std::endl;
    //int number;
    //cin >> number;
    //printf("Your ID is %d\n", number + 3);
    string color;
    cout << "Enter your fav. color\n";
    getline(cin, color);
    cout << "Hey " << color << " is my fav. color too" << endl;
    return 0;
}

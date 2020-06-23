#include <iostream>
int factorial(int n);
int main()
{    
    //factorial: 1*2*3*4*5
    //factorial: 5*4*3*2*1
    int n;
    std::cout << "enter value for factorial" << std::endl;
    std:: cin >> n;
    std::cout << "Factorial is :" << factorial(n);
}
int factorial(int n) {
   if (n>1)
    {
      return  n* factorial(n - 1);
    }
    else {
        return 1;
    }
}

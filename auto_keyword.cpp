
#include <iostream>
#include<string>
using namespace std;

string api_call() {
    return "got some data from web";
}

int another_api_call() {
    return 5;
}

int main()
{
    //use auto when we dont know what type is going to be returned from api_call
    auto response = api_call();
    auto another_response = another_api_call();
    cout << "value from api call: " << response << endl;
    cout << "value from another api call: " <<another_response << endl;

    //auto is not variable by itself
    //auto change the type of it according to the value it receive
    
    //checking the type of auto and string
    if (typeid(response) == typeid(string)) {
        puts("Type id matched for string\n");
    }
    
    //checking the type of auto and int
    if (typeid(another_response) == typeid(int)) {
        puts("Type id matched for int\n");
    }
   
}


#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int array[5] = { 5,4,3,2,1 };
    
    cout << "SORTED" << endl;
    sort(array, array + 5);
    for (int i : array) {
        cout << i << " ";
    }
    cout << endl;

    if (binary_search(array, array+5, 5))
    {
        cout << "NUMBE FOUND" << endl;
  }
    else {
        cout << "NUMBE FOUND" << endl;

    }
}

//before using binary_search sort it first !important

#include <iostream>
#include<list>

using namespace std;

int main()
{
        //traversing elements in list is not optimized but inserting or deleting element from list is optimized (using insert() and erase() )
	list<int> mylist;  //list allow non-continuous memory allocation

	for (int i = 3; i <= 10; i++) {
		mylist.push_back(i * 10);

	}

	mylist.push_front(20);
	mylist.push_front(10);

	for (auto i : mylist) {
		cout << i << " ";
	}
	cout << endl;

	cout << "Front: " << mylist.front() << endl;
	cout << "Back: " << mylist.back() << endl;

	mylist.pop_front();
	mylist.pop_back();

	mylist.reverse();
  
        cout << "reverse() :";
	for (auto i : mylist) {
		cout << i << " ";
	}
	cout << endl;

	mylist.sort();

	cout << "sort() :";
        for (auto i : mylist) {
		cout << i << " ";
	}
	cout << endl;
	
  }


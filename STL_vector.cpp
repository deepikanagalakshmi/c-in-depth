#include <iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> nums = { 1,2,3,4,5 };
	vector<string> actor{ "Clay","Hanna","Justin","Jessica" };

	//Adding element to vector
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(8);

	//display vecetor elements
	for (int i : nums) {
		cout << i << " ";  // 1 2 3 4 5 6 7 8
	}
	cout << endl;
	
	//ITERATORS
	cout << "Using ITERATORS begin() and end() " << endl;
    //begin() and end() gives referance of first and last element 
	for (auto i = nums.begin(); i != nums.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;

	cout << "Using ITERATORS rbegin() and rend() to reverse vector" << endl;
  //to print in reverse order rbegin() and rend() is useful
	for (auto i = nums.rbegin(); i != nums.rend(); i++) {
		cout << *i <<" ";
	}
	cout << endl;

	//CAPACITY

	//size() to find no of elements
	cout << "size(): "<<nums.size() << endl;

	//max_size() to find max elements the vector could hold in
	cout << "max_size(): " << nums.max_size() << endl;

	//capacity()
	cout << "capacity():" << nums.capacity() << endl;

	//resize(n) resize to n elements
	nums.resize(5); //resize vector to size 5
	cout << "after resize(5): " << endl;

	for (int i : nums) {
		cout << i << " ";
	}
	cout << endl;

	//empty() returns bool value

	if (empty(nums) == true) {
		cout << "EMPTY" << endl;
	}
	else {
		cout << "NOT EMPTY" << endl;
    }

	//shrink_to_fit() – Reduces the capacity of the container to fit its size and 
	//destroys all elements beyond the capacity.

	nums.shrink_to_fit();
	
	cout << "shrink_to_fit(): " << endl;

	for (int i : nums) {
		cout << i << " ";
	}
	cout << endl;

	//ELEMENT ACCESS

	vector<int> tens;
	
	cout << "New vector tens: " << endl;
    for (int i = 1; i <= 10; i++) {
		tens.push_back(i * 10);
	}

	for (int i : tens) {
		cout << i << " ";
	}
	cout << endl;

	//tens[]-refering to specific position
	cout << "tens[4] :" << tens[4] << endl;

	//at(n)-returns element at specific position
	cout << "at(0) :" << tens.at(0) << endl;

	//front() and back() returns first and last element in vector
	cout << "front(): " << tens.front() << " back(): " << tens.back() << endl;

	//data()- pointer to the first element
	int* p = tens.data();
	cout << "data() :" << *p << endl;

	//MODIFIERS

	// fill the array with 20 five times 
	tens.assign(5, 20);   //It assigns new value to the vector elements by replacing old ones
	cout<<"tens.assign(5, 20) :"<<endl;
	for (int i : tens) {
		cout << i<<" " ;
	}
	cout << endl;

	//push_back() 

	cout << "After push_back() :"<<endl;
	tens.push_back(10);
	tens.push_back(10);
	tens.push_back(10);

	for (int i : tens) {
		cout << i << " ";
	}
	cout << endl;
	
	cout << "After pop_back() :" << endl;
	tens.pop_back(); //removes last element

	for (int i : tens) {
		cout << i << " ";
	}
	cout << endl;

	cout << "tens.insert(tens.end(), 200):" << endl;
	tens.insert(tens.end(), 200);

	for (int i : tens) {
		cout << i << " ";
	}
	cout << endl;

	cout << "tens.erase(tens.begin()) :"<<endl;
	tens.erase(tens.begin());

	for (int i : tens) {
		cout << i << " ";
	}
	cout << endl;
	
	//emplace  insert element at specific position
	cout << "emplace(): ";
	tens.emplace(tens.begin(), 300);

	for (int i : tens) {
		cout << i << " ";
	}
	cout << endl;
	
	  //insert at last position
	  cout << "emplace_back(400): ";
		tens.emplace_back(400);

		for (int i : tens) {
			cout << i << " ";
		}
		cout << endl;

		//clear entire vector
		cout << "After clear(): ";
		tens.clear();

		cout << "SIZE AFTER tens.clean(): " << tens.size() << endl;
		

		vector<string> heros = { "superman","spiderman","ironman","captian america","batman" };

		cout << "Before swaping: " << endl;
		cout << "actor vector: ";
		for (string i : actor) {
			cout << i << " ";
		}
		cout << endl;

		cout << " heros vector: ";
		for (string i : heros) {
			cout << i << " ";
		}
		cout << endl;

		heros. swap(actor);
		cout << "After heros.swap(actor):"<<endl;

		cout << "actor vector: ";
		for (string i : actor) {
			cout << i << " ";
		}
		cout << endl;

		cout << " heros vector: ";
		for (string i : heros) {
			cout << i << " ";
		}
		cout << endl;

}

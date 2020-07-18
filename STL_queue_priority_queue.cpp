#include <iostream>
#include<queue>
using namespace std;

int main()
{
	//first in first out
	queue<int>myq;

	myq.push(10);
	myq.push(12);
	myq.push(14);
	myq.push(16);
	myq.push(18);

	cout << "front() :" << myq.front() << endl;  //10
	cout << "back() :" << myq.back()<<endl;      //18

	cout << "After pop: ";
	myq.pop(); //removes the first inserted element

	//traversing through queue is not got, we are poping the elements 

	while (!myq.empty()) {
		cout << " " << myq.front();
		myq.pop();              //all emement in queue deleted after this while   //12 14 16 18
	}
	cout << endl;  

	//PRIORITY QUEUE
	//the value with highest priority goes to top

	priority_queue<int> mypq;

	mypq.push(5);
	mypq.push(50);
	mypq.push(10);
	mypq.push(30);
	mypq.push(60);

	//!front() is not in priority queue its top()
	cout <<"Top: " << mypq.top() << endl; //60
    
	//traversing through priority queue
	cout << "Traversing :";
	while (!mypq.empty()) {
		cout << " " << mypq.top();         //60 50 30 10  5
		mypq.pop();
	}
	cout << endl;
}


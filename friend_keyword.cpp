#include <iostream>
#include<string>
using namespace std;

class Candy {
      //making friend
	friend class Milk;
        string _name;
	int _no=00;
public:
  	int netgram = 00;

	  string getName() {
		 return _name;
	 }
  
	Candy(const string& name, const int& no) :_name(name), _no(no) {}
  
	void details() {
		cout << "Name: " << _name << endl;;
		cout << "No: " << _no << endl;
		cout <<"Net gram is: " << netgram << endl;
		puts("--------------------------------------");
	}
  
};

//class Milk
class Milk :public Candy {
public:
	Milk(string name,int no) :Candy(name, no){}
  
	void allcandy() {
		cout << "my name is: " << getName()<<endl;
		//below code is possible only after making Milk class as friend
		cout << "my name is: " << _name << endl;;
		cout << "NO: " << _no << endl;;

	}
};

int main() {

	Candy boundry("Boundry",1);
	boundry.details();

	Candy dairymilk("DairyMilk", 2);
	dairymilk.netgram = 55;
	dairymilk.details();

	cout<<"Milk class"<<endl;

	Milk choco("Chocomilk",3);
	choco.netgram = 66;
	choco.details();
        choco.allcandy();
	return 0;

}

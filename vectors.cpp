#include <iostream>
#include<vector>
using namespace std;

struct Numbers {
	float a, b, c, d;
};

//operator overloading of <<
ostream& operator<<(ostream& stream, Numbers number) {
 	return stream << number.a << " " << number.b << " " << number.c << " " << number.d << endl;
}

int main()
{
	//vector are array list of unlimited size
	//inside <> can include data type, struct or class
	vector<int> v;
	
	//can also be specified with size
	vector<float> f(4);
	cout << "f.size():" << f.size()<<endl;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	cout << "v.front(): "<<v.front()<<endl;
	cout << "v.back(): " << v.back()<<endl;
	cout << "v.size(): " << v.size()<<endl;
	cout << "v.at(3): " << v.at(3)<<endl;
	
	//looping through vector
	for (auto i = v.begin(); i!=v.end(); ++i) {
		cout<<*i<<endl;
	}

	vector<Numbers> number;
	number.push_back({ 1,2,3,4 });
	number.push_back({ 5,6,7,8 });

	//little bit advanced looping using operator overloading(<<)
	for (int i = 0; i < number.size(); ++i) {
		cout << number[i] << endl; //possible after operator overloading
	}
}


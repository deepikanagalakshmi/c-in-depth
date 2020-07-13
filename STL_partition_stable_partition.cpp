#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

	//partition() divide vector into 2 half based on the condition given. NOT IN ORDER
//	partition(v.begin(), v.end(), [](auto x) {return x % 2 == 0; });          //OUTPUT----->10 2 8 4 6 5 7 3 9 1

	//stable_partition KEEPS AN SORTED ORDER.
	stable_partition(v.begin(), v.end(), [](auto x) {return x%2==0; });        //OUTPUT------>2 4 6 8 10 1 3 5 7 9

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
}


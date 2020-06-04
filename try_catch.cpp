include <iostream>
using namespace std;
int main()
{
	//int call_api = 2;
	//float call_api=2.0;
	char call_api = 'd';
	try {
		cout << "trying to use api value\n";
		cout << "did some testing with api value\n";

		throw call_api;
		cout << "NO code execute after return and throw";

	 }
	catch (int x) {
		cout << "handeled integer exception through catch\n";
	}
	catch (float y) {
		cout << "handeled float exception through catch\n";
	}
	//if we dont know what value is going to come through call_api we can use the DEFAULT CATCH
	catch (...) {
		cout << "something went wrong\n";
	}

	cout << "keep on moving with rest of the code\n";
	return 0;
}


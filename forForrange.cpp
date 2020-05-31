using namespace std;
int main() 
{
	int nums[] = { 1,2,3,4,5,6 };

	cout << "Using for loop" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << nums[i] << endl;
	}

	cout << "Using range based for loop" << endl;

	for (int i : nums) {
		cout << i << endl;
	}
	return 0;

}

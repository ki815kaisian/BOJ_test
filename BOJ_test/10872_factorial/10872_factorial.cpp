#include <iostream>

using namespace std;

int main(void)
{
	long factorial = 1;
	int number;

	cin >> number;

	for (int i = number; i > 0; i--) {
		factorial *= i;
	}
	cout << factorial << endl;

	return 0;
}
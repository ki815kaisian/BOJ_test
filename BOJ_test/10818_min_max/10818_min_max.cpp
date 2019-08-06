#include <iostream>

using namespace std;

int main(void)
{
	int number;
	int input;
	int min = INT32_MAX;
	int max = INT32_MIN;

	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> input;
		if (input > max)max = input;
		if (input < min)min = input;

	}
	cout << min << " " << max << endl;

	return 0;
}

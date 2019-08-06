#include <iostream>

using namespace std;

int main(void)
{
	int input;
	int seq;
	int max = INT32_MIN;
	for (int i = 0; i < 9; i++) {
		cin >> input;
		if (input > max) {
			max = input;
			seq = i + 1;
		}
	}
	cout << max << endl;
	cout << seq << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int times;
	int num1;
	int num2;

	cin >> times;
	for (int i = 0; i < times; i++) {
		cin >> num1 >> num2;
		cout << "Case #" << i + 1 << ": " << num1 + num2 << endl;
	}

	return 0;
}
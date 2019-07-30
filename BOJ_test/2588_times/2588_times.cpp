#include <iostream>

using namespace std;

int main(void)
{
	int num1;
	int num2;
	int times = 0;

	cin >> num1;
	cin >> num2;

	for (int i = 1; i <= 3; i++) {
		int temp;
		int under = 1;
		for (int j = 1; j < i; j++) {under *= 10;}
		temp = num1 * (num2 % 10);
		num2 /= 10;
		cout << temp << endl;
		times += under * temp;
	}
	cout << times << endl;
	return 0;
}
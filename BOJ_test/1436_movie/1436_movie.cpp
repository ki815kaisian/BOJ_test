#include <iostream>

using namespace std;

int main(void)
{
	int input;
	cin >> input;

	int cnt = 0;
	int number = 666;

	while (cnt < input) {
		int temp = number;
		while (temp >= 666) {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			temp /= 10;
		}
		number++;
	}
	
	cout << number - 1 << endl;
	
	return 0;
}
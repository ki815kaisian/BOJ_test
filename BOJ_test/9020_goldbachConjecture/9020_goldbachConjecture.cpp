#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int input);

int main(void)
{
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		for (int j = input / 2; j > 1; j--) {
			if (isPrime(j))if (isPrime(input - j)) {
				cout << j << ' ' << input - j << endl;
				break;
			}
		}
	}

	return 0;
}

int isPrime(int input)
{
	if (input > 3) {
		int root;
		root = (int)sqrt(input);
		for (int i = 2; i <= root; i++) {
			if (input%i == 0)return 0;
		}
	}
	else {
		if (input == 1)return 0;
		else return 1;
	}
	return 1;
}

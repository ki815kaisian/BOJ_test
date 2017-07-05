#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int input);

int main(void)
{
	int input;
	cin >> input;

	while (input != 0) {
		int primeNumberCount = 0;
		for (int i = input + 1; i <= 2 * input; i++)
		{
			if (isPrime(i))primeNumberCount++;
		}
		cout << primeNumberCount << endl;
		cin >> input;
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

#include <iostream>
#include <math.h>
//시간초과
using namespace std;

int isPrime(int input);

int main(void)
{
	int under = 0;
	int upper = 0;

	cin >> under;
	cin >> upper;

	for (int i = under; i <= upper; i++) {
		if (isPrime(i)) {
			cout << i << endl;
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

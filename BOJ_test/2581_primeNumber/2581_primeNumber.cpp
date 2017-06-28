#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int input);

int main(void)
{
	int under = 0;
	int upper = 0;

	cin >> under;
	cin >> upper;

	int minimum = 10000;
	int primeSum = 0;

	for (int i = under; i <= upper; i++) {
		if (isPrime(i)) {
			if (i < minimum)minimum = i;
			primeSum += i;
		}
	}
	if(minimum==10000)cout << -1 << endl;
	else {
		cout << primeSum << endl;
		cout << minimum << endl;
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

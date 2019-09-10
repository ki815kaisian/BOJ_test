#include <stdio.h>//시간초과
using namespace std;

int isPrime(int input);

int main(void)
{
	int under = 0;
	int upper = 0;

	scanf("%d %d", &under, &upper);

	for (int i = under; i <= upper; i++) {
		if (isPrime(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}

int isPrime(int input)
{
	if (input > 3) {
		for (int i = 2; i*i <= input; i++) {
			if (input%i == 0)return 0;
		}
	}
	else {
		if (input == 1)return 0;
		else return 1;
	}
	return 1;
}

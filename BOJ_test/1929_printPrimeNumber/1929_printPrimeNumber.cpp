#include <stdio.h>

using namespace std;

int number[1000001] = { 0 };

int main(void)
{
	int under = 0;
	int upper = 0;

	scanf("%d %d", &under, &upper);

	number[0] = number[1] = 1;

	for (int i = 2; i*i <= upper; i++) {
		if (number[i] == 0) {
			for (int j = i + i; j <= upper; j += i) {
				number[j] = 1;
			}
		}
	}

	for (int i = under; i <= upper; i++) {
		if (number[i] == 0)printf("%d\n",i);
	}
	return 0;
}

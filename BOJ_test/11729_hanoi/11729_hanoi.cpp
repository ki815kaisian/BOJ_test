#include <stdio.h>

void hanoi(int a, int b, int n);

void hanoi(int a, int b, int n) {
	if (!n)return;

	hanoi(a, 6 - a - b, n - 1);
	printf("%d %d\n", a, b);
	hanoi(6 - a - b, b, n - 1);
}

int main(void) 
{
	int input;

	scanf("%d", &input);
	int times;
	times = (2 << input - 1) - 1;
	printf("%d\n",times);

	hanoi(1,3,input);

	return 0;
}
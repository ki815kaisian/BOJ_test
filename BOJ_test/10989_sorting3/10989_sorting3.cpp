#include <stdio.h>

int main(void) 
{
	int number[10001] = { 0 };
	int count;

	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		int temp;
		scanf("%d", &temp);
		number[temp]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (number[i] > 0) {
			for (int j = 0; j < number[i]; j++) {
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
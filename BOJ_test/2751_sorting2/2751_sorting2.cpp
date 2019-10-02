#include <stdio.h>

int main(void)
{
	bool pinputArray[1000001] = { 0 };
	bool ninputArray[1000001] = { 0 };
	int count;

	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		int temp;
		scanf("%d", &temp);
		if(temp>=0)pinputArray[temp] = 1;
		else {
			temp = temp * -1;
			ninputArray[temp] = 1;
		}

	}
	for (int i = 1000000; i > 0; i--) {
		if (ninputArray[i] == 1)printf("-%d\n", i);
	}
	for (int i = 0; i <= 1000000; i++) {
		if (pinputArray[i] == 1)printf("%d\n", i);
	}

	return 0;
}
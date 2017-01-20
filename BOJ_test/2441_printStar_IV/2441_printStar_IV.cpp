#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int A = 0;
	cin >> A;

	if (A > 100)return 0;

	for (int i = 1; i <= A; i++){
		for (int j = 1; j < i; j++)printf(" ");
		for (int j = i; j <= A; j++)printf("*");
		printf("\n");
	}
	return 0;

}
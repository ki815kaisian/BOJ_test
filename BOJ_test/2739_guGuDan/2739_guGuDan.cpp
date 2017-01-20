#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int A = 0;
	cin >> A;
	if (A > 9)return 0;
	if (A < 1)return 0;

	for (int i = 1; i <= 9; i++)printf("%d * %d = %d\n", A, i, A*i);

	return 0;

}
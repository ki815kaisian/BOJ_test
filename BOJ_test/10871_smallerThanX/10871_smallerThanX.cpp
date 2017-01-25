#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	int B = 0;
	int inputArray[10000];
	cin >> A;
	cin >> B;

	for (int i = 0; i < A; i++)cin >> inputArray[i];

	for (int i = 0; i < A; i++)if (inputArray[i] < B)printf("%d ", inputArray[i]);


	return 0;

}
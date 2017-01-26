#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	int inputArray[1000];
	cin >> A;

	for (int i = 0; i < A; i++)cin >> inputArray[i];

	int sum = 0;
	int max = 0;
	for (int i = 0; i < A; i++){
		sum += inputArray[i];
		if (inputArray[i] > max)max = inputArray[i];		
	}
	double average = (double)sum / (double)max * 100 / (double)A;
	printf("%.2f ", average);


	return 0;

}
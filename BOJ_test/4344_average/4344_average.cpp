#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	cin >> A;

	for (int i = 0; i < A; i++){
		int inputArray[1000];
		int cnt = 0;
		int sum = 0;
		cin >> cnt;
		for (int j = 0; j < cnt; j++){
			cin >> inputArray[j]; 
			sum += inputArray[j];
		}
		double average = (double)sum / (double)cnt;
		int overThanAverageCnt = 0;
		for (int j = 0; j < cnt; j++){
			if (inputArray[j]>average)overThanAverageCnt++;
		}
		double overThanAverageRate = (double)overThanAverageCnt / (double)cnt * 100;
		printf("%.3f%%\n", overThanAverageRate);
	}


	return 0;

}
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int digit = 0;
	int temp = N;
	for (digit = 0; temp > 0; digit++) {
		temp = temp / 10;
	}
	int min = N - digit * 10;
	if (min < 1)min = 1;

	int generator = 0;
	for (int M = min; M < N; M++) {
		int digitSum = 0;
		temp = M;
		for (int i = 1; i <= digit; i++) {
			digitSum += temp % 10;
			temp /= 10;
		}
		if (M + digitSum == N) {
			generator = M;
			break;
		}
	}
	cout << generator << endl;

	return 0;
}
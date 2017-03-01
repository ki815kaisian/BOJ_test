#include <iostream>

using namespace std;

int main(void)
{
	int caseCnt = 0;

	cin >> caseCnt;

	int manCnt[15][15] = { { 0, }, };
	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 15; j++){
			if (i == 0)manCnt[0][j] = j+1;
			else if (j == 0)manCnt[i][0] = 1;
			else {
				manCnt[i][j] = manCnt[i - 1][j] + manCnt[i][j - 1];
			}
		}
	}

	for (int i = 0; i < caseCnt; i++){
		int inputK = 0;
		int inputN = 0;
		cin >> inputK;
		cin >> inputN;

		cout << manCnt[inputK][inputN-1] << endl;
	}

	return 0;
}
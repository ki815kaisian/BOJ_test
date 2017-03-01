#include <iostream>

using namespace std;

int main(void)
{
	int inputNum = 0;
	int pathCnt = 0;
	int usingNum = 0;
	cin >> inputNum;

	for (pathCnt = 1,usingNum = 1; inputNum > usingNum; pathCnt++){
		usingNum += 6 * pathCnt;
	}
	cout << pathCnt << endl;

	return 0;
}
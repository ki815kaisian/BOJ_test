#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int caseCnt = 0;
	
	cin >> caseCnt;

	for (int i = 0; i < caseCnt; i++){
		int inputX = 0;
		int inputY = 0;
		int distance = 0;
		cin >> inputX;
		cin >> inputY;
		distance = inputY - inputX;
		
		double temp = sqrt(distance);
		int root = floor(temp);
		int cnt = 0;
		if (root * root >= distance)cnt = 2 * root - 1;
		else if (root * root + root >= distance)cnt = 2 * root;
		else cnt = 2 * root + 1;
		cout << cnt << endl;
	}

	return 0;
}
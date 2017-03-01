#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int caseCnt = 0;

	cin >> caseCnt;

	for (int i = 0; i < caseCnt; i++){
		int inputH = 0;
		int inputW = 0;
		int inputN = 0;
		int roomNumber = 0;
		cin >> inputH;
		cin >> inputW;
		cin >> inputN;

		if ((inputN % inputH)!=0)roomNumber = ((inputN / inputH) + 1) + (inputN % inputH) * 100;
		else roomNumber = (inputN / inputH) + inputH * 100;
		cout << roomNumber << endl;
	}

	return 0;
}
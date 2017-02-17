#include <iostream>

using namespace std;

int groupWordChecher(char stringInput[100]);

int main(void)
{
	int caseCnt = 0;
	cin >> caseCnt;
	int result = 0;

	for (int i = 0; i < caseCnt; i++){
		char input[100] = { ' ', };
		cin >> input;
		result += groupWordChecher(input);
	}
	cout << result << endl;
	return 0;
}

int groupWordChecher(char stringInput[100])
{
	int cntChar[26] = { 0, };
	char tempChar = stringInput[0];
	cntChar[(int)(tempChar - 'a')] = -1;
	for (int i = 1; ('a' <= stringInput[i] && stringInput[i] <= 'z'); i++){
		if (tempChar != stringInput[i]){
			if (cntChar[(int)(stringInput[i] - 'a')] != -1)cntChar[(int)(stringInput[i] - 'a')] = -1;
			else return 0;
		}
		tempChar = stringInput[i];
	}
	return 1;
}
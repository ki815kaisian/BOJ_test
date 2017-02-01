#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(void)
{
	int A = 0;
	cin >> A;

	for (int i = 0; i < A; i++){
		char inputArray[80];
		int cnt = 0;
		int sum = 0;
		cin >> inputArray;
		//scanf_s("%s",inputArray,sizeof(inputArray));
		int length = strlen(inputArray);
		for (int j = 0; j < length; j++){
			if (inputArray[j] == 'O')cnt++;
			else cnt = 0;
			sum += cnt;
		}
		cout << sum << endl;
	}


	return 0;

}
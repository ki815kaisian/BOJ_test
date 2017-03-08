#include <iostream>

using namespace std;

int main(void)
{
	int input;
	int digit[10] = { 0, };
	cin >> input;

	int temp = input;
	for (; temp > 0;){
		digit[temp % 10]++;
		temp /= 10;
	}

	temp = (digit[6] + digit[9] + 1) / 2;
	digit[6] = temp;
	digit[9] = temp;

	int max=0;
	for (int i = 0; i < 10; i++){
		if (max < digit[i])max = digit[i];
	}
	cout << max << endl;

	return 0;
}
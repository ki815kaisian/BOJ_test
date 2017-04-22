#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	int B = 0;
	int C = 0;

	cin >> A;
	cin >> B;
	cin >> C;

	int mul = A * B * C;
	int digitCount[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	while (mul > 0){
		int tmp = mul % 10;
		digitCount[tmp]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++){
		cout << digitCount[i] << endl;
	}

	return 0;
}
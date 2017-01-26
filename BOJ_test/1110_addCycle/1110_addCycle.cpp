#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int cnt = 0;
	cin >> A;
	B = A / 10;
	C = A % 10;
	D = C * 10 + (B + C) % 10;
	for (cnt = 1; A != D; cnt++){
		B = D / 10;
		C = D % 10;
		D = C * 10 + (B + C) % 10;
	}
	
	cout << cnt << endl;
	return 0;

}
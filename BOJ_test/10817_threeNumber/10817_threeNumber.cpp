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

	cout << ((A > B) ? (A > C ? (B > C ? B : C) : A) : (B > C ? (A > C ? A : C) : B)) << endl;

	return 0;

}
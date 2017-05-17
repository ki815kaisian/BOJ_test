#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	cin >> A;
	if (A<3 || A>5000)return 0;
	if (A % 3 == 0 || A % 5 == 0 || A >= 8){
		int quotient = 0;
		int remainder = 0;

		quotient = A / 5;
		remainder = A % 5;
		if (remainder == 0)cout << quotient << endl;
		else if (remainder == 1)cout << quotient + remainder << endl;
		else if (remainder == 2)cout << quotient + remainder << endl;
		else if (remainder == 3)cout << quotient + (remainder / 3) << endl;
		else cout << quotient + (remainder / 3) + (remainder % 3) << endl;

	}
	else cout << "-1" << endl;

	return 0;

}
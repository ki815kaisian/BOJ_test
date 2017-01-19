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
	cout << (A + B) % C << endl;
	cout << (A % C + B % C) % C << endl;
	cout << (A * B) % C << endl;
	cout << (A % C * B % C) % C << endl;
	return 0;

}
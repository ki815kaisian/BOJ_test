#include <iostream>

using namespace std;

int main(void)
{
	int num1, num2;
	cin >> num1;
	cin >> num2;

	if (num1 > num2)cout << ">" << endl;
	else if (num1 < num2)cout << "<" << endl;
	else cout << "==" << endl;

	return 0;
}
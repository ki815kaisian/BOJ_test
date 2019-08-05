#include <iostream>

using namespace std;

int main(void)
{
	int getYear;
	cin >> getYear;

	if (getYear % 4 == 0 && (getYear % 100 != 0 || getYear % 400 == 0))cout << "1" << endl;
	else cout << "0" << endl;

	return 0;
}
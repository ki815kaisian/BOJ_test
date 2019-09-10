#include <iostream>

using namespace std;

int main(void)
{
	long fixed;
	long change;
	long price;

	cin >> fixed >> change >> price;

	long product;
	long profit = price - change;

	if (profit <= 0)product = -1;
	else product = fixed / profit + 1;

	cout << product << endl;

	return 0;
}
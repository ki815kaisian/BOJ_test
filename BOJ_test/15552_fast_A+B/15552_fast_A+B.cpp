#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int times;
	int num1;
	int num2;

	cin >> times;
	for (int i = 0; i < times; i++) {
		cin >> num1 >> num2;
		cout << num1 + num2 << "\n";
	}


	return 0;
}

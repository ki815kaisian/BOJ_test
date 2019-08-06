#include <iostream>

using namespace std;

int main(void)
{
	int mod[42];
	int input;
	int cnt = 0;

	for (int i = 0; i < 42; i++)mod[i] = 0;

	for (int i = 0; i < 10; i++) {
		cin >> input;
		mod[input % 42] += 1;
	}
	for (int i = 0; i < 42; i++) {
		if (mod[i] > 0)cnt++;
	}
	cout << cnt << endl;


	return 0;
}
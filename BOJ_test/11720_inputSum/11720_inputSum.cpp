#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int N = 0;
	int input = 0;
	int sum = 0;
	cin >> N;
	cin.clear();
	cin.ignore();
	for (int i = 1; i <= N; i++){
		int temp = (int)(getchar() - '0');
		sum += temp;
	}
	cout << sum << endl;

	return 0;

}